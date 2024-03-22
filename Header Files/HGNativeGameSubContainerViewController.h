//
//     Generated by private class-dump
//

@class NSString, HGGameController, HGNavigationController;

@interface HGNativeGameSubContainerViewController : HGBaseSubContainerViewController <HGPermissionChangeMessage> {
    BOOL _enableNativeStyle;
    BOOL _disableGameExceptionAlert;
    BOOL _isShowingGameExceptionAlert;
    HGGameController *_gameController;
    HGNavigationController *_subNavi;
}

@property (retain, nonatomic) HGNavigationController *subNavi;
@property (nonatomic) BOOL enableNativeStyle;
@property (retain, nonatomic) HGGameController *gameController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)setupObserver;
- (void)onAppLaunch;
- (id)subNavi;
- (id)initWithBaseVC:(id)arg0;
- (void)setToolBarMoreButtonCustomMenu:(id)arg0;
- (id)businessViewController;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)setupSubNav:(id)arg0 isColdBoot:(BOOL)arg1;
- (void)forceStopRunning;
- (void)permissionControllerClosed:(id)arg0;
- (void)setEnableNativeStyle:(BOOL)arg0;
- (void)handleGameFirstFrameDidDraw:(id)arg0;
- (BOOL)enableNativeStyle;
- (id)childRootViewController;
- (void)setSubNavi:(id)arg0;
- (void)handleGameException:(id)arg0;
- (id)controllerView;
- (void)setGameController:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)gameController;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)schema;
- (id)topView;
- (void)updateNavigationBar;

@end
