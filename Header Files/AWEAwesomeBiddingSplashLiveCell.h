//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, UIView, AWEAwesomeSplashLiveCellAccessoryView, UIViewController;
@protocol AWELiveBaseViewControllerProtocol, AWELiveSplashStreamViewProtocol;

@interface AWEAwesomeBiddingSplashLiveCell : AWEFeedLiveStreamTableViewCell <AWEAwesomeSplashLiveCellAccessoryViewDelegate> {
    AWEAwesomeSplashLiveCellAccessoryView *_liveCellAccessoryView;
    UIView *_bottomGradientView;
    AWEAwemeModel *_model;
}

@property (readonly, nonatomic) UIViewController<AWELiveBaseViewControllerProtocol> *streamViewController;
@property (readonly, nonatomic) UIView<AWELiveSplashStreamViewProtocol> *streamView;
@property (retain, nonatomic) AWEAwesomeSplashLiveCellAccessoryView *liveCellAccessoryView;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (id)createCubicBezierAnimationWith:(id)arg0 duration:(double)arg1 timingFunction:(id)arg2;
- (id)liveStatusView;
- (id)streamView;
- (id)liveCellAccessoryView;
- (void)prepareForShowSplash;
- (void)showSplash;
- (void)resetSplashLiveCellWithNeedShowSplash:(BOOL)arg0;
- (void)trackLiveStatusWithEvent:(id)arg0;
- (id)streamViewController;
- (void)trackFirstView;
- (void)hiddenSplashImmediately;
- (void)hiddenSplashWithAnimation;
- (void)addEnterLiveBackgroundViewAnimation;
- (void)addEnterLiveViewAnimation;
- (void)addSkipAdLabelAnimation;
- (void)trackTopLiveWithLabel:(id)arg0 refer:(id)arg1 adExtraData:(id)arg2;
- (void)addContentVCAnimationWitCompletion:(id /* block */)arg0;
- (void)disableFullScreenPopTransitionWithEnable:(BOOL)arg0;
- (void)hideLiveCellAccessoryViewFromSuperview;
- (void)layoutStreamViewWithFullScreen:(BOOL)arg0;
- (void)updateStreamViewGradientContainerView:(BOOL)arg0;
- (void)updateContentVCAccessoriesHidden:(BOOL)arg0 animationDuration:(double)arg1;
- (void)updateLiveCellEnterLiveBackgroundViewBackground;
- (void)showLiveCellAccessoryView;
- (struct CGPoint { double x0; double x1; })liveStatusViewLayerPosition;
- (void)hiddenSplashWithEnterLiveRoom;
- (void)clickSkipAdLabel;
- (void)clickEnterLiveView;
- (void)clickLiveCellAccessoryViewWithPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setLiveCellAccessoryView:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)play;
- (void)reset;
- (void)setupSubviews;
- (void)configureWithModel:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;

@end