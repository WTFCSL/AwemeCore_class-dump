//
//     Generated by private class-dump
//

@class AWENaviDuetMatchView;
@protocol IESServiceProvider, AWENaviDuetRenderServiceProtocol, AWENaviDuetViewContainerProtocol;

@interface AWENaviDuetMatchComponent : AWENaviDuetBaseFeatureComponent {
    id<IESServiceProvider> _serviceProvider;
    AWENaviDuetMatchView *_panelView;
    id<AWENaviDuetViewContainerProtocol> _viewContainer;
    id<AWENaviDuetRenderServiceProtocol> _renderService;
}

@property (retain, nonatomic) AWENaviDuetMatchView *panelView;
@property (retain, nonatomic) id<AWENaviDuetViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<AWENaviDuetRenderServiceProtocol> renderService;

- (void)showToast:(id)arg0;
- (id)panelView;
- (id)renderService;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)setRenderService:(id)arg0;
- (void)barItemButtonClicked:(id)arg0;
- (id)matchBarItem;
- (void)fetchFriendsSuccess:(id /* block */)arg0;
- (void)changSelectedUsers:(id)arg0;
- (void)removePanelViewIfNeeded;
- (BOOL)checkUsersSame:(id)arg0;
- (void)fecthOtherUserEffects:(id)arg0 completion:(id /* block */)arg1;
- (void)onSelectedUserForDuet;
- (void)showPanelViewIfNeeded;
- (id)checkAndSortResults:(id)arg0;
- (void)handleResults:(id)arg0 errMsg:(id)arg1;
- (void)setPanelView:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (id)viewModel;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
