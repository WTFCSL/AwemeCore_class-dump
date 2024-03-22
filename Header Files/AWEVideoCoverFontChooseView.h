//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, AWEStoryFontModel;
@protocol AWEVideoCoverTextStyleChooseFontDelegate;

@interface AWEVideoCoverFontChooseView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isDisableState;
    AWEStoryFontModel *_selectFont;
    UICollectionView *_collectionView;
    id<AWEVideoCoverTextStyleChooseFontDelegate> _delegate;
    NSArray *_stickerFonts;
    long long _selectedIndex;
    NSString *_lastNeedAutoSelectFontId;
}

@property (retain, nonatomic) AWEStoryFontModel *selectFont;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *stickerFonts;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSString *lastNeedAutoSelectFontId;
@property (nonatomic) BOOL isDisableState;
@property (weak, nonatomic) id<AWEVideoCoverTextStyleChooseFontDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSubViews;
- (void)selectWithIndexPath:(id)arg0;
- (id)stickerFonts;
- (void)selectWithFontID:(id)arg0;
- (void)clearSelectFont;
- (void)disableFontView;
- (void)resetFontView;
- (void)refreshWithStickerFonts:(id)arg0;
- (void)setStickerFonts:(id)arg0;
- (void)setLastNeedAutoSelectFontId:(id)arg0;
- (void)setSelectFont:(id)arg0;
- (id)selectFont;
- (void)setIsDisableState:(BOOL)arg0;
- (void)disableBackgroundColor:(id)arg0;
- (void)resetBackgroundColor:(id)arg0;
- (id)lastNeedAutoSelectFontId;
- (BOOL)isDisableState;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setSelectedIndex:(long long)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (long long)selectedIndex;

@end
