//
//     Generated by private class-dump
//

@class AWEFeedMultiTabSegmentedViewUIConfig, MASConstraint, NSMutableArray, UIView, UIScrollView, UIColor, CAGradientLayer, DUXButton, AWEMultiTabNavigationArrowView, AWEHPTopTabLayoutUIModel, UIGestureRecognizer, NSArray, NSString, AWESlidingViewController, UIImageView;
@protocol AWEFeedSegmentedControlDelegate;

@interface AWEFeedMultiTabSegmentedControl : UIView <UIGestureRecognizerDelegate, AWEHPTopTabItemViewDelegate, UIScrollViewDelegate, AWESlidingTabbarProtocol, AWEFeedSegmentedControlProtocol> {
    BOOL _launchLanding;
    BOOL _isUIStandardUnity;
    BOOL _isTapped;
    BOOL _accessibilityExp;
    BOOL _isLightTheme;
    BOOL _canChangeTheme;
    BOOL _isScrollToRightTriggeredByClickArrowImage;
    BOOL _canShowRightNavigationArrowView;
    BOOL _isAlreadyScrolled;
    BOOL _scrollForArrow;
    BOOL _needOptimizeTabTextColor;
    AWESlidingViewController *_slidingViewController;
    NSArray *_items;
    long long _selectedIndex;
    long long _previousSelectedIndex;
    id /* block */ _indexChangeBlock;
    id /* block */ _indexRepeatedClickBlock;
    id /* block */ _doubleClickedBlock;
    NSMutableArray *_itemViews;
    NSMutableArray *_views;
    long long _resizeFrameParam;
    UIView *_liveView;
    AWEMultiTabNavigationArrowView *_rightNavigationArrowView;
    id /* block */ _tabItemTapGestureRecognizerShouldReceiveTouchBlock;
    id /* block */ _tabItemTapGestureRecognizerStateChangedBlock;
    id /* block */ _didRightArrowClicked;
    id<AWEFeedSegmentedControlDelegate> _delegate;
    AWEHPTopTabLayoutUIModel *_layoutModel;
    UIView *_selectedLineView;
    UIView *_selectedLineContainerView;
    UIImageView *_selectedImageView;
    UIGestureRecognizer *_singleTap;
    UIGestureRecognizer *_doubleTap;
    long long _ignoreDoubleClickIndex;
    AWEFeedMultiTabSegmentedViewUIConfig *_config;
    double _itemDistance;
    UIView *_container;
    DUXButton *_editTab;
    UIScrollView *_multiTabSegmentedControlScollWrapperView;
    double _leftMaskAlpha;
    double _rightMaskAlpha;
    CAGradientLayer *_leftRightMaskLayer;
    UIView *_maskView;
    NSMutableArray *_tabIdentiferList;
    double _rightNavigationArrowViewTargetAlpha;
    MASConstraint *_iPadWrapperViewWidthEqual;
    MASConstraint *_iPadWrapperViewWidthLess;
    UIView *_leftMaskView;
    UIView *_rightMaskView;
    UIColor *_selectedDarkColor;
    UIColor *_selectedLightColor;
    UIColor *_unSelectedDarkColor;
    UIColor *_unSelectedLightColor;
    NSArray *_redDotWhiteList;
    struct { double leftPadding; double contentWidth; BOOL hasExtraSpace; } _calculateResult;
}

