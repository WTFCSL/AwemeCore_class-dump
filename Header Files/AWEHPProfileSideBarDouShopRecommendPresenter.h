//
//     Generated by private class-dump
//

@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarDouShopRecommendPresenter : AWELeftSideBarBasePresenter {
    UIView<AWEHPSideBarStencilViewProtocol> *_containerView;
    AWEHPSideBarStencilViewDataModel *_dataModel;
}

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;

+ (Class)aAWEUserCenterModuleServiceCommonAdaperClass;

- (void)leftSideBarPresenterOnReload:(id)arg0;
- (BOOL)needLoadPresenter;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)arg0;
- (void)leftSideBarCellClick;
- (id)initWithContext:(id)arg0 extraData:(id)arg1;
- (id)aAWEUserCenterModuleServiceCommonAdaper;
- (id)p_sideBarListCellDataModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)dataModel;
- (void)setDataModel:(id)arg0;

@end
