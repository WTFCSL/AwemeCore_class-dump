//
//     Generated by private class-dump
//

@protocol IESLiveRevenueInteractModuleEntranceInterface <NSObject>

- (void)dismissEntranceNavigationController;
- (void)showTipOnPKItem:(id)arg0;
- (void)showPKItem:(BOOL)arg0;
- (void)updatePKItemAlpha:(double)arg0;
- (BOOL)isPKEnabled:(BOOL)arg0;
- (void)clickPKEntranceItemWithSpecificIndex:(long long)arg0;
- (void)clickPKEntranceItemWithSpecificIndex:(long long)arg0 extraParams:(id)arg1;
- (void)openPKDetailPanel:(id)arg0;
- (void)openPKPanelFromSource:(id)arg0 extraParams:(id)arg1;
- (void)clickPKEntranceItemWithSpecificIndex:(long long)arg0 source:(id)arg1;
- (void)setPKEntranceEnabled:(BOOL)arg0 toast:(id)arg1;
- (BOOL)isPKItemShowing;

@end
