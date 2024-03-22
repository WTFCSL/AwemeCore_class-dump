//
//     Generated by private class-dump
//

@class UIStackView, NSArray, AWESlidingViewController, NSString, UIView, NSMutableArray;
@protocol AWEMusicSegmentedControlDelegate;

@interface AWEMusicSegmentedControl : UIView <AWESlidingTabbarProtocol> {
    AWESlidingViewController *_slidingViewController;
    long long _selectedIndex;
    id<AWEMusicSegmentedControlDelegate> _delegate;
    UIStackView *_stackView;
    NSMutableArray *_itemViews;
    NSArray *_items;
    UIView *_darkSelectedLineView;
    UIView *_lightSelectedLineView;
    UIView *_seperateView;
    long long _playingIndex;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *darkSelectedLineView;
@property (retain, nonatomic) UIView *lightSelectedLineView;
@property (retain, nonatomic) UIView *seperateView;
@property (nonatomic) long long playingIndex;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWEMusicSegmentedControlDelegate> delegate;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeReload;
- (id)seperateView;
- (void)setSeperateView:(id)arg0;
- (void)configSubviews;
- (id)slidingViewController;
- (void)setSlidingViewController:(id)arg0;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1 tapped:(BOOL)arg2;
- (void)slidingControllerDidScroll:(id)arg0 isFigureDragging:(BOOL)arg1;
- (id)initWithItems:(id)arg0 defaultSelectedIndex:(long long)arg1;
- (void)tabChangedProgress:(double)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)setPlayingIndex:(long long)arg0;
- (long long)playingIndex;
- (id)darkSelectedLineView;
- (id)lightSelectedLineView;
- (void)setDarkSelectedLineView:(id)arg0;
- (void)setLightSelectedLineView:(id)arg0;
- (void)updatePlayIndex:(long long)arg0 currentIndex:(long long)arg1 isPlaying:(BOOL)arg2;
- (void)tab:(id)arg0 changeToSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)titleFontWithSelected:(BOOL)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setSelectedIndex:(long long)arg0;
- (id)delegate;
- (id)stackView;
- (void)setStackView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (long long)selectedIndex;
- (id)itemViews;
- (void)setItemViews:(id)arg0;
- (void)singleTap:(id)arg0;
- (void)updateAccessibilityLabel;

@end
