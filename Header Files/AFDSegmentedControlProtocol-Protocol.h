//
//     Generated by private class-dump
//

@protocol AWEFamiliarSegmentedControlDelegate;

@protocol AFDSegmentedControlProtocol <NSObject>

@property (nonatomic) long long selectedIndex;
@property (copy) id /* block */ indexChangeBlock;
@property (copy) id /* block */ indexNoChangeAfterScrollBlock;
@property (copy) id /* block */ indexRepeatedClickBlock;
@property (copy) id /* block */ singleTapClickedBlock;
@property (weak, nonatomic) id<AWEFamiliarSegmentedControlDelegate> delegate;

- (void)setIndexChangeBlock:(id /* block */)arg0;
- (id /* block */)indexChangeBlock;
- (void)setIndexRepeatedClickBlock:(id /* block */)arg0;
- (id)labelForIndex:(long long)arg0;
- (id /* block */)indexRepeatedClickBlock;
- (void)setContainerAlpha:(double)arg0;
- (void)updateSelectedLineViewWithCurrentIndex:(long long)arg0;
- (id)initWithItems:(id)arg0 defaultSelectedIndex:(long long)arg1;
- (void)setIndexNoChangeAfterScrollBlock:(id /* block */)arg0;
- (void)setSingleTapClickedBlock:(id /* block */)arg0;
- (void)reloadWithItems:(id)arg0 selectedIndex:(long long)arg1;
- (void)updateSegmentThemeChangedToDark:(BOOL)arg0 currentIndex:(long long)arg1;
- (id /* block */)singleTapClickedBlock;
- (id /* block */)indexNoChangeAfterScrollBlock;
- (void)updateItem:(id)arg0 atIndex:(long long)arg1 animeted:(BOOL)arg2;
- (void)showItemViewYellowDotWithIndex:(long long)arg0;
- (void)hideItemViewYellowDotWithIndex:(long long)arg0;
- (void)updateDropDownArrowWithHidden:(BOOL)arg0 currentIndex:(long long)arg1;
- (BOOL)itemViewIsShowingYellowDotWithIndex:(long long)arg0;
- (void)setSelectedIndex:(long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (long long)selectedIndex;

@end