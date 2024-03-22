//
//     Generated by private class-dump
//

@class NSString, AWEECommerceUploadViewModel, ACCRecordViewControllerInputData, UIImageView, NSMutableDictionary, UIViewController, UILabel, ACCAnimatedButton;
@protocol ACCRecordSwitchModeService, UIViewControllerTransitioningDelegate, ACCRecorderViewContainer, ACCRecordAuthService, ACCInteractiveTransitionProtocol, ACCRecordTrackService, ACCBeautyService, ACCCameraService, ACCFilterService;

@interface AWEECommerceUploadComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, CAKPhotoLibraryChangeObserver, AWESelectPhotoViewControllerDelegate, ACCRecorderViewContainerItemsHideShowObserver, CAKAlbumViewControllerDelegate, CAKAlbumViewControllerDataSource> {
    BOOL _hasFetchedUploadImage;
    BOOL _imageLoadedForAuthority;
    BOOL _hasRegisterChangeObserver;
    BOOL _isFirstAppear;
    BOOL _isNotFirstTrack;
    BOOL _vcPushed;
    id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> _transitionDelegate;
    ACCRecordViewControllerInputData *_inputData;
    ACCAnimatedButton *_uploadVideoButton;
    UILabel *_uploadVideoLabel;
    UIImageView *_photoImageView;
    ACCAnimatedButton *_uploadVideoButtonForAuthorityView;
    UILabel *_uploadVideoLabelForAuthorityView;
    UIImageView *_photoImageViewForAuthorityView;
    NSString *_tabName;
    id<ACCRecorderViewContainer> _viewContainer;
    AWEECommerceUploadViewModel *_viewModel;
    id<ACCCameraService> _cameraService;
    id<ACCRecordTrackService> _trackService;
    id<ACCRecordAuthService> _authService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCBeautyService> _beautyService;
    id<ACCFilterService> _filterService;
    UIViewController *_selectVC;
    NSMutableDictionary *_uploaded;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> transitionDelegate;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (nonatomic) BOOL hasFetchedUploadImage;
@property (retain, nonatomic) ACCAnimatedButton *uploadVideoButton;
@property (retain, nonatomic) UILabel *uploadVideoLabel;
@property (retain, nonatomic) UIImageView *photoImageView;
@property (nonatomic) BOOL imageLoadedForAuthority;
@property (retain, nonatomic) ACCAnimatedButton *uploadVideoButtonForAuthorityView;
@property (retain, nonatomic) UILabel *uploadVideoLabelForAuthorityView;
@property (retain, nonatomic) UIImageView *photoImageViewForAuthorityView;
@property (copy, nonatomic) NSString *tabName;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) AWEECommerceUploadViewModel *viewModel;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCBeautyService> beautyService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (nonatomic) BOOL hasRegisterChangeObserver;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isNotFirstTrack;
@property (nonatomic) BOOL vcPushed;
@property (weak, nonatomic) UIViewController *selectVC;
@property (retain, nonatomic) NSMutableDictionary *uploaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (id)albumViewControllerConfigForFooter:(id)arg0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)arg0;
- (id)albumViewControllerViewForSelectedAssets:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (void)albumViewController:(id)arg0 selectedAssetsViewDidDeleteAsset:(id)arg1 sourceType:(long long)arg2;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didSelectAlbumAsset:(id)arg1 sourceType:(long long)arg2;
- (void)albumViewController:(id)arg0 didDeselectAlbumAsset:(id)arg1 sourceType:(long long)arg2;
- (void)albumViewController:(id)arg0 didClickAlbumAssetCell:(id)arg1;
- (void)albumViewController:(id)arg0 didClickNextButtonWithSourceType:(long long)arg1 fetchedAlbumAssets:(id)arg2;
- (void)albumViewControllerDidClickCancelButton:(id)arg0;
- (void)albumViewController:(id)arg0 didSelectTabListViewController:(id)arg1 index:(long long)arg2;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)p_goToNextWithSelectedAssets:(id)arg0;
- (void)setFilterService:(id)arg0;
- (id)filterService;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (id)trackService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setTrackService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (BOOL)hasRegisterChangeObserver;
- (void)updateUploadButtonHiddenForAuthority:(BOOL)arg0 animated:(BOOL)arg1;
- (BOOL)needHiddenUploadButton;
- (id)uploadVideoButton;
- (id)uploadVideoLabel;
- (id)uploadVideoButtonForAuthorityView;
- (id)uploadVideoLabelForAuthorityView;
- (BOOL)hasFetchedUploadImage;
- (id)p_getLatestImageAsset;
- (id)p_getUIImageWithPHAsset:(id)arg0;
- (void)setHasFetchedUploadImage:(BOOL)arg0;
- (void)trackPreviewPerformanceWithNextAction:(id)arg0;
- (id)commentTrackInfo;
- (void)p_presentUploadVideoViewController;
- (void)addPHPhotoLibraryObserver;
- (void)setSelectVC:(id)arg0;
- (id)selectVC;
- (void)setVcPushed:(BOOL)arg0;
- (void)refreshUploadImageView;
- (void)uploadPhotos:(id)arg0 completion:(id /* block */)arg1;
- (void)showUploadVideoViewController;
- (void)showUploadVideoViewControllerForAuthority;
- (BOOL)vcPushed;
- (BOOL)showUploadButton;
- (void)updateUploadButtonHidden:(BOOL)arg0 animated:(BOOL)arg1;
- (id)beautyService;
- (id)photoImageViewForAuthorityView;
- (id)getAlbumPlaceHolder;
- (void)setHasRegisterChangeObserver:(BOOL)arg0;
- (BOOL)isNotFirstTrack;
- (void)setIsNotFirstTrack:(BOOL)arg0;
- (BOOL)validAssetModelForPhoto:(id)arg0;
- (BOOL)validAssetModelForVideo:(id)arg0;
- (void)p_trackInValidAssetWithCode:(long long)arg0 assetTypeVideo:(BOOL)arg1;
- (void)onCameraDidStartRender:(id)arg0;
- (void)selectPhotoViewControllerDidCancel;
- (void)selectPhotoViewControllerDidConfirmWithSelection:(id)arg0;
- (id)authService;
- (void)setUploadVideoButton:(id)arg0;
- (void)setUploadVideoLabel:(id)arg0;
- (BOOL)imageLoadedForAuthority;
- (void)setImageLoadedForAuthority:(BOOL)arg0;
- (void)setUploadVideoButtonForAuthorityView:(id)arg0;
- (void)setUploadVideoLabelForAuthorityView:(id)arg0;
- (void)setPhotoImageViewForAuthorityView:(id)arg0;
- (void)setAuthService:(id)arg0;
- (void)setBeautyService:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)photoLibraryDidChange:(id)arg0;
- (void)applicationDidBecomeActive:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (id)uploaded;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (void)setUploaded:(id)arg0;
- (void)setupUI;
- (BOOL)isFirstAppear;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)photoImageView;
- (void)setPhotoImageView:(id)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
