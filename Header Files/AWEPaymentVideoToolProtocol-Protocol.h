//
//     Generated by private class-dump
//

@protocol AWEPaymentVideoToolProtocol <NSObject>

+ (BOOL)isPreviewVideo:(id)arg0;
+ (BOOL)enablePreviewVideo;
+ (BOOL)enableDeviceOver;
+ (BOOL)enableAutoOpenOrderPage;
+ (id)allowListSupportAutoPullOrderPage;
+ (BOOL)enableShowLimitFreeHintForOrderPageWithModel:(id)arg0;
+ (BOOL)enableUseBlockStyle;
+ (BOOL)shouldPreventPlayWhenPreviewEndWithModel:(id)arg0;
+ (BOOL)shouldPreventSingleClickPauseWithModel:(id)arg0 currPlayTime:(double)arg1;
+ (BOOL)shouldForbidUnpaidVideoCreatePlayer;
+ (BOOL)enableNewVideoPayment;
+ (BOOL)isDeviceOverVideo:(id)arg0;
+ (BOOL)isDowngradeWithModel:(id)arg0;
+ (BOOL)enableShowLimitFreeHintWithModel:(id)arg0;
+ (BOOL)shouldShowPreviewStartDot:(id)arg0;
+ (BOOL)shouldShowPreviewEndDot:(id)arg0;
+ (double)progressForPreviewStartDot:(id)arg0;
+ (double)progressForPreviewEndDot:(id)arg0;
+ (id)getPreviewDotColor:(id)arg0;
+ (BOOL)shouldRefreshItemWithModel:(id)arg0;

@end