//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AFDRichContentContainerViewControllerProtocol;

@interface AFDPureModePageContainerViewController : AWEShellViewController <AFDPureModePageContainerShellProtocol, AFDPureModePageInnerContextProvider, AFDPureModePageViewControllerProtocol> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ customization;
    void /* unknown type, empty encoding */ eventTracker;
    void /* unknown type, empty encoding */ isFromAlbumDetailPage;
    void /* unknown type, empty encoding */ statusStyle;
    void /* unknown type, empty encoding */ exitTransitionDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullscreenModeSwitcher;
    void /* unknown type, empty encoding */ startStayTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_normalCellVC;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ model;
@property (nonatomic, retain) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, weak) void /* unknown type, empty encoding */ customization;
@property (nonatomic, weak) void /* unknown type, empty encoding */ eventTracker;
@property (nonatomic, readonly) UIViewController<AFDRichContentContainerViewControllerProtocol> *container;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (void)setHide:(BOOL)arg0;
- (void)didUpdatePlayerController:(id)arg0;
- (void)inner_pinchTransitionWillBegin;
- (void)inner_pinchTransitionDidFinish;
- (void)inner_pinchTransitionDidCancel;
- (void)outer_pinchTransitionWillBegin;
- (void)outer_pinchTransitionDidFinish;
- (void)outer_pinchTransitionDidCancel;
- (void)addGestureToVideoPlayerView:(id)arg0;
- (id)currentAlbumContainer;
- (void)dismissByExitMethod:(long long)arg0;
- (void)adjustTargetContentOffsetIfNeeded;
- (BOOL)needUpdatePlayerWhenBackFromPinchView;
- (id)getTransitionForegroundViewWithTransitionType:(unsigned long long)arg0;
- (void)updateTransitionForegroundView:(id)arg0 transitionType:(unsigned long long)arg1;
- (id)createControllerManager;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPureModeContainerFrame;
- (unsigned long long)getAnimationTypeWhenDismissPureMode;
- (id)getOutAlbumContainer;
- (id)container;
- (void)setModel:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)eventTracker;
- (id)model;
- (id)createContext;
- (long long)preferredStatusBarStyle;
- (id)configuration;
- (id)initWithCoder:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setConfiguration:(id)arg0;
- (id)customization;
- (void)setCustomization:(id)arg0;
- (void)setEventTracker:(id)arg0;

@end