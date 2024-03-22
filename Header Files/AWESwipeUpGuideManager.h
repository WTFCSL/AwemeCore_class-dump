//
//     Generated by private class-dump
//

@class UIViewController, NSString, NSNumber, UITableView;
@protocol AWESwipeUpGuideViewControllerProtocol;

@interface AWESwipeUpGuideManager : NSObject <AWEShareMessage, AWESwipeUpGuideManagerProtocol> {
    BOOL _finishedSwipeUpGestureInFeed;
    BOOL _finishedSwipeUpGuidePresentInFeed;
    BOOL _finishedSwipeUpGestureInDiscoveryV4;
    BOOL _finishedSwipeUpGuidePresentInDiscoveryV4;
    BOOL _finishedSwipeUpGestureInShootingTutorial;
    BOOL _finishedSwipeUpGuidePresentInTodayHotVideo;
    BOOL _finishedSwipeUpGuidePresentPOIWonderTravel;
    BOOL _finishedSwipeUpGuidePresentRemotePlayNewUser;
    BOOL _finishedSwipeUpGuidePresentLiveRemotePlayNewUser;
    BOOL _finishedSwipeUpGuidePresentFamiliarColorCircle;
    BOOL _finishedSwipeUpGuidePresentRelatedVideoInnerStream;
    BOOL _finishedSwipeUpGuideShowInFeed;
    unsigned long long _status;
    unsigned long long _presentScene;
    unsigned long long _dismissType;
    UIViewController<AWESwipeUpGuideViewControllerProtocol> *_swipeUpGuideViewController;
    UITableView *_tableView;
    NSNumber *_sceneNewUserCacheResult;
    unsigned long long _swipeUpGuideInHotVideoPresentTimes;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSNumber *sceneNewUserCacheResult;
@property (nonatomic) unsigned long long swipeUpGuideInHotVideoPresentTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL finishedSwipeUpGestureInFeed;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentInFeed;
@property (nonatomic) BOOL finishedSwipeUpGestureInDiscoveryV4;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentInDiscoveryV4;
@property (nonatomic) BOOL finishedSwipeUpGestureInShootingTutorial;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentInTodayHotVideo;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentPOIWonderTravel;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentRemotePlayNewUser;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentLiveRemotePlayNewUser;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentFamiliarColorCircle;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentRelatedVideoInnerStream;
@property (nonatomic) BOOL finishedSwipeUpGuideShowInFeed;
@property (nonatomic) unsigned long long presentScene;
@property (nonatomic) unsigned long long dismissType;
@property (retain, nonatomic) UIViewController<AWESwipeUpGuideViewControllerProtocol> *swipeUpGuideViewController;

+ (id)sharedInstance;

- (void)presentSwipeUpGuide;
- (BOOL)compareVersion:(id)arg0 with:(id)arg1;
- (double)durationForPresentScene;
- (void)showSwipeUpGuideIfNeeded:(unsigned long long)arg0 onTableView:(id)arg1;
- (void)dimissSwipeUpGuide;
- (id)presentSwipeUpGuideList;
- (void)finishedSwipeUpGestureForPresentScene:(unsigned long long)arg0;
- (void)receiveGestureEvent:(unsigned long long)arg0;
- (id)getCurrentTableViewForViewController:(id)arg0;
- (BOOL)finishedSwipeUpGuideShowInFeed;
- (BOOL)finishedSwipeUpGuidePresentRemotePlayNewUser;
- (unsigned long long)presentScene;
- (void)finishedSwipeUpPresentForPresentScene:(unsigned long long)arg0;
- (void)setDismissType:(unsigned long long)arg0;
- (void)didConfigureShareView:(id)arg0 withContext:(id)arg1;
- (id)topAlertViewOnKeyWindow;
- (void)setSwipeUpGuideViewController:(id)arg0;
- (void)setFinishedSwipeUpGuideShowInFeed:(BOOL)arg0;
- (BOOL)hideForIpadAndSpringFestivalEve;
- (BOOL)_enableSwipeUpGuide:(unsigned long long)arg0;
- (void)setFinishedSwipeUpGuidePresentInFeed:(BOOL)arg0;
- (void)setFinishedSwipeUpGestureInFeed:(BOOL)arg0;
- (BOOL)finishedSwipeUpGestureInFeed;
- (BOOL)finishedSwipeUpGuidePresentInFeed;
- (id)sceneNewUserCacheResult;
- (void)setSceneNewUserCacheResult:(id)arg0;
- (BOOL)enableTableViewFullVisible;
- (BOOL)enableSwipeUpGuide;
- (void)enableSwipeUpGuideForNewUser:(id /* block */)arg0;
- (void)switchPresentScene:(unsigned long long)arg0 tableView:(id)arg1;
- (void)p_presntSwipeUpGuide:(BOOL)arg0;
- (void)getSlideGuideValue:(id /* block */)arg0;
- (void)enablePresentSwipeUpGuideForNewUser:(id /* block */)arg0;
- (BOOL)enablePresentSwipeupGuide;
- (id)swipeUpGuideViewController;
- (id)swipeUpGuideViewControllerForPresent;
- (void)setFinishedSwipeUpGuidePresentInDiscoveryV4:(BOOL)arg0;
- (void)setFinishedSwipeUpGuidePresentRemotePlayNewUser:(BOOL)arg0;
- (void)setFinishedSwipeUpGuidePresentFamiliarColorCircle:(BOOL)arg0;
- (void)setFinishedSwipeUpGuidePresentLiveRemotePlayNewUser:(BOOL)arg0;
- (unsigned long long)swipeUpGuideInHotVideoPresentTimes;
- (void)setSwipeUpGuideInHotVideoPresentTimes:(unsigned long long)arg0;
- (void)setFinishedSwipeUpGuidePresentInTodayHotVideo:(BOOL)arg0;
- (void)setFinishedSwipeUpGuidePresentPOIWonderTravel:(BOOL)arg0;
- (void)setFinishedSwipeUpGuidePresentRelatedVideoInnerStream:(BOOL)arg0;
- (void)setFinishedSwipeUpGestureInDiscoveryV4:(BOOL)arg0;
- (void)setFinishedSwipeUpGestureInShootingTutorial:(BOOL)arg0;
- (void)logStoreKey:(id)arg0 error:(id)arg1;
- (void)setPresentScene:(unsigned long long)arg0;
- (unsigned long long)dismissTypeForPresentScene:(unsigned long long)arg0;
- (unsigned long long)_dismissTypeForPresentScene:(unsigned long long)arg0;
- (double)_durationForPresentScene:(unsigned long long)arg0;
- (id)currentAwemeViewController;
- (BOOL)checkCommentListShowingOnViewController:(id)arg0;
- (BOOL)checkSharePanelShowingOnViewController:(id)arg0;
- (BOOL)finishedSwipeUpGestureInDiscoveryV4;
- (BOOL)finishedSwipeUpGuidePresentInDiscoveryV4;
- (BOOL)finishedSwipeUpGestureInShootingTutorial;
- (BOOL)finishedSwipeUpGuidePresentInTodayHotVideo;
- (BOOL)finishedSwipeUpGuidePresentPOIWonderTravel;
- (BOOL)finishedSwipeUpGuidePresentLiveRemotePlayNewUser;
- (BOOL)finishedSwipeUpGuidePresentFamiliarColorCircle;
- (BOOL)finishedSwipeUpGuidePresentRelatedVideoInnerStream;
- (unsigned long long)swipeUpGuideOptimizationStrategy;
- (id)init;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;
- (unsigned long long)dismissType;

@end
