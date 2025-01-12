//
//     Generated by private class-dump
//

@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarWalletPresenter : AWELeftSideBarBasePresenter {
    BOOL _hasFetchSubtitle;
    UIView<AWEHPSideBarStencilViewProtocol> *_containerView;
    AWEHPSideBarStencilViewDataModel *_dataModel;
}

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (nonatomic) BOOL hasFetchSubtitle;

+ (Class)aAWEProfileSettingSliderViewModelDOUYINHMAdapterClass;

- (void)leftSideBarPresenterOnReload:(id)arg0;
- (BOOL)needLoadPresenter;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)arg0;
- (void)leftSideBarViewDidDisAppear;
- (void)leftSideBarCellClick;
- (id)initWithContext:(id)arg0 extraData:(id)arg1;
- (id)p_sideBarListCellDataModel:(id)arg0;
- (id)aAWEProfileSettingSliderViewModelDOUYINHMAdapter;
- (void)p_fetchWalletNewestSubtitle;
- (void)setHasFetchSubtitle:(BOOL)arg0;
- (BOOL)hasFetchSubtitle;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)dataModel;
- (void)setDataModel:(id)arg0;

@end
