//
//     Generated by private class-dump
//

@class AWELeftSideBarListCellDataModel, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWELeftSideBarDraftBoxPresenter : AWELeftSideBarBasePresenter {
    UIView<AWELeftSideBarStencilViewProtocol> *_cellView;
    AWELeftSideBarListCellDataModel *_cellDataModel;
}

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *cellView;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;

- (void)leftSideBarPresenterOnReload:(id)arg0;
- (void)leftSideBarViewWillAppear;
- (BOOL)needLoadPresenter;
- (id)bussinessTrackInfo;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)arg0;
- (void)leftSideBarCellClick;
- (id)initWithContext:(id)arg0 extraData:(id)arg1;
- (void)setCellDataModel:(id)arg0;
- (id)cellDataModel;
- (void)setCellView:(id)arg0;
- (void)setupDraftBoxSubTitle;
- (void).cxx_destruct;
- (id)cellView;

@end
