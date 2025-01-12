//
//     Generated by private class-dump
//

@class NSString, AWENearbyIconGuideViewController;

@interface AWENearbyPublishGuideManager : NSObject <AWEBizTabBarMessage> {
    AWENearbyIconGuideViewController *_iconGuideViewController;
}

@property (retain, nonatomic) AWENearbyIconGuideViewController *iconGuideViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)tabBarController:(id)arg0 didSelectItemType:(long long)arg1 previousItemType:(long long)arg2;
- (void)__observeTabChange;
- (long long)__indexForNearby;
- (void)__handleTabChange:(BOOL)arg0;
- (void)__handleFeedContainerIndexChange:(id)arg0;
- (id)iconGuideViewController;
- (id)__plusButton;
- (void)setIconGuideViewController:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)__containerView;
- (id)__contentViewController;

@end
