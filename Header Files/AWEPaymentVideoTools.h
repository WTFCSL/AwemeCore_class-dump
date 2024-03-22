//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPaymentVideoTools : NSObject <AWEPaymentVideoToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
+ (BOOL)hasLimitFreeHintWithModel:(id)arg0;
+ (long long)maxFrequencyForUnpaidVideoTryUnlock;
+ (BOOL)hasUnlockWithMixID:(id)arg0 currentEpisode:(id)arg1;
+ (BOOL)shouldShowPaymentMaskViewWithModel:(id)arg0;
+ (BOOL)isDowngradeWithModel:(id)arg0;
+ (BOOL)enableShowLimitFreeHintWithModel:(id)arg0;
+ (BOOL)shouldShowPreviewStartDot:(id)arg0;
+ (BOOL)shouldShowPreviewEndDot:(id)arg0;
+ (double)progressForPreviewStartDot:(id)arg0;
+ (double)progressForPreviewEndDot:(id)arg0;
+ (id)getPreviewDotColor:(id)arg0;
+ (BOOL)shouldRefreshItemWithModel:(id)arg0;

@end
