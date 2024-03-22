//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWEVideoPublishViewModel, UIView, ACCRecordViewControllerInputData;
@protocol ACCLoadingViewProtocol, ACCRecordSwitchModeService, UIViewControllerTransitioningDelegate, ACCRecorderViewContainer, ACCRecordPropService, ACCInteractiveTransitionProtocol, ACCRecordCloseService, ACCRecordSwitchModeGestureService, ACCResourceLoadedService, ACCCameraService, ACCFilterService;

@interface ACCAIGCSelectComponent : ACCFeatureComponent <AWEMVTemplateModelDelegate, ACCRecordSwitchModeServiceSubscriber> {
    BOOL _retryEnterAfterExitFinished;
    BOOL _isFirstAppear;
    BOOL _haveReportShowTab;
    BOOL _hasAddDefaultAIGCProp;
    id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> _transitionDelegate;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    AWEVideoPublishViewModel *_AIGCPublishModel;
    ACCRecordViewControllerInputData *_inputData;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCFilterService> _filterService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordCloseService> _closeService;
    id<ACCRecordSwitchModeGestureService> _modeGestureService;
    id<ACCResourceLoadedService> _resourceLoadedService;
    UIViewController *_aigcTemplateViewController;
    NSString *_lastTaskId;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate, ACCInteractiveTransitionProtocol> transitionDelegate;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL retryEnterAfterExitFinished;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL haveReportShowTab;
@property (retain, nonatomic) AWEVideoPublishViewModel *AIGCPublishModel;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordCloseService> closeService;
@property (retain, nonatomic) id<ACCRecordSwitchModeGestureService> modeGestureService;
@property (retain, nonatomic) id<ACCResourceLoadedService> resourceLoadedService;
@property (retain, nonatomic) UIViewController *aigcTemplateViewController;
@property (copy, nonatomic) NSString *lastTaskId;
@property (nonatomic) BOOL hasAddDefaultAIGCProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rootVC;
- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)lastTaskId;
- (void)setLastTaskId:(id)arg0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
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
- (id)resourceLoadedService;
- (void)setResourceLoadedService:(id)arg0;
- (BOOL)hasAddDefaultAIGCProp;
- (void)setHasAddDefaultAIGCProp:(BOOL)arg0;
- (void)addDefaultAIGCProp;
- (void)p_preLoadData;
- (void)p_preloadAITabData;
- (void)p_preloadHuafengData;
- (void)p_preloadMyData;
- (id)AIGCPublishModel;
- (id)getNormalTrackParams;
- (id)aigcTemplateViewController;
- (id)aigcTemplateViewControllerWithRecordBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAigcTemplateViewController:(id)arg0;
- (BOOL)haveReportShowTab;
- (void)setHaveReportShowTab:(BOOL)arg0;
- (void)p_exitAIGCTemplateMode;
- (void)p_resetPublishModel:(id)arg0;
- (void)p_exitAIGCMode;
- (void)p_enterAIGCMode;
- (void)exitAIGCModeHiddenSelectButton:(BOOL)arg0;
- (id)waterfallAIGCTemplateVC:(BOOL)arg0;
- (void)setAIGCPublishModel:(id)arg0;
- (void).cxx_destruct;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (BOOL)isFirstAppear;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
