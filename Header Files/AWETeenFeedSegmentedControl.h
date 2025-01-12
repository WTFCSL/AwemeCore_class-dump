//
//     Generated by private class-dump
//

@class UIStackView, NSArray, NSString, AWESlidingViewController, UIView, UIGestureRecognizer;
@protocol AWETeenSegmentedControlProtocol;

@interface AWETeenFeedSegmentedControl : UIView <UIGestureRecognizerDelegate, AWESlidingTabbarProtocol> {
    BOOL _isTapped;
    AWESlidingViewController *_slidingViewController;
    long long _selectedIndex;
    id /* block */ _indexChangeBlock;
    id /* block */ _indexRepeatedClickBlock;
    id /* block */ _doubleClickedBlock;
    id /* block */ _singTapClickedBlock;
    id<AWETeenSegmentedControlProtocol> _delegate;
    UIStackView *_containerView;
    NSArray *_itemViews;
    UIView *_underscoreView;
    UIGestureRecognizer *_singleTap;
    UIGestureRecognizer *_doubleTap;
}

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UIView *underscoreView;
@property (weak, nonatomic) UIGestureRecognizer *singleTap;
@property (weak, nonatomic) UIGestureRecognizer *doubleTap;
@property (nonatomic) BOOL isTapped;
@property (copy, nonatomic) id /* block */ indexChangeBlock;
@property (copy, nonatomic) id /* block */ indexRepeatedClickBlock;
@property (copy, nonatomic) id /* block */ doubleClickedBlock;
@property (copy, nonatomic) id /* block */ singTapClickedBlock;
@property (weak, nonatomic) id<AWETeenSegmentedControlProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) long long selectedIndex;

- (void)setSingleTap:(id)arg0;
- (void)setDoubleTap:(id)arg0;
- (id)slidingViewController;
- (void)setSlidingViewController:(id)arg0;
- (void)setIndexChangeBlock:(id /* block */)arg0;
- (void)setIsTapped:(BOOL)arg0;
- (BOOL)isTapped;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1 tapped:(BOOL)arg2;
- (void)slidingControllerDidScroll:(id)arg0 isFigureDragging:(BOOL)arg1;
- (id /* block */)indexChangeBlock;
- (void)setIndexRepeatedClickBlock:(id /* block */)arg0;
- (void)setDoubleClickedBlock:(id /* block */)arg0;
- (id /* block */)doubleClickedBlock;
- (id /* block */)indexRepeatedClickBlock;
- (void)p_repeatTapIndex:(long long)arg0;
- (void)showChannelSwitch;
- (void)updateColor:(id)arg0 isDark:(BOOL)arg1;
- (void)channelSwitchTurnOn:(BOOL)arg0 isDark:(BOOL)arg1;
- (void)shouldShowYellowDot:(BOOL)arg0 index:(long long)arg1;
- (void)updateTitle:(id)arg0 AtIndex:(long long)arg1;
- (id)initWithItems:(id)arg0 defaultSelectedIndex:(long long)arg1 delegate:(id)arg2;
- (BOOL)isShowYellowDotAtIndex:(long long)arg0;
- (void)p_buildUIWithItems:(id)arg0;
- (void)p_setupRecognizer;
- (id)underscoreView;
- (void)p_singleTap:(id)arg0;
- (void)p_doubleTap:(id)arg0;
- (double)p_underscoreViewCenterY;
- (void)p_tabChanged:(id)arg0 index:(long long)arg1 toSelected:(BOOL)arg2 animated:(BOOL)arg3;
- (id /* block */)singTapClickedBlock;
- (void)p_segmentedControlTapped:(long long)arg0;
- (void)hideChannelSwitch;
- (void)setSingTapClickedBlock:(id /* block */)arg0;
- (void)setUnderscoreView:(id)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (long long)selectedIndex;
- (id)itemViews;
- (void)setItemViews:(id)arg0;
- (void)updateItems:(id)arg0;
- (id)singleTap;
- (id)doubleTap;

@end
