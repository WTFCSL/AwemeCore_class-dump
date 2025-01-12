//
//     Generated by private class-dump
//

@class UIView, NSMutableArray, BDNovelComicToolItemView;
@protocol BDNovelComicToolViewDelegate;

@interface BDNovelComicToolView : BDNovelComicBaseView {
    id<BDNovelComicToolViewDelegate> _delegate;
    NSMutableArray *_itemViews;
    BDNovelComicToolItemView *_catalogItemView;
    BDNovelComicToolItemView *_darkItemView;
    BDNovelComicToolItemView *_settingItemView;
    UIView *_topLineView;
}

@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) BDNovelComicToolItemView *catalogItemView;
@property (retain, nonatomic) BDNovelComicToolItemView *darkItemView;
@property (retain, nonatomic) BDNovelComicToolItemView *settingItemView;
@property (retain, nonatomic) UIView *topLineView;
@property (weak, nonatomic) id<BDNovelComicToolViewDelegate> delegate;

- (id)bdcr_readerInsertedViewRequestInsertedView;
- (void)setReaderModel:(id)arg0;
- (void)readerThemeChange:(id)arg0;
- (id)settingItemView;
- (void)setCatalogItemView:(id)arg0;
- (void)setDarkItemView:(id)arg0;
- (id)catalogItemView;
- (void)setSettingItemView:(id)arg0;
- (id)darkItemView;
- (void)setToolShow:(BOOL)arg0;
- (void)dismissCatalog;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)topLineView;
- (void)setTopLineView:(id)arg0;
- (id)itemViews;
- (void)setItemViews:(id)arg0;

@end
