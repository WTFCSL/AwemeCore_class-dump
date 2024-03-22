//
//     Generated by private class-dump
//

@class UIView, ACCGradientView, NSString, ACCPicTemplateApplyAllButton, ACCPicTemplateThumbnailViewModel, ACCRepositoryWorkspace, UICollectionView, NSMutableArray;
@protocol ACCPicTemplatePanelService, ACCEditPicTemplateServiceProtocol, ACCPicTemplateTrackServiceProtocol, ACCPicTemplatePanelDataProtocol;

@interface ACCPicTemplateThumbnailComponent : ACCSecondaryPageComponent <UICollectionViewDelegate, UICollectionViewDataSource, ACCPicTemplatePanelServiceSubScriber, ACCSequenceEditServicePlayerSubscriber> {
    BOOL _isChanging;
    UICollectionView *_collectionView;
    ACCPicTemplateThumbnailViewModel *_viewModel;
    UIView *_containerView;
    ACCPicTemplateApplyAllButton *_applyAllBtn;
    ACCGradientView *_gradientView;
    ACCRepositoryWorkspace *_workspace;
    NSMutableArray *_itemList;
    id<ACCPicTemplatePanelDataProtocol> _dataManager;
    id<ACCEditPicTemplateServiceProtocol> _picTemplateService;
    id<ACCPicTemplatePanelService> _panelService;
    id<ACCPicTemplateTrackServiceProtocol> _trackService;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCPicTemplateThumbnailViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCPicTemplateApplyAllButton *applyAllBtn;
@property (retain, nonatomic) ACCGradientView *gradientView;
@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (weak, nonatomic) id<ACCPicTemplatePanelDataProtocol> dataManager;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCPicTemplatePanelService> panelService;
@property (weak, nonatomic) id<ACCPicTemplateTrackServiceProtocol> trackService;
@property (nonatomic) BOOL isChanging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (id)serviceBinding;
- (id)trackService;
- (void)setTrackService:(id)arg0;
- (void)sequenceEditService:(id)arg0 didTransferToIndex:(long long)arg1 previewMode:(BOOL)arg2 isAutoTransfer:(BOOL)arg3;
- (id)panelService;
- (id)picTemplateService;
- (void)picTemplatePanelServiceDidSelectedTemplate:(id)arg0;
- (void)picTemplatePanelServiceDidRemoveTemplate;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)setPanelService:(id)arg0;
- (void)setPicTemplateService:(id)arg0;
- (BOOL)isSelected:(id)arg0;
- (BOOL)shouldShowApplyAllBtn;
- (id)applyAllBtn;
- (void)updateApplyAllBtnStatus;
- (void)setIsChanging:(BOOL)arg0;
- (BOOL)isChanging;
- (void)applyAll;
- (void)setApplyAllBtn:(id)arg0;
- (id)dataManager;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)workspace;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setGradientView:(id)arg0;
- (void)setContainerView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setDataManager:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (id)gradientView;
- (void)setWorkspace:(id)arg0;
- (id)itemList;
- (void)setItemList:(id)arg0;

@end
