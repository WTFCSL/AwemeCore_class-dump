//
//     Generated by private class-dump
//

@class NSString, AWELiveFormatScoreView;

@interface AWELiveFormatSportScoreElement : AWELiveTopElement <AWELivePreStreamMessageSubscriber> {
    BOOL _isHiddenScore;
    AWELiveFormatScoreView *_scoreView;
}

@property (retain, nonatomic) AWELiveFormatScoreView *scoreView;
@property (nonatomic) BOOL isHiddenScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_canShow;
- (void)streamPlayer_stop;
- (void)onMessageReceivce:(id)arg0 withDict:(id)arg1;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)scoreView;
- (void)p_adjustForLandscape;
- (BOOL)p_gameNotStart;
- (id)p_gameStartTime;
- (id)p_gameDate;
- (void)showScoreIfNeed;
- (id)p_gameForAccess;
- (void)setScoreView:(id)arg0;
- (BOOL)isHiddenScore;
- (void)setIsHiddenScore:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)reset;
- (void)viewDidLoad;

@end
