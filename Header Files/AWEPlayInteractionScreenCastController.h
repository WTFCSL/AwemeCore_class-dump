//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol BDByteScreenCastLivePlayerControlViewProtocol;

@interface AWEPlayInteractionScreenCastController : AWEPlayInteractionBaseController <AWEScreenCastControlViewInteractiveDelegate, AWEPlayInteractionPlayerLifeCycleProtocol, AWEPlayInteractionScreenCastControllerProtocol> {
    BOOL _isInShrink;
    BOOL _hasHide;
    UIView<BDByteScreenCastLivePlayerControlViewProtocol> *_screenCastControlView;
    UIView *_blackView;
    UIView *_animationBackGroundView;
    double _originViewHeight;
}

@property (retain, nonatomic) UIView<BDByteScreenCastLivePlayerControlViewProtocol> *screenCastControlView;
@property (retain, nonatomic) UIView *blackView;
@property (retain, nonatomic) UIView *animationBackGroundView;
@property (nonatomic) double originViewHeight;
@property (nonatomic) BOOL isInShrink;
@property (nonatomic) BOOL hasHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)onPlayerPlay:(id)arg0 ifPlay:(BOOL)arg1;
- (id)screenCastControlView;
- (void)closeButtonClicked:(id)arg0;
- (BOOL)videoContentIsLandscape;
- (BOOL)checkIsScreenCastSubView:(id)arg0;
- (void)removeControlViewIfNeeded;
- (void)enterScreenCastStatusIfNeeded;
- (void)removeScreenCastControlView;
- (void)updateScreenCastViewLayout:(id)arg0;
- (void)startScreenCastIfNeeded;
- (void)setScreenCastControlView:(id)arg0;
- (void)updateScreenCastConfig;
- (void)removeControlView:(id)arg0;
- (void)showControlView:(id)arg0;
- (void)updateControlViewFrame;
- (void)notFindTVVideoInVideoList;
- (void)castPlayProgressInfoChanged:(id)arg0;
- (void)castPlayStatusChanged:(unsigned long long)arg0;
- (void)alreadyCastPlayAllVideos;
- (id)castExtraParams:(id)arg0;
- (id)blackView;
- (void)screenCastButtonClicked;
- (void)videoDidShrink;
- (void)videoDidMagnify;
- (void)quitFromLandscapeFeed;
- (void)willVideoDidShrink;
- (void)videoContentFameDidChange;
- (BOOL)needEnterCastPage;
- (BOOL)hasHide;
- (void)setHasHide:(BOOL)arg0;
- (id)currentProgressInfo;
- (id)animationBackGroundView;
- (void)setIsInShrink:(BOOL)arg0;
- (double)originViewHeight;
- (void)setOriginViewHeight:(double)arg0;
- (BOOL)isInShrink;
- (void)setBlackView:(id)arg0;
- (void)setAnimationBackGroundView:(id)arg0;
- (void).cxx_destruct;
- (id)containerView;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)willDisplay;

@end