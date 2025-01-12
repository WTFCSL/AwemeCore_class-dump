//
//     Generated by private class-dump
//

@class AFDSocialTimeTrackerStack, NSString;

@interface AFDSocialSceneListener : NSObject <AFDSocialSceneListenerProtocol> {
    long long _currentScene;
    AFDSocialTimeTrackerStack *_trackerStack;
}

@property (class, readonly, nonatomic) AFDSocialSceneListener *sharedInstance;

@property (nonatomic) long long currentScene;
@property (retain, nonatomic) AFDSocialTimeTrackerStack *trackerStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didEnterScene:(long long)arg0;
- (void)setCurrentScene:(long long)arg0;
- (void)didLeaveScene:(long long)arg0;
- (void)didNavigateWithPageDepth:(long long)arg0 inScene:(long long)arg1;
- (void)handleApplicationDidEnterBackgroundNotification:(id)arg0;
- (void)handleTabBarIndexDidChangeNotification:(id)arg0;
- (void)handleFeedContainerDidClickLiveEntranceNotification:(id)arg0;
- (void)handleRecorderViewControllerDidAppearNotification:(id)arg0;
- (void)handleRecorderViewControllerDidDisappearNotification:(id)arg0;
- (void)handleRecorderNavigationControllerDidAppearNotification:(id)arg0;
- (void)handleRecorderNavigationControllerDidDisappearNotification:(id)arg0;
- (id)trackerStack;
- (void)setTrackerStack:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)currentScene;

@end
