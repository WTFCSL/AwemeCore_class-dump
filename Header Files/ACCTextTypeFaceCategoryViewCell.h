//
//     Generated by private class-dump
//

@class UIImageView, UIView;

@interface ACCTextTypeFaceCategoryViewCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIView *_imageSelectedView;
    UIView *_colorView;
    UIView *_colorSelectedView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageSelectedView;
@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) UIView *colorSelectedView;

- (void)configWithItemModel:(id)arg0;
- (id)imageSelectedView;
- (id)colorSelectedView;
- (id)alignmentNameList;
- (id)colorNameDict;
- (void)setImageSelectedView:(id)arg0;
- (void)setColorSelectedView:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setupUI;
- (id)colorView;
- (void)setColorView:(id)arg0;

@end