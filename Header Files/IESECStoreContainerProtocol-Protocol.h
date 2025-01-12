//
//     Generated by private class-dump
//

@class IESECPagerView, IESECStoreContainerViewModel, IESECQualityInfoV2, IESECSlidingTabbarView;
@protocol IESECShopTaskControllerProtocol;

@protocol IESECStoreContainerProtocol <IESECRelationContainerProtocol, IESECFeedVideoResizeContainer, IESECShopLiveFusionContainerProtocol>

@property (readonly, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (readonly, weak, nonatomic) id<IESECShopTaskControllerProtocol> taskController;
@property (readonly, nonatomic) IESECPagerView *pagerView;
@property (readonly, nonatomic) IESECSlidingTabbarView *bottomTabbarView;
@property (readonly, nonatomic) IESECStoreContainerViewModel *viewModel;

- (id)controllerByProtocol:(id)arg0;
- (BOOL)isShowLive;
- (id)pagerView;
- (id)qualityInfo;
- (void)attachLiveMiniWindow;
- (void)detachLiveMiniWindow;
- (BOOL)switchTheme:(unsigned long long)arg0;
- (BOOL)disableMiniWindow;
- (id)bottomTabbarView;
- (BOOL)isSmallWindowState;
- (void)contentViewDidEndDisplay:(BOOL)arg0 reportInfo:(struct { unsigned long long x0; double x1; double x2; double x3; double x4; })arg1;
- (void)contentViewDidRenderFinish:(BOOL)arg0 perfInfo:(id /* block */)arg1;
- (void)registerVideoControl:(id)arg0;
- (id)tabElementWithTabType:(unsigned long long)arg0 tabClass:(Class)arg1;
- (BOOL)isLivePreviewShow;
- (BOOL)showTabViewElement:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)updateCornerForView:(id)arg0 radius:(double)arg1;
- (void)switchHeader:(unsigned long long)arg0;
- (void)exitStore;
- (id)taskController;
- (id)viewModel;

@end
