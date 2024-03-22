//
//     Generated by private class-dump
//

@class UIView, NSNumber, AWEShareGridView, NSString, UIButton, AWEPanelTransitionController, CAGradientLayer, AWESharePanelViewModel, UILabel, UIScrollView;

@interface AWEShareLandscapePanelController : AWEShareBasePanelController <AWEShareCollectionViewHostView, AWEPanelTransitionWithBackground, AWESharePanel> {
    AWESharePanelViewModel *_viewModel;
    UIButton *_shareButton;
    unsigned long long _styleOptions;
    NSNumber *_bypassPresentHook;
    UILabel *_titleLabel;
    AWEShareGridView *_firstGridView;
    AWEShareGridView *_secondGridView;
    UIView *_centeringContentView;
    UIScrollView *_containerView;
    AWEPanelTransitionController *_transitionController;
    UIView *_lineView;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEShareGridView *firstGridView;
@property (retain, nonatomic) AWEShareGridView *secondGridView;
@property (retain, nonatomic) UIView *centeringContentView;
@property (retain, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long styleOptions;
@property (retain, nonatomic) AWESharePanelViewModel *viewModel;
@property (retain, nonatomic) NSNumber *bypassPresentHook;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (weak, nonatomic) UIButton *shareButton;

- (BOOL)wantsDimmingTransitionBackground;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)reloadUI;
- (unsigned long long)panelType;
- (id)itemWithType:(id)arg0;
- (BOOL)reloadCellForItemWithType:(id)arg0;
- (BOOL)scrollToCellForItemWithType:(id)arg0;
- (BOOL)isCellVisibleForItemWithType:(id)arg0;
- (id)fromGroupID;
- (void)setStyleOptions:(unsigned long long)arg0;
- (BOOL)dismissesAutomatically;
- (id)contentVisualEffect;
- (void)setBypassPresentHook:(id)arg0;
- (void)setupWithImPanel;
- (id)centeringContentView;
- (id)firstGridView;
- (id)secondGridView;
- (id)bypassPresentHook;
- (void)setFirstGridView:(id)arg0;
- (void)setSecondGridView:(id)arg0;
- (void)setCenteringContentView:(id)arg0;
- (id)initWithTask:(id)arg0;
- (BOOL)shouldAutorotate;
- (id)gradientLayer;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)transitionController;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (void)setTransitionController:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (unsigned long long)styleOptions;
- (id)shareButton;
- (void)setShareButton:(id)arg0;

@end
