//
//     Generated by private class-dump
//

@class AWEStickerPickerModel, AWEStickerPickerSearchView;

@interface AWEStickerPickerSearchCollectionViewCell : UICollectionViewCell {
    AWEStickerPickerModel *_model;
    AWEStickerPickerSearchView *_searchView;
}

@property (retain, nonatomic) AWEStickerPickerSearchView *searchView;
@property (retain, nonatomic) AWEStickerPickerModel *model;

+ (id)identifier;

- (void)updateUIConfig:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)searchView;
- (void)setSearchView:(id)arg0;

@end
