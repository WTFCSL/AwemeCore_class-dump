//
//     Generated by private class-dump
//

@class NSArray, TIMXThreadSafeMutableDictionary, TIMXSDKInstance;
@protocol TIMXOConversationFilterControlDelegate;

@interface TIMXOConversationFilterControl : NSObject {
    BOOL _boxTypeMaskEnable;
    BOOL _containNoboxType;
    BOOL _isDouYinTarget;
    long long _boxType;
    long long _shouldNotContainedBoxTypeMask;
    long long _boxTypeMask;
    TIMXSDKInstance *_r;
    double _demoteUnreadCountTimestamp;
    id<TIMXOConversationFilterControlDelegate> _delegate;
    NSArray *_supportBoxTypes;
    TIMXThreadSafeMutableDictionary *_filterCacheDic;
}

@property (nonatomic) BOOL isDouYinTarget;
@property (retain, nonatomic) NSArray *supportBoxTypes;
@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *filterCacheDic;
@property (nonatomic) BOOL boxTypeMaskEnable;
@property (nonatomic) long long boxType;
@property (nonatomic) long long shouldNotContainedBoxTypeMask;
@property (nonatomic) BOOL containNoboxType;
@property (nonatomic) long long boxTypeMask;
@property (nonatomic) double demoteUnreadCountTimestamp;
@property (weak, nonatomic) id<TIMXOConversationFilterControlDelegate> delegate;

- (void)setBoxType:(long long)arg0;
- (void)conversationDidUpdate:(id)arg0;
- (long long)boxType;
- (long long)boxTypeMask;
- (void)setBoxTypeMask:(long long)arg0;
- (long long)shouldNotContainedBoxTypeMask;
- (void)setShouldNotContainedBoxTypeMask:(long long)arg0;
- (BOOL)shouldShowWithConversation:(id)arg0 conversationID:(id)arg1;
- (BOOL)shouldShowWithConversationId:(id)arg0;
- (BOOL)shouldShowConversation:(id)arg0;
- (void)setContainNoboxType:(BOOL)arg0;
- (void)setDemoteUnreadCountTimestamp:(double)arg0;
- (double)demoteUnreadCountTimestamp;
- (BOOL)containNoboxType;
- (void)setIsDouYinTarget:(BOOL)arg0;
- (void)setBoxTypeMaskEnable:(BOOL)arg0;
- (id)filterCacheDic;
- (BOOL)isBoxTypeSupport:(id)arg0;
- (BOOL)isDouYinTarget;
- (BOOL)boxTypeMaskEnable;
- (id)syncExtFromConversation:(id)arg0;
- (BOOL)isNotDisplay:(id)arg0;
- (BOOL)isBehaviorSameAsGeneralBoxType:(long long)arg0;
- (id)initWithRoot:(id)arg0 boxType:(long long)arg1 boxTypeMask:(long long)arg2 boxTypeMaskEnable:(BOOL)arg3 shouldNotContainedBoxTypeMask:(long long)arg4 containNoboxType:(BOOL)arg5 delegate:(id)arg6;
- (id)supportBoxTypes;
- (void)setSupportBoxTypes:(id)arg0;
- (void)setFilterCacheDic:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end