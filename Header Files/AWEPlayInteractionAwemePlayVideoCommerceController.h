//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWEAwemePlayVideoControllerProtocol, AWEPlayVideoViewControllerProtocol;

@interface AWEPlayInteractionAwemePlayVideoCommerceController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayVideoControllerProtocol, AWEPlayInteractionPlayerLifeCycleProtocol> {
    BOOL _isAdLearnMoreShowed;
}

@property (nonatomic) BOOL isAdLearnMoreShowed;
@property (readonly, weak, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEPlayVideoViewControllerProtocol> *videoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onUpdatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1;
- (void)videoController_updatePlayerIfNeeded:(id)arg0;
- (void)showAdLearnMoreViewImmediatly:(id)arg0;
- (void)_setupAdLearnMoreView;
- (void)setupAdSimilarRecommandView;
- (void)_preloadOperationWebView;
- (void)setupAnchorIfNeed;
- (void)_setupRedpacketAnimationIfNeed;
- (void)_playAdRiflePendantElementWebpIcon;
- (void)logFlexibleDurationActionMask;
- (void)setIsAdLearnMoreShowed:(BOOL)arg0;
- (BOOL)isAdLearnMoreShowed;
- (BOOL)setupLearnMoreViewForInteractiveVideo;
- (void)_setupAdLearnMoreView:(long long)arg0 changeTime:(long long)arg1 animateWhenDelay:(BOOL)arg2;
- (BOOL)isCorrectVideoViewController;
- (void)_setupAdCardIfNeeded:(id)arg0;
- (void)_updatePlayerConfiguration:(id)arg0;
- (void)viewDidLoad;
- (id)videoDelegate;

@end
