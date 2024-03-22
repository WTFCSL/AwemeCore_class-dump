//
//     Generated by private class-dump
//

@class ACCMVSelectViewModel, NSString, NSMutableDictionary, AWEVideoPublishViewModel, UIView, UIViewController;
@protocol ACCLoadingViewProtocol, ACCRecordSwitchModeService, UIViewControllerTransitioningDelegate, ACCRecorderViewContainer, ACCRecordPropService, ACCInteractiveTransitionProtocol, ACCRecordCloseService, ACCRecordSwitchModeGestureService, ACCCameraService, ACCFilterService;

@interface ACCMVSelectComponent : ACCFeatureComponent <AWEMVTemplateModelDelegate, ACCRecordSwitchModeServiceSubscriber> {
    BOOL _retryEnterAfterExitFinished;
    BOOL _isFirstAppear;
    BOOL _isMVTemplatePropLoading;
    BOOL _didPreloadMVTemplates;
    id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> _transitionDelegate;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    NSString *_mvEnterMethod;
    AWEVideoPublishViewModel *_mvPublishModel;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCFilterService> _filterService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordCloseService> _closeService;
    id<ACCRecordSwitchModeGestureService> _modeGestureService;
    UIViewController *_mvTemplateViewController;
    ACCMVSelectViewModel *_viewModel;
    NSMutableDictionary *_classicMVModelDict;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> transitionDelegate;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSString *mvEnterMethod;
@property (nonatomic) BOOL retryEnterAfterExitFinished;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) AWEVideoPublishViewModel *mvPublishModel;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordCloseService> closeService;
@property (retain, nonatomic) id<ACCRecordSwitchModeGestureService> modeGestureService;
@property (retain, nonatomic) UIViewController *mvTemplateViewController;
@property (retain, nonatomic) ACCMVSelectViewModel *viewModel;
@property (nonatomic) BOOL isMVTemplatePropLoading;
@property (retain, nonatomic) NSMutableDictionary *classicMVModelDict;
@property (nonatomic) BOOL didPreloadMVTemplates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configTrackParamsForInputData:(id)arg0 withPublishModel:(id)arg1;

- (id)rootVC;
- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)serviceBinding;
- (void)setFilterService:(id)arg0;
- (id)filterService;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (void)onCameraDidStartRender:(id)arg0;
- (void)p_close;
- (id)closeService;
- (void)setCloseService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)setRetryEnterAfterExitFinished:(BOOL)arg0;
- (BOOL)retryEnterAfterExitFinished;
- (void)setModeGestureService:(id)arg0;
- (id)modeGestureService;
- (id /* block */)didPickTemplateBlock;
- (void)p_resetPublishModel:(id)arg0;
- (void)model:(id)arg0 didStartDownloadTemplateModel:(id)arg1;
- (void)model:(id)arg0 didFinishDownloadTemplateModel:(id)arg1 duration:(double)arg2;
- (void)model:(id)arg0 didFailDownloadTemplateModel:(id)arg1 withError:(id)arg2 duration:(double)arg3;
- (id)mvTemplateViewController;
- (void)preloadMVTemplatesIfNeed;
- (id)mvEnterMethod;
- (id)mvPublishModel;
- (void)setMvEnterMethod:(id)arg0;
- (id)mvTemplateViewControllerWithRecordBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMvTemplateViewController:(id)arg0;
- (void)p_exitWaterfallMVTemplateMode;
- (BOOL)didPreloadMVTemplates;
- (void)setDidPreloadMVTemplates:(BOOL)arg0;
- (void)p_preloadMVTemplates;
- (id)waterfallMVTemplateVC:(BOOL)arg0;
- (void)setMvPublishModel:(id)arg0;
- (void)p_exitMVMode;
- (void)enterMVMode;
- (void)p_fetchChallengeForEffectModel:(id)arg0;
- (void)p_updatePublishModelWithClassicalMVTemplate:(id)arg0;
- (void)showSelectPhotoViewController:(id)arg0;
- (void)p_bindMVTemplatePropSelectedSignal;
- (void)p_enterClassicalMVPhotoSelectVC:(id)arg0;
- (id)classicMVModelDict;
- (void)p_updatePublishModelWithCutSameTemplateMode:(id)arg0;
- (void)showCutSameImportViewController:(id)arg0;
- (void)showSelectPhotoViewController:(id)arg0 withRequestAuthorCompletionBlock:(id /* block */)arg1;
- (void)p_presentSelectPhotoViewController:(id)arg0;
- (void)p_presentCutSameImportViewController:(id)arg0;
- (void)exitMVModeHiddenSelectButton:(BOOL)arg0;
- (void)p_addRecorderInteractionStickers;
- (void)p_preloadMVTemplatesCategoriesAndHotMVTemplates;
- (void)setIsMVTemplatePropLoading:(BOOL)arg0;
- (BOOL)isMVTemplatePropLoading;
- (void)p_switchModeGestureConfig;
- (void)setClassicMVModelDict:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (BOOL)isFirstAppear;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
