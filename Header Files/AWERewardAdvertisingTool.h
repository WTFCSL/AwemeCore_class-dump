//
//     Generated by private class-dump
//

@class NSString;

@interface AWERewardAdvertisingTool : NSObject <AWERewardedAdvertisingToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUnlockedVideo:(id)arg0;
+ (BOOL)isNeedUnlockedAndBlockPlay:(id)arg0;
+ (BOOL)isPreviewVideo:(id)arg0;
+ (BOOL)isIAARewardedAdvertisingVideo:(id)arg0;
+ (double)startTimeForPreviewVideo:(id)arg0;
+ (double)endTimeForPreviewVideo:(id)arg0;
+ (BOOL)shouldShowCountDownViewInLandscape:(id)arg0;
+ (double)timeIntervalForMultipleClick;
+ (BOOL)shouldShowMaskViewInLandscape:(id)arg0;
+ (BOOL)shouldShowUnlockButtonInLandscape:(id)arg0;
+ (BOOL)shouldPreventSingleClickPauseWithModel:(id)arg0 currPlayTime:(double)arg1;
+ (BOOL)hasUnlockWithMixID:(id)arg0 currentEpisode:(id)arg1;
+ (BOOL)shouldShowPreviewStartDot:(id)arg0;
+ (BOOL)shouldShowPreviewEndDot:(id)arg0;
+ (double)progressForPreviewStartDot:(id)arg0;
+ (double)progressForPreviewEndDot:(id)arg0;
+ (BOOL)shouldRefreshItemWithModel:(id)arg0;
+ (BOOL)shouldShowUnlockButtonElement:(id)arg0;
+ (BOOL)shouldHideProgressSlider:(id)arg0;
+ (BOOL)shouldShowPreviewDots:(id)arg0;
+ (id)getRewardedAdvertisingPreviewDotColor;
+ (BOOL)shouldShowCountDownView:(id)arg0;
+ (BOOL)shouldShowVideoHasUnlockedElement:(id)arg0;
+ (Class)aAWERewardedAdvertisingToolDOUYINLiteAdapterClass;

- (id)aAWERewardedAdvertisingToolDOUYINLiteAdapter;

@end
