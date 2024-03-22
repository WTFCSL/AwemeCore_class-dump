//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;
@protocol TIMXOConversationsUnreadCountCalculatorDelegate;

@interface TIMXOConversationsUnreadCountCalculatorInitConfig : NSObject <IESIMSDKConversationsUnreadCountCalculatorInitConfig> {
    BOOL _maintainUnreadCount;
    BOOL _unreadCountContainsMutedConversation;
    BOOL _unreadCountContainsHalfMutedConversation;
    BOOL _maintainMentionedCount;
    BOOL _addToIMTotalUnreadCount;
    BOOL _containNoboxType;
    BOOL _canUseOneSqlToInquireUnreadCount;
    BOOL _shouldDemoteUnreadCount;
    TIMXSDKInstance *_rootObject;
    id<TIMXOConversationsUnreadCountCalculatorDelegate> _delegate;
    long long _boxType;
    long long _userIDWhenInit;
    long long _boxTypeMask;
    long long _shouldNotContainedBoxTypeMask;
    long long _unreadNeglectMask;
    double _demoteUnreadCountTimestamp;
}

@property (nonatomic) BOOL maintainUnreadCount;
@property (nonatomic) BOOL unreadCountContainsMutedConversation;
@property (nonatomic) BOOL unreadCountContainsHalfMutedConversation;
@property (nonatomic) BOOL maintainMentionedCount;
@property (nonatomic) BOOL addToIMTotalUnreadCount;
@property (nonatomic) long long boxTypeMask;
@property (nonatomic) long long shouldNotContainedBoxTypeMask;
@property (nonatomic) long long unreadNeglectMask;
@property (nonatomic) BOOL containNoboxType;
@property (nonatomic) BOOL canUseOneSqlToInquireUnreadCount;
@property (nonatomic) BOOL shouldDemoteUnreadCount;
@property (nonatomic) double demoteUnreadCountTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) TIMXSDKInstance *rootObject;
@property (retain, nonatomic) id<TIMXOConversationsUnreadCountCalculatorDelegate> delegate;
@property (nonatomic) BOOL maintainUnreadCount;
@property (nonatomic) BOOL unreadCountContainsMutedConversation;
@property (nonatomic) BOOL unreadCountContainsHalfMutedConversation;
@property (nonatomic) BOOL maintainMentionedCount;
@property (nonatomic) BOOL addToIMTotalUnreadCount;
@property (nonatomic) long long boxType;
@property (nonatomic) long long userIDWhenInit;
@property (nonatomic) long long boxTypeMask;
@property (nonatomic) long long shouldNotContainedBoxTypeMask;
@property (nonatomic) long long unreadNeglectMask;
@property (nonatomic) BOOL containNoboxType;
@property (nonatomic) BOOL canUseOneSqlToInquireUnreadCount;
@property (nonatomic) BOOL shouldDemoteUnreadCount;
@property (nonatomic) double demoteUnreadCountTimestamp;

- (void)setBoxType:(long long)arg0;
- (long long)boxType;
- (long long)boxTypeMask;
- (void)setBoxTypeMask:(long long)arg0;
- (long long)unreadNeglectMask;
- (void)setUnreadNeglectMask:(long long)arg0;
- (long long)shouldNotContainedBoxTypeMask;
- (void)setShouldNotContainedBoxTypeMask:(long long)arg0;
- (BOOL)canUseOneSqlToInquireUnreadCount;
- (void)setMaintainUnreadCount:(BOOL)arg0;
- (void)setUnreadCountContainsHalfMutedConversation:(BOOL)arg0;
- (void)setAddToIMTotalUnreadCount:(BOOL)arg0;
- (void)setCanUseOneSqlToInquireUnreadCount:(BOOL)arg0;
- (void)setContainNoboxType:(BOOL)arg0;
- (void)setShouldDemoteUnreadCount:(BOOL)arg0;
- (void)setDemoteUnreadCountTimestamp:(double)arg0;
- (void)setUnreadCountContainsMutedConversation:(BOOL)arg0;
- (double)demoteUnreadCountTimestamp;
- (BOOL)maintainUnreadCount;
- (BOOL)unreadCountContainsMutedConversation;
- (BOOL)unreadCountContainsHalfMutedConversation;
- (BOOL)maintainMentionedCount;
- (void)setMaintainMentionedCount:(BOOL)arg0;
- (BOOL)addToIMTotalUnreadCount;
- (BOOL)containNoboxType;
- (BOOL)shouldDemoteUnreadCount;
- (void)setUserIDWhenInit:(long long)arg0;
- (long long)userIDWhenInit;
- (void).cxx_destruct;
- (id)delegate;
- (id)rootObject;
- (void)setDelegate:(id)arg0;
- (void)setRootObject:(id)arg0;

@end
