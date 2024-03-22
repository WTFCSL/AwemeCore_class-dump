//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSString, NSMutableDictionary, DUXBasicSheet, AWEShareRowView, AWEPanelTransitionController, YYLabel, UIButton, UIViewController, AWESharePanelViewModel;
@protocol AWESharePanelTopContainerDelegate;

@interface AWESharePanelController : AWEShareBasePanelController <AWEShareCollectionViewHostView, AWEPanelTransitionWithBackground, AWEPadUIAdaptionViewTransitionObserver, AWESharePanel, AWESharePanelComponentActionDelegate> {
    BOOL _viewHasAppeared;
    BOOL _hasCallDismiss;
    AWESharePanelViewModel *_viewModel;
    UIButton *_shareButton;
    id<AWESharePanelTopContainerDelegate> _topContainerDelegate;
    unsigned long long _styleOptions;
    id /* block */ _closeButtonTapBlock;
    YYLabel *_titleLabel;
    AWEShareRowView *_firstRowView;
    AWEShareRowView *_secondRowView;
    UIStackView *_panelStackView;
    UIView *_titleView;
    UIView *_extensionView;
    NSMutableDictionary *_viewHeightCache;
    AWEPanelTransitionController *_transitionController;
    DUXBasicSheet *_sheet;
    UIButton *_closeButton;
    UIViewController *_rootViewController;
    UIView *_card;
}

@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) AWEShareRowView *firstRowView;
@property (retain, nonatomic) AWEShareRowView *secondRowView;
@property (retain, nonatomic) UIStackView *panelStackView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *extensionView;
@property (retain, nonatomic) NSMutableDictionary *viewHeightCache;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (nonatomic) BOOL viewHasAppeared;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) UIView *card;
@property (nonatomic) BOOL hasCallDismiss;
@property (weak, nonatomic) id<AWESharePanelTopContainerDelegate> topContainerDelegate;
@property (nonatomic) unsigned long long styleOptions;
@property (retain, nonatomic) AWESharePanelViewModel *viewModel;
@property (copy, nonatomic) id /* block */ closeButtonTapBlock;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (weak, nonatomic) UIButton *shareButton;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (BOOL)wantsDimmingTransitionBackground;
- (void)setCloseButtonTapBlock:(id /* block */)arg0;
- (unsigned long long)panelType;
- (void)p_setupUI;
- (id /* block */)closeButtonTapBlock;
- (id)itemWithType:(id)arg0;
- (BOOL)reloadCellForItemWithType:(id)arg0;
- (BOOL)scrollToCellForItemWithType:(id)arg0;
- (BOOL)isCellVisibleForItemWithType:(id)arg0;
- (id)fromGroupID;
- (id)cellForItemWithType:(id)arg0;
- (id)extensionView;
- (void)updatePanelSheetHeight:(double)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateExtension:(id)arg0 height:(double)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setStyleOptions:(unsigned long long)arg0;
- (void)playAppearanceAnimation;
- (id)firstRowView;
- (id)secondRowView;
- (BOOL)dismissesAutomatically;
- (void)setFirstRowView:(id)arg0;
- (void)setSecondRowView:(id)arg0;
- (id)contentVisualEffect;
- (double)viewTopCornerRadius;
- (void)updateTitleWithAttributedText:(id)arg0;
- (void)setTopContainerDelegate:(id)arg0;
- (void)configDUXSheet;
- (void)showWithDUXSheetOnViewController:(id)arg0 completion:(id /* block */)arg1;
- (void)showTopContainerView;
- (void)hideTopContainerView;
- (void)dismissTopContainerView;
- (void)handleTabDidChangeNotification;
- (void)p_addCustomExtension:(id)arg0;
- (void)addTransitionObserver;
- (id)topContainerDelegate;
- (void)trackPanelDimiss;
- (id)panelStackView;
- (id)viewHeightCache;
- (void)setPanelStackView:(id)arg0;
- (void)setExtensionView:(id)arg0;
- (void)setViewHeightCache:(id)arg0;
- (BOOL)hasCallDismiss;
- (void)setHasCallDismiss:(BOOL)arg0;
- (id)initWithTask:(id)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)transitionController;
- (id)titleLabel;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)setTitleView:(id)arg0;
- (void)setCard:(id)arg0;
- (void)setTransitionController:(id)arg0;
- (id)containerView;
- (void)dismissAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)viewModel;
- (id)card;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)viewWillLayoutSubviews;
- (id)titleView;
- (void)motionBegan:(long long)arg0 withEvent:(id)arg1;
- (void)closeButtonTapped:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (BOOL)viewHasAppeared;
- (void)setViewHasAppeared:(BOOL)arg0;
- (unsigned long long)styleOptions;
- (void)dismissButtonTapped:(id)arg0;
- (id)shareButton;
- (void)setShareButton:(id)arg0;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end