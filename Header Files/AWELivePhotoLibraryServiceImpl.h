//
//     Generated by private class-dump
//

@class NSString, UIViewController, CAKModalTransitionDelegate;

@interface AWELivePhotoLibraryServiceImpl : NSObject <UINavigationControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, IESLivePhotoLibraryService> {
    BOOL _enableMultiSelect;
    BOOL _isMultiMixSelect;
    BOOL _shouldSwapPreviewAndSelect;
    BOOL _enablePreview;
    CAKModalTransitionDelegate *_transitionDelegate;
    UIViewController *_hostVC;
    long long _maxPhotoCount;
    long long _minVideoSeconds;
    long long _maxVideoSeconds;
    NSString *_bottomViewTitle;
    NSString *_limitTips;
    NSString *_nextButtonTitle;
    id /* block */ _multiSelectCompletionBlock;
    id /* block */ _mixMultiSelectBlock;
    id /* block */ _dataStartProcessBlock;
    id /* block */ _assetCompletion;
    unsigned long long _options;
}

@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (weak, nonatomic) UIViewController *hostVC;
@property (nonatomic) BOOL enableMultiSelect;
@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) long long minVideoSeconds;
@property (nonatomic) long long maxVideoSeconds;
@property (copy, nonatomic) NSString *bottomViewTitle;
@property (copy, nonatomic) NSString *limitTips;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (copy, nonatomic) id /* block */ multiSelectCompletionBlock;
@property (copy, nonatomic) id /* block */ mixMultiSelectBlock;
@property (nonatomic) BOOL isMultiMixSelect;
@property (copy, nonatomic) id /* block */ dataStartProcessBlock;
@property (nonatomic) BOOL shouldSwapPreviewAndSelect;
@property (nonatomic) BOOL enablePreview;
@property (copy, nonatomic) id /* block */ assetCompletion;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnableMultiSelect:(BOOL)arg0;
- (void)setEnablePreview:(BOOL)arg0;
- (id)hostVC;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)albumViewControllerConfigForHeader:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (id)albumViewControllerConfigForFooter:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didClickAlbumAssetCell:(id)arg1;
- (void)albumViewController:(id)arg0 didClickNextButtonWithSourceType:(long long)arg1 fetchedAlbumAssets:(id)arg2;
- (void)albumViewController:(id)arg0 didDismissWithPanProgress:(double)arg1;
- (void)albumViewControllerDidClickCancelButton:(id)arg0;
- (void)albumViewController:(id)arg0 updateBottomNextButtonWithButton:(id)arg1 fromPreview:(BOOL)arg2;
- (void)setHostVC:(id)arg0;
- (void)setBottomViewTitle:(id)arg0;
- (void)setLimitTips:(id)arg0;
- (void)setMultiSelectCompletionBlock:(id /* block */)arg0;
- (id /* block */)multiSelectCompletionBlock;
- (BOOL)enableMultiSelect;
- (id)bottomViewTitle;
- (id)limitTips;
- (void)getBatchImagesFromAssetModels:(id)arg0 imagePicker:(id)arg1;
- (void)showMultiSelectImagePickerWithMaxImageCount:(long long)arg0 withPrivacyCert:(id)arg1 bottomViewTitle:(id)arg2 nextButtonTitle:(id)arg3 limitTips:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)enablePreview;
- (void)showImagePickerWithHostVC:(id)arg0 withPrivacyCert:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)showPhotoPickerWithPrivacyCert:(id)arg0 options:(unsigned long long)arg1 hostVC:(id)arg2 withContext:(id)arg3 completion:(id /* block */)arg4;
- (void)setShouldSwapPreviewAndSelect:(BOOL)arg0;
- (void)p_showLibraryImagePicker;
- (void)checkAuthorizationWithrivacyCert:(id)arg0 withContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setAssetCompletion:(id /* block */)arg0;
- (id /* block */)assetCompletion;
- (void)p_newShowLibraryImagePicker;
- (BOOL)isOnlySupportImageResource;
- (BOOL)isOnlySupportVideoResource;
- (BOOL)isSupportImageAndVideoResource;
- (void)setMinVideoSeconds:(long long)arg0;
- (void)setMaxVideoSeconds:(long long)arg0;
- (void)setMixMultiSelectBlock:(id /* block */)arg0;
- (void)setIsMultiMixSelect:(BOOL)arg0;
- (void)setDataStartProcessBlock:(id /* block */)arg0;
- (BOOL)shouldSwapPreviewAndSelect;
- (long long)minVideoSeconds;
- (long long)maxVideoSeconds;
- (BOOL)isMultiMixSelect;
- (void)getMixSelectDataFromAssetModels:(id)arg0 imagePicker:(id)arg1;
- (id /* block */)dataStartProcessBlock;
- (id /* block */)mixMultiSelectBlock;
- (void)showImagePickerWithPrivacyCert:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)showImagePickerWithPrivacyHybridCert:(id)arg0 withContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)showVideoPickerWithPrivacyCert:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)showVideoPickerWithPrivacyHybridCert:(id)arg0 withContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)showImagePickerWithHostVC:(id)arg0 withPrivacyCert:(id)arg1 completion:(id /* block */)arg2;
- (void)showPhotoPickerWithPrivacyCert:(id)arg0 options:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)showMultiSelectPickerWithMaxImageCount:(long long)arg0 videoMinSeconds:(long long)arg1 videoMaxSeconds:(long long)arg2 privacyCert:(id)arg3 bottomViewTitle:(id)arg4 nextButtonTitle:(id)arg5 limitTips:(id)arg6 startProcessBlock:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)showPhotoPickerWithPrivacyHybridCert:(id)arg0 options:(unsigned long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
- (void)setMaxPhotoCount:(long long)arg0;
- (void)setOptions:(unsigned long long)arg0;
- (long long)maxPhotoCount;
- (unsigned long long)options;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)nextButtonTitle;
- (void)setNextButtonTitle:(id)arg0;

@end
