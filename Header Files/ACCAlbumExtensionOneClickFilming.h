//
//     Generated by private class-dump
//

@class NSString, ACCIntelligentMovieService, UIControl, ACCOneClickFilmingFromMVHandler, CAKAlbumViewController, MASConstraint, ACCAlbumInputData, CAKAlbumAssetModel, AWEAlbumMVCutSameViewModel;
@protocol AWEOneClickFilmingButtonProtocol, UIViewControllerTransitioningDelegate;

@interface ACCAlbumExtensionOneClickFilming : ACCAlbumExtension <UINavigationControllerDelegate> {
    BOOL _isLoadedAssets;
    BOOL _isLoadedAssetsForPreview;
    BOOL _isProcessingAssetsForNext;
    BOOL _oneClickBtnHidden;
    BOOL _preFeatureExtractionEnabled;
    UIControl<AWEOneClickFilmingButtonProtocol> *_oneClickBtn;
    UIControl<AWEOneClickFilmingButtonProtocol> *_oneClickBtnForPreview;
    MASConstraint *_rightConstraint;
    MASConstraint *_rightConstraintForPreview;
    unsigned long long _vcType;
    id<UIViewControllerTransitioningDelegate> _transitioningDelegate;
    ACCAlbumInputData *_inputData;
    CAKAlbumViewController *_albumViewController;
    ACCOneClickFilmingFromMVHandler *_oneClickFilmingMVHander;
    CAKAlbumAssetModel *_currentPlayingAssetInPreview;
    AWEAlbumMVCutSameViewModel *_cutSameViewModel;
    ACCIntelligentMovieService *_movieService;
}

@property (retain, nonatomic) UIControl<AWEOneClickFilmingButtonProtocol> *oneClickBtn;
@property (retain, nonatomic) UIControl<AWEOneClickFilmingButtonProtocol> *oneClickBtnForPreview;
@property (retain, nonatomic) MASConstraint *rightConstraint;
@property (retain, nonatomic) MASConstraint *rightConstraintForPreview;
@property (nonatomic) BOOL isLoadedAssets;
@property (nonatomic) BOOL isLoadedAssetsForPreview;
@property (nonatomic) BOOL isProcessingAssetsForNext;
@property (nonatomic) unsigned long long vcType;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> transitioningDelegate;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (weak, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) ACCOneClickFilmingFromMVHandler *oneClickFilmingMVHander;
@property (retain, nonatomic) CAKAlbumAssetModel *currentPlayingAssetInPreview;
@property (retain, nonatomic) AWEAlbumMVCutSameViewModel *cutSameViewModel;
@property (nonatomic) BOOL oneClickBtnHidden;
@property (retain, nonatomic) ACCIntelligentMovieService *movieService;
@property (nonatomic) BOOL preFeatureExtractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVcType:(unsigned long long)arg0;
- (void)albumDidShowViewController:(id)arg0;
- (id)albumViewController;
- (void)setAlbumViewController:(id)arg0;
- (unsigned long long)vcType;
- (BOOL)albumExtensionShouldBeLoaded:(id)arg0;
- (void)albumDidDeselectAsset:(id)arg0;
- (void)albumDidSelectAssetes:(id)arg0 targetAsset:(id)arg1;
- (void)albumDidSwitchMultiSelectStatus:(BOOL)arg0;
- (BOOL)shouldTransmitToMVHandler;
- (void)setIsLoadedAssets:(BOOL)arg0;
- (void)setIsLoadedAssetsForPreview:(BOOL)arg0;
- (BOOL)preFeatureExtractionEnabled;
- (void)setMovieService:(id)arg0;
- (id)movieService;
- (id)oneClickFilmingMVHander;
- (void)albumDidLoadBottomView:(id)arg0;
- (id)oneClickBtn;
- (void)setCurrentPlayingAssetInPreview:(id)arg0;
- (void)albumDidLoadPreviewControllerBottomView:(id)arg0 previewAsset:(id)arg1;
- (id)oneClickBtnForPreview;
- (void)setOneClickBtnForPreview:(id)arg0;
- (void)setRightConstraintForPreview:(id)arg0;
- (void)albumDidSelectAssetesInPreview:(id)arg0;
- (void)albumDidSelectAssetesInNormal:(id)arg0;
- (void)albumDidDeleteAssetFromBottomView:(id)arg0;
- (void)previewControllerScrollViewDidEndDeceleratingWithAlbumAsset:(id)arg0;
- (void)selectedAssetsViewDidClickAsset:(id)arg0;
- (void)p_hideOneClickButtonAccordingToAssetCount:(long long)arg0;
- (void)animateView:(id)arg0 toAlpha:(double)arg1 duration:(double)arg2 finalIsHidden:(BOOL)arg3;
- (BOOL)isLoadedAssets;
- (id)rightConstraintForPreview;
- (void)oneClickBtnClick:(id)arg0;
- (void)gotoCutSameProcess:(id)arg0;
- (BOOL)isProcessingAssetsForNext;
- (id)currentPlayingAssetInPreview;
- (void)setIsProcessingAssetsForNext:(BOOL)arg0;
- (void)setCutSameViewModel:(id)arg0;
- (id)cutSameViewModel;
- (BOOL)oneClickBtnHidden;
- (void)setOneClickBtnHidden:(BOOL)arg0;
- (void)albumDidLoadExtension:(id)arg0 albumViewController:(id)arg1;
- (void)albumDidClickNextButton:(id)arg0;
- (void)albumDidClickCancelButton:(id)arg0;
- (void)albumUpdateBottomNextButtonWithAlbumVC:(id)arg0;
- (void)setOneClickBtn:(id)arg0;
- (BOOL)isLoadedAssetsForPreview;
- (void)setOneClickFilmingMVHander:(id)arg0;
- (void)setPreFeatureExtractionEnabled:(BOOL)arg0;
- (id)rightConstraint;
- (void).cxx_destruct;
- (id)transitioningDelegate;
- (void)setRightConstraint:(id)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)setTransitioningDelegate:(id)arg0;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
