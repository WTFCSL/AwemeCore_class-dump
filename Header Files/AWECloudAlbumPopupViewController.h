//
//     Generated by private class-dump
//

@class UINavigationController, NSString, UIView, UIViewController;
@protocol AFDModalViewHelperProtocol, AWECloudAlbumPopupContentVCProtocol;

@interface AWECloudAlbumPopupViewController : UIViewController <AWEPanelTransitionWithBackground, AWECloudAlbumPopupVCProtocol> {
    BOOL _isResetting;
    id<AFDModalViewHelperProtocol> _helper;
    UINavigationController *_innerNavigation;
    UIViewController<AWECloudAlbumPopupContentVCProtocol> *_contentVC;
    double _dragDistance;
    UIView *_topViewForVoiceOver;
}

@property (retain, nonatomic) id<AFDModalViewHelperProtocol> helper;
@property (retain, nonatomic) UINavigationController *innerNavigation;
@property (retain, nonatomic) UIViewController<AWECloudAlbumPopupContentVCProtocol> *contentVC;
@property (nonatomic) double dragDistance;
@property (nonatomic) BOOL isResetting;
@property (retain, nonatomic) UIView *topViewForVoiceOver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPopupVCWithContentVC:(id)arg0 completion:(id /* block */)arg1;
+ (void)showPopupVCWithContentView:(id)arg0 completion:(id /* block */)arg1;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (void)setIsResetting:(BOOL)arg0;
- (id)contentVC;
- (void)setContentVC:(id)arg0;
- (void)addPanGesture;
- (void)setInnerNavigation:(id)arg0;
- (id)innerNavigation;
- (void)dismissPopupVCWithCompletion:(id /* block */)arg0;
- (id)topViewForVoiceOver;
- (id)initWithContentVC:(id)arg0;
- (void)setDragDistance:(double)arg0;
- (void)panGestureDidFinshed;
- (double)dragDistance;
- (void)setTopViewForVoiceOver:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (id)helper;
- (BOOL)isResetting;
- (void)pan:(id)arg0;
- (void)viewDidLoad;

@end
