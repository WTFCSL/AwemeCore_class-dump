//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol AWEHotPointPanelControllerDelegate;

@interface AWEHotSpotInnerContext : NSObject <NSCopying> {
    BOOL _isNearByStyle;
    NSString *_referString;
    NSString *_previousPage;
    long long _hotFeedStyle;
    id<AWEHotPointPanelControllerDelegate> _delegate;
    NSString *_hotSpotServerParamStr;
    NSDictionary *_bizParams;
}

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isNearByStyle;
@property (nonatomic) long long hotFeedStyle;
@property (weak, nonatomic) id<AWEHotPointPanelControllerDelegate> delegate;
@property (copy, nonatomic) NSString *hotSpotServerParamStr;
@property (copy, nonatomic) NSDictionary *bizParams;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)bizParams;
- (void)setBizParams:(id)arg0;
- (long long)hotFeedStyle;
- (void)setHotFeedStyle:(long long)arg0;
- (id)hotSpotServerParamStr;
- (void)setHotSpotServerParamStr:(id)arg0;
- (void)setIsNearByStyle:(BOOL)arg0;
- (BOOL)isNearByStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end