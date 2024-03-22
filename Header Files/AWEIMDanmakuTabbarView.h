//
//     Generated by private class-dump
//

@class NSArray, AWESlidingViewController, NSString, UIView;

@interface AWEIMDanmakuTabbarView : UIView <AWESlidingTabbarProtocol> {
    AWESlidingViewController *_slidingViewController;
    long long _selectedIndex;
    NSArray *_tabArray;
    UIView *_containerView;
    UIView *_selectIndicatorView;
    double _containerViewWidth;
}

@property (copy, nonatomic) NSArray *tabArray;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *selectIndicatorView;
@property (nonatomic) double containerViewWidth;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContainerViewWidth:(double)arg0;
- (double)containerViewWidth;
- (void)updateSelectedIndex:(unsigned long long)arg0;
- (id)slidingViewController;
- (void)setSlidingViewController:(id)arg0;
- (id)tabArray;
- (void)setTabArray:(id)arg0;
- (void)updateSelectedLineFrame;
- (void)slidingControllerDidScroll:(id)arg0 animated:(BOOL)arg1;
- (void)slidingControllerDidScroll:(id)arg0;
- (void)configTabbarItems:(id)arg0 defaultTabIndex:(long long)arg1;
- (void)updateContainerViewWidth;
- (void)clickItem:(id)arg0;
- (id)selectIndicatorView;
- (void)updateIndicatorViewWithScrollView:(id)arg0 animated:(BOOL)arg1;
- (void)setSelectIndicatorView:(id)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (void)setContainerView:(id)arg0;
- (void)setup;
- (id)containerView;
- (long long)selectedIndex;

@end
