//
//     Generated by private class-dump
//

@interface AWEActivityPendantHelper : NSObject

+ (id)currentFeedTableVC;
+ (id)currentFeedViewController;
+ (id)currentFeedContainerViewController;
+ (BOOL)canShowInCurrentPage:(id)arg0 isSwitchTab:(BOOL)arg1;
+ (BOOL)shouldHideForCurrentVideo:(id)arg0 baseViewType:(unsigned long long)arg1;
+ (BOOL)shouldHideForCurrentVideo:(id)arg0;
+ (BOOL)shouldHideInCurrentPage:(id)arg0 isSwitchTab:(BOOL)arg1;
+ (BOOL)shouldHideForCurrentVideo:(id)arg0 baseViewType:(unsigned long long)arg1 configMode:(id)arg2;
+ (void)recordClosePendantTime:(long long)arg0;
+ (void)recoverCanShowDeadLineWhenLaunch:(BOOL)arg0;
+ (BOOL)disablePendantFold:(id)arg0;
+ (BOOL)isShowSkylightViewOnFeed;

@end