@property (nonatomic) BOOL isUIStandardUnity;
@property (retain, nonatomic) AWEHPTopTabLayoutUIModel *layoutModel;
@property (retain, nonatomic) UIView *selectedLineView;
@property (retain, nonatomic) UIView *selectedLineContainerView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (nonatomic) BOOL isTapped;
@property (nonatomic) BOOL accessibilityExp;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) UIGestureRecognizer *singleTap;
@property (weak, nonatomic) UIGestureRecognizer *doubleTap;
@property (nonatomic) long long ignoreDoubleClickIndex;
@property (retain, nonatomic) AWEFeedMultiTabSegmentedViewUIConfig *config;
@property (nonatomic) double itemDistance;
@property (nonatomic) BOOL isLightTheme;
@property (nonatomic) BOOL canChangeTheme;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) DUXButton *editTab;
@property (retain, nonatomic) UIScrollView *multiTabSegmentedControlScollWrapperView;
@property (nonatomic) double leftMaskAlpha;
@property (nonatomic) double rightMaskAlpha;
@property (retain, nonatomic) CAGradientLayer *leftRightMaskLayer;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) NSMutableArray *tabIdentiferList;
@property (nonatomic) double rightNavigationArrowViewTargetAlpha;
@property (nonatomic) BOOL isScrollToRightTriggeredByClickArrowImage;
@property (nonatomic) BOOL canShowRightNavigationArrowView;
@property (retain, nonatomic) MASConstraint *iPadWrapperViewWidthEqual;
@property (retain, nonatomic) MASConstraint *iPadWrapperViewWidthLess;
@property (retain, nonatomic) UIView *leftMaskView;
@property (retain, nonatomic) UIView *rightMaskView;
@property (nonatomic) BOOL isAlreadyScrolled;
@property (nonatomic) BOOL scrollForArrow;
@property (nonatomic) BOOL needOptimizeTabTextColor;
@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;
@property (retain, nonatomic) NSArray *redDotWhiteList;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long previousSelectedIndex;
@property (copy) id /* block */ indexChangeBlock;
@property (copy) id /* block */ indexRepeatedClickBlock;
@property (copy) id /* block */ doubleClickedBlock;
@property (readonly, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSMutableArray *views;
@property (nonatomic) long long resizeFrameParam;
@property (weak, nonatomic) UIView *liveView;
@property (retain, nonatomic) AWEMultiTabNavigationArrowView *rightNavigationArrowView;
@property (copy) id /* block */ tabItemTapGestureRecognizerShouldReceiveTouchBlock;
@property (copy) id /* block */ tabItemTapGestureRecognizerStateChangedBlock;
@property (copy, nonatomic) id /* block */ didRightArrowClicked;
@property (weak, nonatomic) id<AWEFeedSegmentedControlDelegate> delegate;
@property (nonatomic) BOOL launchLanding;
@property (nonatomic) struct { double leftPadding; double contentWidth; BOOL hasExtraSpace; } calculateResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;

+ (Class)aAWEPadModuleAdapterClass;

- (void)awe_themeDidChange:(long long)arg0;
- (id)aAWEPadModuleAdapter;
- (id)followRedDotTrackString;
- (long long)followRedDotCount;
- (struct CGPoint { double x0; double x1; })calculateTabCenterWithIndex:(long long)arg0;
- (void)setSingleTap:(id)arg0;
- (void)setDoubleTap:(id)arg0;
- (id)layoutModel;
- (void)setLayoutModel:(id)arg0;
- (void)scrollViewDidEndScroll:(id)arg0;
- (id)selectedLineView;
- (id)generateLineView;
- (void)setSelectedLineView:(id)arg0;
- (BOOL)needOptimizeTabTextColor;
- (id)selectedDarkColor;
- (void)setSelectedDarkColor:(id)arg0;
- (id)selectedLightColor;
- (void)setSelectedLightColor:(id)arg0;
- (id)unSelectedDarkColor;
- (void)setUnSelectedDarkColor:(id)arg0;
- (id)unSelectedLightColor;
- (void)setUnSelectedLightColor:(id)arg0;
- (id)slidingViewController;
- (void)setSlidingViewController:(id)arg0;
- (void)setIndexChangeBlock:(id /* block */)arg0;
- (void)setIsTapped:(BOOL)arg0;
- (BOOL)isTapped;
- (void)changeToIndex:(long long)arg0;
- (BOOL)isSegmentItemViewFullyPresentWithIndex:(unsigned long long)arg0;
- (void)buildUI;
- (BOOL)isUIStandardUnity;
- (void)setIsUIStandardUnity:(BOOL)arg0;
- (BOOL)isFirstItemView:(id)arg0;
- (void)feedSegmentItemViewShowMaterialComplete:(id)arg0;
- (void)feedSegmentItemViewDifferentiationComplete:(id)arg0;
- (void)setNeedOptimizeTabTextColor:(BOOL)arg0;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1 tapped:(BOOL)arg2;
- (void)slidingControllerDidScroll:(id)arg0 isFigureDragging:(BOOL)arg1;
- (id /* block */)indexChangeBlock;
- (BOOL)isSlidable;
- (void)changeTheme:(BOOL)arg0;
- (void)updateTopTabBarAceessibility:(BOOL)arg0;
- (float)segmentItemViewShowPercentageAtIndex:(long long)arg0;
- (void)updateTopTabItem:(id)arg0 atIndex:(long long)arg1 animeted:(BOOL)arg2;
- (void)updateIndicatorIconAlphaWithIndex:(long long)arg0;
- (void)updateIndicatorIconRotationWithIndex:(long long)arg0;
- (void)reloadTopTabItems:(id)arg0;
- (void)scrollSegmentedControlItemViewToIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
- (struct CGPoint { double x0; double x1; })segmentItemViewBottomCenterAtIndex:(long long)arg0;
- (long long)needDowngradeRedDotWithIndex:(long long)arg0;
- (id)hideRedDotAtIndex:(long long)arg0;
- (id)showRedDotAtIndex:(long long)arg0 withCount:(long long)arg1;
- (id)showRedDotAtIndex:(long long)arg0 withText:(id)arg1;
- (id)showRedDotAtIndex:(long long)arg0;
- (id)segmentItemViewAtIndex:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTopBarActuallyVisibleRect;
- (void)setIndexRepeatedClickBlock:(id /* block */)arg0;
- (void)setLaunchLanding:(BOOL)arg0;
- (id)redDotAtIndex:(long long)arg0;
- (void)setCanChangeTheme:(BOOL)arg0;
- (void)setLightTheme:(BOOL)arg0;
- (void)scrollMultiTabSegmentedControlToSelected;
- (void)scrollMultiTabSegmentedControlToRight;
- (void)reloadSegmentControlLayout;
- (double)getHorizonDistanceToTargetIndex:(unsigned long long)arg0;
- (BOOL)redDotDidShow:(long long)arg0;
- (id)initWithItems:(id)arg0 defaultSelectedIndex:(long long)arg1 newConfig:(id)arg2;
- (void)setTabItemTapGestureRecognizerShouldReceiveTouchBlock:(id /* block */)arg0;
- (void)setTabItemTapGestureRecognizerStateChangedBlock:(id /* block */)arg0;
- (void)setDidRightArrowClicked:(id /* block */)arg0;
- (void)setSegmentedControlDelegate:(id)arg0;
- (void)congfigIgnoreDoubleClickIndex:(long long)arg0;
- (void)selectedLineShadowRadius:(double)arg0 shadowOpacity:(double)arg1 shadowOffsetX:(double)arg2 shadowOffsetY:(double)arg3 shadowAlpha:(double)arg4;
- (void)setDoubleClickedBlock:(id /* block */)arg0;
- (id)labelForIndex:(long long)arg0;
- (void)configTextColor;
- (void)bindScrollWrapperView;
- (void)setAccessibilityExp:(BOOL)arg0;
- (void)didChangeStatusBarOrientation:(id)arg0;
- (void)dynamicUpdateMaskLayerFrame;
- (void)setupMultiTabUI;
- (id)selectedLineContainerView;
- (id)editTab;
- (void)p_buildSegmentItemView;
- (double)selectLineWidth;
- (double)bottomLineOffset;
- (void)addRightNavigationArrowView;
- (id)rightNavigationArrowView;
- (void)oneditTabClick;
- (id /* block */)tabItemTapGestureRecognizerStateChangedBlock;
- (void)segmentedControlTapped:(long long)arg0;
- (void)repeatTapIndex:(long long)arg0;
- (BOOL)canShowRightNavigationArrowView;
- (void)removeAllBubbles;
- (id /* block */)doubleClickedBlock;
- (void)setIsAlreadyScrolled:(BOOL)arg0;
- (void)tab:(id)arg0 changeToSelected:(BOOL)arg1 animated:(BOOL)arg2 index:(long long)arg3;
- (BOOL)launchLanding;
- (void)layoutSelectedLineViewWithIndex:(long long)arg0;
- (void)scrollSegmentedControlItemViewToCenter:(unsigned long long)arg0;
- (BOOL)accessibilityExp;
- (void)updateSelectedContainerViewWithItem:(id)arg0;
- (double)p_getLightThemeProgressWithFromIndex:(long long)arg0 toIndex:(long long)arg1 progress:(double)arg2;
- (BOOL)enableLightTheme;
- (void)updateSelectViewShadowPathWithProgress:(double)arg0;
- (void)setUpSelectedLineViewColorWithItem:(id)arg0;
- (BOOL)showDifferentiationLine;
- (BOOL)selectedLineViewIsDifferentiation:(id)arg0;
- (void)updateSelectViewShadowPath:(BOOL)arg0;
- (BOOL)canChangeTheme;
- (void)setIsLightTheme:(BOOL)arg0;
- (long long)resizeFrameParam;
- (id)titleFontWithSelected:(BOOL)arg0 atIndex:(long long)arg1;
- (id /* block */)indexRepeatedClickBlock;
- (id)p_labelAtIndex:(long long)arg0;
- (void)replaceItem:(id)arg0 atIndex:(long long)arg1;
- (void)setCalculateResult:(struct { double x0; double x1; BOOL x2; })arg0;
- (double)labelLeftPadding;
- (void)setItemDistance:(double)arg0;
- (double)itemDistance;
- (id)multiTabSegmentedControlScollWrapperView;
- (double)leftMaskAlpha;
- (double)rightMaskAlpha;
- (BOOL)isAlreadyScrolled;
- (long long)ignoreDoubleClickIndex;
- (id /* block */)tabItemTapGestureRecognizerShouldReceiveTouchBlock;
- (void)setIgnoreDoubleClickIndex:(long long)arg0;
- (long long)redDotTagWithIndex:(long long)arg0;
- (id)redDotWhiteList;
- (id)tabIdentiferList;
- (BOOL)enablePaddingOptimize;
- (struct CGSize { double x0; double x1; })p_sizeForLabelStr:(id)arg0 font:(id)arg1 maxHeight:(double)arg2;
- (id /* block */)didRightArrowClicked;
- (void)updateMaskLayer;
- (void)updateMaskLayerForNewLayout;
- (void)setIsScrollToRightTriggeredByClickArrowImage:(BOOL)arg0;
- (void)setRightNavigationArrowViewTargetAlpha:(double)arg0;
- (void)setCanShowRightNavigationArrowView:(BOOL)arg0;
- (void)setLeftMaskAlpha:(double)arg0;
- (void)setRightMaskAlpha:(double)arg0;
- (id)leftRightMaskLayer;
- (double)rightNavigationArrowViewTargetAlpha;
- (BOOL)isScrollToRightTriggeredByClickArrowImage;
- (void)updateRightNavigationArrowWithAlpha:(double)arg0;
- (double)calculateRightNavigationArrowAlphaWithContentOffset:(double)arg0;
- (BOOL)scrollForArrow;
- (void)dynamicUpdateMaskLayerFrameForNewLayout;
- (double)p_calculateOffsetWithIndex:(unsigned long long)arg0;
- (void)setScrollForArrow:(BOOL)arg0;
- (void)updateRightNavigationArrowWithContentOffset:(double)arg0;
- (void)removeHomePageBubble;
- (void)didRightNavigationArrowClicked;
- (void)hideSelectedLineView;
- (struct CGPoint { double x0; double x1; })segmentItemViewCenterAtIndex:(long long)arg0;
- (void)setResizeFrameParam:(long long)arg0;
- (void)setRightNavigationArrowView:(id)arg0;
- (void)setSelectedLineContainerView:(id)arg0;
- (void)setEditTab:(id)arg0;
- (void)setMultiTabSegmentedControlScollWrapperView:(id)arg0;
- (void)setLeftRightMaskLayer:(id)arg0;
- (void)setTabIdentiferList:(id)arg0;
- (id)iPadWrapperViewWidthEqual;
- (void)setIPadWrapperViewWidthEqual:(id)arg0;
- (id)iPadWrapperViewWidthLess;
- (void)setIPadWrapperViewWidthLess:(id)arg0;
- (id)leftMaskView;
- (void)setLeftMaskView:(id)arg0;
- (id)rightMaskView;
- (void)setRightMaskView:(id)arg0;
- (void)setRedDotWhiteList:(id)arg0;
- (id)container;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setItems:(id)arg0;
- (id)views;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setSelectedIndex:(long long)arg0;
- (void)setAlpha:(double)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)doubleTap:(id)arg0;
- (id)config;
- (void)setContainer:(id)arg0;
- (id)maskView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)delegate;
- (void)tap:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)setHidden:(BOOL)arg0;
- (id)colorWithHexString:(id)arg0;
- (void)setMaskView:(id)arg0;
- (long long)selectedIndex;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)forceLayout;
- (void)setViews:(id)arg0;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1;
- (struct { double x0; double x1; BOOL x2; })calculateResult;
- (id)itemViews;
- (id)liveView;
- (void)setLiveView:(id)arg0;
- (BOOL)isLightTheme;
- (long long)previousSelectedIndex;
- (void)setPreviousSelectedIndex:(long long)arg0;
- (id)singleTap;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg0;
- (id)doubleTap;

@end