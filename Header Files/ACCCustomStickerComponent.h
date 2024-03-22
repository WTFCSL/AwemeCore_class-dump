//
//     Generated by private class-dump
//

@class UINavigationController, NSString, ACCCustomStickerViewModel, AWECustomPhotoStickerEditConfig, UIView, CAKAlbumViewController, AWECustomPhotoStickerEditViewController;
@protocol ACCLoadingViewProtocol, ACCEditServiceProtocol, ACCEditViewContainer, ACCInfoStickerServiceProtocol, ACCStickerPanelServiceProtocol, ACCInteractiveTransitionProtocol, UIViewControllerTransitioningDelegate, ACCStickerServiceProtocol;

@interface ACCCustomStickerComponent : ACCFeatureComponent <ACCStickerPannelObserver, ACCCustomStickerComponentProtocol, ACCDraftResourceRecoverProtocol> {
    int _currentId;
    id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> _transitionDelegate;
    id<UIViewControllerTransitioningDelegate> _nextTranslationTransitionDelegate;
    NSString *_tabName;
    NSString *_pickId;
    long long _cutoutType;
    AWECustomPhotoStickerEditConfig *_currentConfig;
    id<ACCEditViewContainer> _viewContainer;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    UINavigationController *_customStickerEditNavVc;
    AWECustomPhotoStickerEditViewController *_editVC;
    CAKAlbumViewController *_resourcePickerViewController;
    id<ACCEditServiceProtocol> _editService;
    id<ACCInfoStickerServiceProtocol> _infoStickerService;
    id<ACCStickerPanelServiceProtocol> _stickerPanelService;
    id<ACCStickerServiceProtocol> _stickerService;
    ACCCustomStickerViewModel *_viewModel;
    id /* block */ _dismissPanelHandle;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> transitionDelegate;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *pickId;
@property (nonatomic) long long cutoutType;
@property int currentId;
@property (retain, nonatomic) AWECustomPhotoStickerEditConfig *currentConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (weak, nonatomic) UINavigationController *customStickerEditNavVc;
@property (weak, nonatomic) AWECustomPhotoStickerEditViewController *editVC;
@property (weak, nonatomic) CAKAlbumViewController *resourcePickerViewController;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCInfoStickerServiceProtocol> infoStickerService;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCCustomStickerViewModel *viewModel;
@property (copy, nonatomic) id /* block */ dismissPanelHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateTheNecessaryResourcesForPublishViewModel:(id)arg0 completion:(id /* block */)arg1;

- (id)publishModel;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (int)currentId;
- (id)editService;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (id)nextTranslationTransitionDelegate;
- (void)setNextTranslationTransitionDelegate:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)barItem;
- (id)stickerPanelService;
- (void)setStickerPanelService:(id)arg0;
- (unsigned long long)stikerPriority;
- (BOOL)handleSelectSticker:(id)arg0 fromTab:(id)arg1 willSelectHandle:(id /* block */)arg2 dismissPanelHandle:(id /* block */)arg3;
- (id)infoStickerService;
- (void)setInfoStickerService:(id)arg0;
- (void)dismissModalStackAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)trackForEnterCustomStickerEvent:(id)arg0 extraParams:(id)arg1;
- (id)customStickerEffectDict;
- (BOOL)checkErrorMsgWithFetchedAsset:(id)arg0;
- (void)setPickId:(id)arg0;
- (void)loadAlbumCustomSticker:(id)arg0 asset:(id)arg1 completionBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (void)setResourcePickerViewController:(id)arg0;
- (void)setCustomStickerEditNavVc:(id)arg0;
- (id)customStickerEditNavVc;
- (id)pickId;
- (void)showCustomStickerPreview:(id)arg0 pickerId:(id)arg1 imageData:(id)arg2 dataUTI:(id)arg3 info:(id)arg4 completionBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
- (void)setCurrentId:(int)arg0;
- (BOOL)checkErrorMsgWithFetchedImageData:(id)arg0 dataUTI:(id)arg1 info:(id)arg2 limitConfig:(id)arg3;
- (id /* block */)dismissPanelHandle;
- (void)setDismissPanelHandle:(id /* block */)arg0;
- (void)saveAndApplySticker:(id)arg0 config:(id)arg1 pickId:(id)arg2 completionBlock:(id /* block */)arg3;
- (BOOL)isLocalCutoutEnabled;
- (void)setCutoutType:(long long)arg0;
- (long long)cutoutType;
- (id)resourcePickerViewController;
- (void)setEditVC:(id)arg0;
- (void)selectCustomSticker:(id)arg0 fromTab:(id)arg1 completionBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (id)editVC;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)currentConfig;
- (void)setCurrentConfig:(id)arg0;
- (void)dealloc;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
