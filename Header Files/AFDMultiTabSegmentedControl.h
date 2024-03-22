//
//     Generated by private class-dump
//

@class UIColor, NSString, NSArray, UIView, UIGestureRecognizer, AWESlidingViewController, NSMutableArray, UIScrollView;
@protocol AWEFamiliarSegmentedControlDelegate;

@interface AFDMultiTabSegmentedControl : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, AFDSegmentedControlProtocol, AWESlidingTabbarProtocol> {
    BOOL _animateLineDismiss;
    AWESlidingViewController *_slidingViewController;
    long long _selectedIndex;
    id /* block */ _indexChangeBlock;
    id /* block */ _indexNoChangeAfterScrollBlock;
    id /* block */ _indexRepeatedClickBlock;
    id /* block */ _singleTapClickedBlock;
    id<AWEFamiliarSegmentedControlDelegate> _delegate;
    NSMutableArray *_itemViews;
    NSArray *_items;
    UIView *_darkSelectedLineView;
    UIView *_lightSelectedLineView;
    UIView *_seperateView;
    UIGestureRecognizer *_singleTap;
    long long _resizeFrameParam;
    long long _playingIndex;
    UIView *_container;
    UIScrollView *_multiTabSegmentedControlScollWrapperView;
    UIView *_maskView;
    UIColor *_darkSelectedLineViewColor;
    UIColor *_lightSelectedLineViewColor;
}

@property (nonatomic) BOOL animateLineDismiss;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *darkSelectedLineView;
@property (retain, nonatomic) UIView *lightSelectedLineView;
@property (retain, nonatomic) UIView *seperateView;
@property (weak, nonatomic) UIGestureRecognizer *singleTap;
@property (nonatomic) long long resizeFrameParam;
@property (nonatomic) long long playingIndex;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIScrollView *multiTabSegmentedControlScollWrapperView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIColor *darkSelectedLineViewColor;
@property (retain, nonatomic) UIColor *lightSelectedLineViewColor;
@property (nonatomic) long long selectedIndex;
@property (copy) id /* block */ indexChangeBlock;
@property (copy) id /* block */ indexNoChangeAfterScrollBlock;
@property (copy) id /* block */ indexRepeatedClickBlock;
@property (copy) id /* block */ singleTapClickedBlock;
@property (weak, nonatomic) id<AWEFamiliarSegmentedControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;

- (void)setSingleTap:(id)arg0;
- (id)seperateView;
- (void)setSeperateView:(id)arg0;
- (id)slidingViewController;
- (void)setSlidingViewController:(id)arg0;
- (void)setIndexChangeBlock:(id /* block */)arg0;
- (void)buildUI;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1 tapped:(BOOL)arg2;
- (void)slidingControllerDidScroll:(id)arg0 isFigureDragging:(BOOL)arg1;
- (id /* block */)indexChangeBlock;
- (void)setIndexRepeatedClickBlock:(id /* block */)arg0;
- (id)labelForIndex:(long long)arg0;
- (void)p_buildSegmentItemView;
- (double)bottomLineOffset;
- (void)segmentedControlTapped:(long long)arg0;
- (void)repeatTapIndex:(long long)arg0;
- (void)tab:(id)arg0 changeToSelected:(BOOL)arg1 animated:(BOOL)arg2 index:(long long)arg3;
- (long long)resizeFrameParam;
- (id)titleFontWithSelected:(BOOL)arg0 atIndex:(long long)arg1;
- (id /* block */)indexRepeatedClickBlock;
- (id)p_labelAtIndex:(long long)arg0;
- (void)replaceItem:(id)arg0 atIndex:(long long)arg1;
- (double)labelLeftPadding;
- (id)multiTabSegmentedControlScollWrapperView;
- (void)setResizeFrameParam:(long long)arg0;
- (void)setMultiTabSegmentedControlScollWrapperView:(id)arg0;
- (void)setContainerAlpha:(double)arg0;
- (void)updateSelectedLineViewWithCurrentIndex:(long long)arg0;
- (id)initWithItems:(id)arg0 defaultSelectedIndex:(long long)arg1;
- (void)setIndexNoChangeAfterScrollBlock:(id /* block */)arg0;
- (void)setSingleTapClickedBlock:(id /* block */)arg0;
- (void)reloadWithItems:(id)arg0 selectedIndex:(long long)arg1;
- (void)updateSegmentThemeChangedToDark:(BOOL)arg0 currentIndex:(long long)arg1;
- (void)tabChangedProgress:(double)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)setPlayingIndex:(long long)arg0;
- (long long)playingIndex;
- (void)p_layoutSelectedLineView;
- (void)p_buildMultiTabUI;
- (id)darkSelectedLineView;
- (id)lightSelectedLineView;
- (id)lightSelectedLineViewColor;
- (id)darkSelectedLineViewColor;
- (void)p_updateItemViewYellowDotWithIndex:(long long)arg0 isHidden:(BOOL)arg1;
- (id)p_itemAtIndex:(long long)arg0;
- (id /* block */)singleTapClickedBlock;
- (id /* block */)indexNoChangeAfterScrollBlock;
- (BOOL)animateLineDismiss;
- (void)updateItem:(id)arg0 atIndex:(long long)arg1 animeted:(BOOL)arg2;
- (void)showItemViewYellowDotWithIndex:(long long)arg0;
- (void)hideItemViewYellowDotWithIndex:(long long)arg0;
- (void)updateDropDownArrowWithHidden:(BOOL)arg0 currentIndex:(long long)arg1;
- (BOOL)itemViewIsShowingYellowDotWithIndex:(long long)arg0;
- (void)setAnimateLineDismiss:(BOOL)arg0;
- (void)setDarkSelectedLineView:(id)arg0;
- (void)setLightSelectedLineView:(id)arg0;
- (void)setDarkSelectedLineViewColor:(id)arg0;
- (void)setLightSelectedLineViewColor:(id)arg0;
- (id)container;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setSelectedIndex:(long long)arg0;
- (void)setContainer:(id)arg0;
- (id)maskView;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)tap:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setMaskView:(id)arg0;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg0;
- (id)singleTap;

@end
