//
//     Generated by private class-dump
//

@class UIButton, NSString, AWECloudAlbumDetailNavigationLeftView, AWECloudAlbumDetailNavigationRightView, AWECloudAlbumDetailNavigationViewModel;
@protocol AWECloudAlbumDetailDataServiceProtocol, AWEACCPopoverActionSheetHandlerProtocol, AWECloudAlbumDetailListServiceProtocol;

@interface AWECloudAlbumDetailNavigationComponent : AWECloudAlbumDetailBaseComponent <AWECloudAlbumDetailNavigationLeftViewDelegate, AWECloudAlbumDetailNavigationRightViewDelegate, AWECloudAlbumDetailDataAlbumServiceSubscriber, AWECloudAlbumDetailDataTaskServiceSubscriber, AWECloudAlbumDetailListServiceSubscriber> {
    id<AWECloudAlbumDetailDataServiceProtocol> _dataService;
    id<AWECloudAlbumDetailListServiceProtocol> _listService;
    AWECloudAlbumDetailNavigationViewModel *_viewModel;
    UIButton *_backButton;
    AWECloudAlbumDetailNavigationLeftView *_leftView;
    AWECloudAlbumDetailNavigationRightView *_rightView;
    id<AWEACCPopoverActionSheetHandlerProtocol> _popoverMenu;
}

@property (weak, nonatomic) id<AWECloudAlbumDetailDataServiceProtocol> dataService;
@property (weak, nonatomic) id<AWECloudAlbumDetailListServiceProtocol> listService;
@property (retain, nonatomic) AWECloudAlbumDetailNavigationViewModel *viewModel;
@property (readonly, nonatomic) UIButton *backButton;
@property (readonly, nonatomic) AWECloudAlbumDetailNavigationLeftView *leftView;
@property (readonly, nonatomic) AWECloudAlbumDetailNavigationRightView *rightView;
@property (weak, nonatomic) id<AWEACCPopoverActionSheetHandlerProtocol> popoverMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void)backAction:(id)arg0;
- (id)serviceBinding;
- (id)dataService;
- (void)dataDidChangeAlbumWithService:(id)arg0;
- (void)setDataService:(id)arg0;
- (id)listService;
- (void)dataDidChangeTaskStatusWithService:(id)arg0;
- (void)dataDidChangeTaskProgressWithService:(id)arg0;
- (void)dataService:(id)arg0 didChangeItems:(id)arg1;
- (void)listDidChangeDataWithService:(id)arg0;
- (void)listDidChangeSelectModeWithService:(id)arg0;
- (void)listDidChangeSelectionWithService:(id)arg0;
- (void)setListService:(id)arg0;
- (void)p_updateViewStateAnimated:(BOOL)arg0;
- (void)trackSelectAllBtn:(BOOL)arg0;
- (id)popoverMenu;
- (void)addContentAction;
- (void)changeTitleAction;
- (void)deleteAlbumAction;
- (void)setPopoverMenu:(id)arg0;
- (void)navigationLeftViewDidClickSelectAll:(id)arg0;
- (void)navigationRightViewDidClickSelect:(id)arg0;
- (void)navigationRightViewDidClickCancel:(id)arg0;
- (void)navigationRightViewDidClickMore:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)backButton;
- (id)leftView;
- (id)rightView;

@end
