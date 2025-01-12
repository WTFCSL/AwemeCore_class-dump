//
//     Generated by private class-dump
//

@class NSString, AWELeftSideBarBasePresenter;
@protocol AWELeftSideBarBussinessDelegate;

@interface AWELeftSideBarProxy : NSObject <AWELeftSideBarItemAbility> {
    AWELeftSideBarBasePresenter *_presenter;
    id<AWELeftSideBarBussinessDelegate> _bussinessDelegate;
}

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) id<AWELeftSideBarBussinessDelegate> bussinessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getleftSideBarTrackContext;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)arg0 schema:(id)arg1;
- (id)createLeftSideBarListCellViewWithModuleType:(id)arg0 cellModel:(id)arg1;
- (id)getLeftSideBarTrackParamsForBusiness:(id)arg0;
- (long long)leftSideBarCellViewPositionAtModule;
- (id)createLeftSideBarLynxListCellViewWithModuleType:(id)arg0;
- (void)forceRemoveSelf;
- (void)setBussinessDelegate:(id)arg0;
- (id)bussinessDelegate;
- (void)forceRequestDynamicData;
- (void)dynamicReloadModule;
- (void)subEntranceClickWithModel:(id)arg0;
- (id)createLeftSideBarCustomModuleViewWithModuleType:(id)arg0 withModel:(id)arg1 withDetailView:(id)arg2;
- (id)initWithPresenter:(id)arg0 leftSideBarBussinessDelegate:(id)arg1;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)arg0 schema:(id)arg1 jumpSchemaEndLogin:(BOOL)arg2;
- (void)showLeftSideBarPopView:(id)arg0 completion:(id /* block */)arg1 clickBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)arg0 schema:(id)arg1 extraLoginTrackParams:(id)arg2 finalBlock:(id /* block */)arg3;
- (id)createLeftSideBarTopTitleCellViewWithModuleType:(id)arg0;
- (void)dynamicInsertModule;
- (void).cxx_destruct;
- (id)presenter;
- (void)setPresenter:(id)arg0;

@end
