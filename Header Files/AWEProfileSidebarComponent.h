//
//     Generated by private class-dump
//

@class NSString, AWEProfileSidebarViewController, AWEBinding, UIView, UIPanGestureRecognizer;

@interface AWEProfileSidebarComponent : AWEUserHomeBaseComponent <UIGestureRecognizerDelegate, AWEUserHomeControllerProtocol, AWEProfileSidebarComponentProtocol> {
    BOOL _isHorizontalGesture;
    BOOL _isSwipeGesture;
    BOOL _isTransformRootView;
    BOOL _shouldKeepSlider;
    UIView *_settingSliderMenuView;
    AWEProfileSidebarViewController *_profileSidebarSliderVC;
    UIPanGestureRecognizer *_hidePanGR;
    UIPanGestureRecognizer *_showPanGR;
    UIView *_snapshotTabbar;
    UIView *_sliderMaskView;
    long long _direction;
    UIView *_pageSnapshot;
    double _rootOriginX;
    id /* block */ _rootFrameBlock;
    AWEBinding *_rootFrameBind;
    struct __CFRunLoopObserver { } *_runloopObserver;
}

@property (nonatomic) BOOL isHorizontalGesture;
@property (nonatomic) BOOL isSwipeGesture;
@property (retain, nonatomic) UIView *settingSliderMenuView;
@property (retain, nonatomic) AWEProfileSidebarViewController *profileSidebarSliderVC;
@property (retain, nonatomic) UIPanGestureRecognizer *hidePanGR;
@property (retain, nonatomic) UIPanGestureRecognizer *showPanGR;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *sliderMaskView;
@property (nonatomic) BOOL isTransformRootView;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL shouldKeepSlider;
@property (retain, nonatomic) UIView *pageSnapshot;
@property (nonatomic) double rootOriginX;
@property (copy, nonatomic) id /* block */ rootFrameBlock;
@property (retain, nonatomic) AWEBinding *rootFrameBind;
@property (nonatomic) struct __CFRunLoopObserver { } *runloopObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)addNotifications;
- (void)handleMemoryWarning:(id)arg0;
- (void)setSnapshotTabbar:(id)arg0;
- (id)snapshotTabbar;
- (long long)currentSelectedIndex;
- (void)setRunloopObserver:(struct __CFRunLoopObserver { } *)arg0;
- (struct __CFRunLoopObserver { } *)runloopObserver;
- (id)profileHeaderVC;
- (id)settingSliderMenuView;
- (void)removeSettingSliderMenu;
- (id)tabHelper;
- (void)handlePanGestureIfSliderShow:(BOOL)arg0 gestureRecognizer:(id)arg1;
- (BOOL)isShowSliderMenuView;
- (void)setIsHorizontalGesture:(BOOL)arg0;
- (void)setIsSwipeGesture:(BOOL)arg0;
- (BOOL)isHorizontalGesture;
- (BOOL)isSwipeGesture;
- (void)setSettingSliderMenuView:(id)arg0;
- (void)onResetUI;
- (void)onFinishLogin:(id)arg0;
- (void)onUserModelUpdated:(id)arg0;
- (void)updateProfileAwemeCovers;
- (void)onDidSyncAwemeUser:(id)arg0 error:(id)arg1;
- (void)onThemeReload;
- (void)onLeaveHomePageTab;
- (void)onEnterHomePageTab;
- (void)resetSliderMenu;
- (void)onFindMoreExtensionAreaCardClicked;
- (void)openSidebarBySchema:(id)arg0;
- (void)handleShowSliderPanGestureAction:(id)arg0;
- (void)handleProfileCommitChange:(id)arg0;
- (double)rootOriginX;
- (void)setRootFrameBlock:(id /* block */)arg0;
- (void)publishEventForDismiss;
- (void)changeViewFrameWith:(double)arg0;
- (void)setRootOriginX:(double)arg0;
- (void)handleHideSliderPanGestureAction:(id)arg0;
- (void)removeRootFrameBind;
- (void)publishEventForShow;
- (void)addRootFrameBind;
- (void)setRootFrameBind:(id)arg0;
- (id)rootFrameBind;
- (id /* block */)rootFrameBlock;
- (void)removePreloadRunLoopObserver;
- (void)onSliderMenuButtonClicked:(id)arg0;
- (void)createSliderPanGesture;
- (void)removePageSnapShotIfNeeded;
- (void)startObserverIdlePreloadSidebarVCIfNeeded;
- (BOOL)shouldKeepSlider;
- (void)updateTabBarHidden:(BOOL)arg0;
- (id)pageSnapshot;
- (void)setShouldKeepSlider:(BOOL)arg0;
- (void)showSliderMenu:(BOOL)arg0 animation:(BOOL)arg1 enterFrom:(id)arg2 enterMethod:(id)arg3;
- (void)setPageSnapshot:(id)arg0;
- (id)profileSidebarSliderVC;
- (id)profileSidebarManager;
- (void)openSidebarPageWithEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (void)updateTabBarSnapshot;
- (id)createProfileSidebarViewController;
- (BOOL)isForceHalfScreen;
- (void)setShowPanGR:(id)arg0;
- (double)pageWidthForSlider;
- (void)setProfileSidebarSliderVC:(id)arg0;
- (void)showProfileSidebarSliderVC;
- (void)sliderMenuAnimationWithOriginX:(double)arg0 duration:(double)arg1 showSlider:(BOOL)arg2 removeSliderVC:(BOOL)arg3 enterFrom:(id)arg4 enterMethod:(id)arg5;
- (id)sliderMaskView;
- (void)addProfileSidebarSliderVC;
- (void)openFullScreenPageWithEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (id)hidePanGR;
- (void)setHidePanGR:(id)arg0;
- (id)showPanGR;
- (void)setSliderMaskView:(id)arg0;
- (BOOL)isTransformRootView;
- (void)setIsTransformRootView:(BOOL)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (long long)direction;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)viewDidAppear;
- (void)dealloc;
- (void)viewDidLoad;
- (id)view;
- (void)viewWillAppear;
- (void)setDirection:(long long)arg0;
- (id)parentViewController;
- (id)tabBarController;
- (void)viewDidDisappear;
- (void)onInit;
- (void)viewWillDisappear;

@end