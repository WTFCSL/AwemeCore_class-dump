//
//     Generated by private class-dump
//

@protocol AWELeftSideBarItemAbility <NSObject>

- (id)getleftSideBarTrackContext;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)arg0 schema:(id)arg1;
- (id)createLeftSideBarListCellViewWithModuleType:(id)arg0 cellModel:(id)arg1;
- (id)getLeftSideBarTrackParamsForBusiness:(id)arg0;
- (long long)leftSideBarCellViewPositionAtModule;
- (id)createLeftSideBarLynxListCellViewWithModuleType:(id)arg0;
- (void)forceRemoveSelf;
- (void)forceRequestDynamicData;
- (void)dynamicReloadModule;
- (void)subEntranceClickWithModel:(id)arg0;
- (id)createLeftSideBarCustomModuleViewWithModuleType:(id)arg0 withModel:(id)arg1 withDetailView:(id)arg2;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)arg0 schema:(id)arg1 jumpSchemaEndLogin:(BOOL)arg2;
- (void)showLeftSideBarPopView:(id)arg0 completion:(id /* block */)arg1 clickBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)arg0 schema:(id)arg1 extraLoginTrackParams:(id)arg2 finalBlock:(id /* block */)arg3;
- (id)createLeftSideBarTopTitleCellViewWithModuleType:(id)arg0;
- (void)dynamicInsertModule;

@end
