//
//     Generated by private class-dump
//

@class AWEFeedRVCardVideoControlContext, UILongPressGestureRecognizer, UITapGestureRecognizer, AWEAwemeModel, AWEPlayInteractionContext, NSString, AWEFeedRVCardVideoControlDispatcherManager, UIPanGestureRecognizer, UIViewController, AWERVCardControlImmersionViewController, AWERVCardControlActivationViewController;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWEFeedRelatedVideoCardControlViewDelegate, AWEAwemeBizPlayVideoProtocol;

@interface AWEFeedRelatedVideoCardControlViewController : UIViewController <UIGestureRecognizerDelegate, AWEShellViewControllerProtocol, AWEFeedRVSingleCardCellProtocol> {
    BOOL _isActivationMode;
    BOOL _isOnSelected;
    unsigned long long _scene;
    AWEAwemeModel *_model;
    AWEPlayInteractionContext *_interactionContext;
    NSString *_enterFrom;
    id<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoViewControllerProtocol> _videoDelegate;
    id<AWEFeedRelatedVideoCardControlViewDelegate> _delegate;
    AWEFeedRVCardVideoControlDispatcherManager *_dispatcherManager;
    UIPanGestureRecognizer *_panGesture;
    AWERVCardControlActivationViewController *_activationViewController;
    AWERVCardControlImmersionViewController *_immersionViewController;
    NSString *_previousPage;
    NSString *_recommendRank;
    AWEFeedRVCardVideoControlContext *_context;
    UIViewController *_viewController;
    UITapGestureRecognizer *_tapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    double _lastClickTimeStamp;
}

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWEFeedRVCardVideoControlContext *context;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWERVCardControlActivationViewController *activationViewController;
@property (retain, nonatomic) AWERVCardControlImmersionViewController *immersionViewController;
@property (retain, nonatomic) AWEFeedRVCardVideoControlDispatcherManager *dispatcherManager;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) double lastClickTimeStamp;
@property (nonatomic) BOOL isActivationMode;
@property (nonatomic) BOOL isOnSelected;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPlayInteractionContext *interactionContext;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoViewControllerProtocol> videoDelegate;
@property (weak, nonatomic) id<AWEFeedRelatedVideoCardControlViewDelegate> delegate;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *recommendRank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)controllerByProtocol:(id)arg0;
- (void)videoPlayPeriodObserver:(double)arg0 duration:(double)arg1;
- (void)videoPlayDidChangePlaybackRate:(double)arg0;
- (id)dispatcherManager;
- (void)addGesture;
- (void)onSelected;
- (void)bindEvent;
- (void)setDispatcherManager:(id)arg0;
- (void)initContainer;
- (void)setupDispatcherManager;
- (void)setImmersionViewController:(id)arg0;
- (id)immersionViewController;
- (void)setActivationViewController:(id)arg0;
- (id)activationViewController;
- (void)hideCurrentElementContainer:(BOOL)arg0 animated:(BOOL)arg1;
- (void)enterActivationMode:(BOOL)arg0;
- (void)exitActivationMode:(BOOL)arg0;
- (void)enterDetailPageByZoomOutButton;
- (void)setIsActivationMode:(BOOL)arg0;
- (BOOL)isActivationMode;
- (BOOL)isOnSelected;
- (void)setIsOnSelected:(BOOL)arg0;
- (void)unSelected;
- (double)lastClickTimeStamp;
- (void)setLastClickTimeStamp:(double)arg0;
- (id)initWithPlayerController:(id)arg0 scene:(unsigned long long)arg1;
- (void)updateAllSubviews;
- (void)setDefaultSeekTime:(double)arg0;
- (void)handleOuterPanGesture:(id)arg0;
- (void)startPlayingAtDoubleSpeed:(BOOL)arg0;
- (id)recommendRank;
- (void)setRecommendRank:(id)arg0;
- (void)handlePan:(id)arg0;
- (void)setModel:(id)arg0;
- (id)longPressGesture;
- (void)setScene:(unsigned long long)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)handleSingleTap:(id)arg0;
- (void)setContext:(id)arg0;
- (id)model;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)handleDoubleTap:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)tapGesture;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)handleLongPress:(id)arg0;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)viewDidLoad;
- (unsigned long long)scene;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (void)setupView;
- (void)handleTap:(id)arg0;
- (void)didEndDisplaying;
- (void)setupContext;
- (void)setTapGesture:(id)arg0;
- (id)interactionContext;
- (void)setInteractionContext:(id)arg0;
- (void)willDisplay;
- (void)setVideoDelegate:(id)arg0;
- (id)videoDelegate;

@end
