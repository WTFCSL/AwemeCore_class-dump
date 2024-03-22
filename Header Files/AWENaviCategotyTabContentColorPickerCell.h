//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, AWENaviColorPickerHeaderView, AWENaviColorPickerSliderView, NSString;

@interface AWENaviCategotyTabContentColorPickerCell : TTKNaviCategoryTabContentTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, TTKNaviCategoryTabContentOffsetProvider> {
    long long _singleLineMax;
    AWENaviColorPickerHeaderView *_headerView;
    UICollectionView *_paleteeView;
    AWENaviColorPickerSliderView *_sliderView;
    UICollectionView *_paletteView;
    NSArray *_tabs;
}

@property (retain, nonatomic) AWENaviColorPickerHeaderView *headerView;
@property (retain, nonatomic) UICollectionView *paletteView;
@property (retain, nonatomic) NSArray *tabs;
@property (retain, nonatomic) AWENaviColorPickerSliderView *sliderView;
@property (nonatomic) long long singleLineMax;
@property (readonly, nonatomic) UICollectionView *paleteeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long section;

- (void)refreshHeight;
- (id)allColors;
- (id)showColors;
- (void)setShowColors:(id)arg0;
- (void)setupSelectedColor;
- (void)reloadColors;
- (void)setupWithTabs:(id)arg0;
- (BOOL)isSliderHidden;
- (id)currentColors;
- (BOOL)isUnfold;
- (long long)singleLineMax;
- (void)setIsUnfold:(BOOL)arg0;
- (void)setIsSliderHidden:(BOOL)arg0;
- (void)unfoldColors:(BOOL)arg0;
- (id)p_getPaletteCollectionViewCellWithColor:(id)arg0;
- (id)paleteeView;
- (void)pageDidDisappear;
- (void)scrollWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)cellWillShow;
- (void)cellDidDismiss;
- (void)setSingleLineMax:(long long)arg0;
- (void)reload;
- (struct CGPoint { double x0; double x1; })currentOffset;
- (id)sliderView;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setHeaderView:(id)arg0;
- (void)setSliderView:(id)arg0;
- (id)viewModel;
- (void)prepareForReuse;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (id)tabs;
- (void)setupViews;
- (id)currentTab;
- (id)paletteView;
- (void)setPaletteView:(id)arg0;
- (void)setSelectedColorIndex:(unsigned long long)arg0;
- (unsigned long long)selectedColorIndex;
- (void)setTabs:(id)arg0;

@end
