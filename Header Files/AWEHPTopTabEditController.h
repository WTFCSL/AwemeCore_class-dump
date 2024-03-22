//
//     Generated by private class-dump
//

@class AWEHPTopTabEditPanelViewController, AWEHPEditPanelConfig;
@protocol AWEPzEngineProtocol, AWEPzComponentProtocol;

@interface AWEHPTopTabEditController : NSObject {
    id /* block */ _panelDidDismiss;
    AWEHPTopTabEditPanelViewController *_viewController;
    AWEHPEditPanelConfig *_config;
    id<AWEPzEngineProtocol> _engine;
    id<AWEPzComponentProtocol> _pzComponent;
}

@property (retain, nonatomic) AWEHPTopTabEditPanelViewController *viewController;
@property (retain, nonatomic) AWEHPEditPanelConfig *config;
@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (retain, nonatomic) id<AWEPzComponentProtocol> pzComponent;
@property (copy, nonatomic) id /* block */ panelDidDismiss;

- (id /* block */)panelDidDismiss;
- (BOOL)isEditPanelEnabled;
- (BOOL)isEditPanelShowing;
- (void)setPanelDidDismiss:(id /* block */)arg0;
- (BOOL)tryShowPanelWithEnterMethod:(id)arg0;
- (long long)p_canShowPanel;
- (void)trackLongPressEditTabCheck:(long long)arg0;
- (id)setupEditPanelConfigWithEnterMethod:(id)arg0;
- (void)setPzComponent:(id)arg0;
- (void)printAllItemsWith:(id)arg0 ReferString:(id)arg1;
- (id)generateFinalSortListWithSortList:(id)arg0 toptabList:(id)arg1;
- (id)pzComponent;
- (void)setViewController:(id)arg0;
- (void)setConfig:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)config;
- (id)engine;
- (id)initWithConfig:(id)arg0;
- (void)setEngine:(id)arg0;

@end
