//
//     Generated by private class-dump
//

@class UIViewController, HGLightBoardViewController, NSString, HGVConsole, UIView, HGToolBarView, HGLoadingView;

@interface HGPluginLynxGameContainerImpl : NSObject <HGBaseVCUIStateUpdateProtocol, HGToolBarViewDelegate, BDIGameContainerProtocol> {
    HGLoadingView *_loadingView;
    HGToolBarView *_toolBarView;
    UIView *_toRemoveLoadingParentView;
    HGLightBoardViewController *_lightBoardContainerVC;
    UIViewController *_page;
    HGVConsole *_vConsole;
}

@property (retain, nonatomic) HGLoadingView *loadingView;
@property (retain, nonatomic) HGToolBarView *toolBarView;
@property (weak, nonatomic) UIView *toRemoveLoadingParentView;
@property (retain, nonatomic) HGLightBoardViewController *lightBoardContainerVC;
@property (weak, nonatomic) UIViewController *page;
@property (retain, nonatomic) HGVConsole *vConsole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setup;

- (void)closeViewController;
- (id)getLoadingViewForPage:(id)arg0;
- (id)bootManager;
- (id)subContainerVC;
- (void)updateLoadingViewModel:(id)arg0;
- (void)setToolBarMoreButtonCustomMenu:(id)arg0;
- (id)toolBarView;
- (void)closeContainer:(id)arg0;
- (void)setToolBarView:(id)arg0;
- (void)setupLoadingView;
- (void)updateLoadingViewFailState:(long long)arg0 withInfo:(id)arg1;
- (void)setupToolBarView;
- (void)createSubContainerIfNeed:(id)arg0;
- (void)setupSubContainerWithModel:(id)arg0 subNavi:(id)arg1 isColdBoot:(BOOL)arg2;
- (void)loadFailedViewWithError:(id)arg0 failState:(long long)arg1 content:(id)arg2 extraParams:(id)arg3;
- (void)updateLoadingViewPercent:(double)arg0;
- (void)hideLoadingViewAndShowToolBarForDebug;
- (BOOL)shouldDisableMoreButton;
- (void)setVConsole:(id)arg0;
- (id)vConsole;
- (void)setToRemoveLoadingParentView:(id)arg0;
- (void)setLightBoardContainerVC:(id)arg0;
- (id)lightBoardContainerVC;
- (id)toRemoveLoadingParentView;
- (void)page:(id)arg0 reportEvent:(id)arg1 params:(id)arg2;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;
- (void)forwardInvocation:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)loadSuccess;

@end
