//
//     Generated by private class-dump
//

@class AWEComposerBeautyViewModel, NSString, AWEComposerBeautyPanelViewController, UIView, AWERangeSlider;
@protocol AWEComposerBeautyDelegate, ACCBeautyUIConfigProtocol;

@interface AWEComposerBeautyViewController : UIViewController <ACCFullScreenPanelViewProtocol, AWESliderDelegate, UIGestureRecognizerDelegate, AWEComposerBeautyPanelViewControllerDelegate> {
    BOOL _reappendEffectWhenSliderValueChange;
    BOOL _isChangedBeauty;
    id /* block */ _dissmissBlock;
    id /* block */ _externalDismissBlock;
    id<AWEComposerBeautyDelegate> _delegate;
    AWEComposerBeautyViewModel *_viewModel;
    id<ACCBeautyUIConfigProtocol> _uiConfig;
    UIView *_contentContainerView;
    UIView *_clearView;
    AWEComposerBeautyPanelViewController *_composerPanelViewController;
    UIView *_adjustmentContainerView;
    AWERangeSlider *_slider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *clearView;
@property (retain, nonatomic) AWEComposerBeautyPanelViewController *composerPanelViewController;
@property (retain, nonatomic) UIView *adjustmentContainerView;
@property (retain, nonatomic) AWERangeSlider *slider;
@property (nonatomic) BOOL reappendEffectWhenSliderValueChange;
@property (retain, nonatomic) AWEComposerBeautyViewModel *viewModel;
@property (retain, nonatomic) id<ACCBeautyUIConfigProtocol> uiConfig;
@property (nonatomic) BOOL isChangedBeauty;
@property (copy, nonatomic) id /* block */ dissmissBlock;
@property (copy, nonatomic) id /* block */ externalDismissBlock;
@property (weak, nonatomic) id<AWEComposerBeautyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)arg0;
- (void)panelWillShow;
- (id)uiConfig;
- (void)slider:(id)arg0 valueDidChanged:(float)arg1;
- (void)updateUIConfig:(id)arg0;
- (void)setUiConfig:(id)arg0;
- (void)p_bindViewModel;
- (id)clearView;
- (void)setClearView:(id)arg0;
- (void)p_dismiss;
- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (void)setDissmissBlock:(id /* block */)arg0;
- (id /* block */)dissmissBlock;
- (void)refreshSliderDefaultIndicatorPosition:(double)arg0;
- (void)reloadPanel;
- (void)composerBeautyPanelDidSelectPrimaryCategory:(id)arg0 lastCategory:(id)arg1 parentCategory:(id)arg2;
- (void)composerBeautyPanelDidTapResetPrimaryCategory:(id)arg0;
- (id)topRoundCornerShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setExternalDismissBlock:(id /* block */)arg0;
- (void)backviewTaped:(id)arg0;
- (void)p_showOnView:(id)arg0 fromOffset:(struct CGPoint { double x0; double x1; })arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)p_dismissWithAnimated:(BOOL)arg0 duration:(double)arg1;
- (double)adjustViewHeight;
- (void)slider:(id)arg0 didFinishSlidingWithValue:(float)arg1;
- (void)p_showOnViewController:(id)arg0 animated:(BOOL)arg1 duration:(double)arg2;
- (void)composerBeautyPanelDidSwitch:(BOOL)arg0 isManually:(BOOL)arg1;
- (void)composerBeautyPanelDidGoBackToCategoryPanel;
- (void)composerBeautyPanelDidChangeToCategory:(id)arg0;
- (void)composerBeautyPanelDidTapResetButtonWithCompletion:(id /* block */)arg0;
- (void)composerBeautyPanelDidSelectEffect:(id)arg0 forParentObject:(id)arg1;
- (void)composerBeautyPanelDidSelectEffect:(id)arg0 oldEffect:(id)arg1 fromDownload:(BOOL)arg2;
- (void)composerBeautyPanelDidSelectEffect:(id)arg0 lastEffect:(id)arg1;
- (void)composerBeautyPanelDidUpdateCandidateEffect:(id)arg0 forParentItem:(id)arg1;
- (void)composerBeautyPanelDidFinishDownloadingAllEffects;
- (void)composerBeautyPanelDidEnterCategory:(id)arg0 parentCategory:(id)arg1;
- (id)composerPanelViewController;
- (void)trackShowRecordPageBeautyPanel;
- (void)setAdjustmentContainerView:(id)arg0;
- (id)adjustmentContainerView;
- (void)setReappendEffectWhenSliderValueChange:(BOOL)arg0;
- (void)composerBeautyPanelDidChangeToCategory:(id)arg0 needTracker:(BOOL)arg1;
- (void)trackBeautifyValueChanged:(id)arg0;
- (void)trackDismissRecordPageBeautyPanel;
- (id /* block */)externalDismissBlock;
- (void)p_moveToYOffset:(double)arg0;
- (void)handleSelectEffectWrapper:(id)arg0;
- (BOOL)reappendEffectWhenSliderValueChange;
- (void)p_handleUserModifiedStatus;
- (void)trackFinishAdjustBeautifySlideParam;
- (void)resetCategoryAllItemToZero:(id)arg0;
- (void)trackSelectSubBeautifyTab:(id)arg0;
- (void)trackSelectBeautifyTab:(id)arg0;
- (void)trackChangeBeautifyCategory:(id)arg0;
- (void)trackResetAllButtonClick;
- (void)trackResetAllAlertWithConfirm:(BOOL)arg0;
- (void)refreshSliderWithEffect:(id)arg0;
- (BOOL)p_shouldShowAdjusmentContainer;
- (void)trackSelectBeautyMode:(id)arg0;
- (void)trackClickBeautyModeEdit:(id)arg0;
- (void)trackResetBeautyMode:(id)arg0;
- (id)commonTrackerParamsForEffectWrapper:(id)arg0;
- (void)setIsChangedBeauty:(BOOL)arg0;
- (BOOL)isChangedBeauty;
- (void)setComposerPanelViewController:(id)arg0;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void)clearSelection;
- (void).cxx_destruct;
- (void)setContentContainerView:(id)arg0;
- (id)initWithViewModel:(id)arg0;
- (id)slider;
- (void *)identifier;
- (void)setSlider:(id)arg0;
- (void)setViewModel:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)delegate;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)contentContainerView;
- (void)viewDidLoad;
- (void)setupUI;
- (id)panelName;
- (void)showOnViewController:(id)arg0;

@end
