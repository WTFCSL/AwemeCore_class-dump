//
//     Generated by private class-dump
//

@class UIViewController, NSString, HGToolBarView, HGLoadingView;
@protocol HGBaseVCProtocol;

@interface HGBaseSubContainerViewController : UIViewController <HGNavigationRouteProtocol, HGSubContainerVCProtocol> {
    UIViewController<HGBaseVCProtocol> *_baseVC;
    HGToolBarView *_toolBarView;
    HGLoadingView *_loadingView;
}

@property (weak, nonatomic) HGLoadingView *loadingView;
@property (weak, nonatomic) UIViewController<HGBaseVCProtocol> *baseVC;
@property (retain, nonatomic) HGToolBarView *toolBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)baseVC;
- (void)updateSchema:(id)arg0;
- (id)subNavi;
- (id)initWithBaseVC:(id)arg0;
- (void)launchAppContent:(BOOL)arg0;
- (void)setToolBarMoreButtonCustomMenu:(id)arg0;
- (id)businessViewController;
- (void)setupChildViewController:(id)arg0;
- (id)innerWebViewAndVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)arg0;
- (void)setBaseVC:(id)arg0;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)setupSubNav:(id)arg0 isColdBoot:(BOOL)arg1;
- (id)toolBarView;
- (void)setToolBarView:(id)arg0;
- (void)forceStopRunning;
- (id)pageNavigationController;
- (void).cxx_destruct;
- (id)uniqueID;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)topView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)updateNavigationBar;

@end
