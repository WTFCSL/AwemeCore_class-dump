//
//     Generated by private class-dump
//

@class UIImageView, IESECGoodsDetailDetailTopInfoDataModel;

@interface IESECGoodsDetailDetailTagCardCollectionViewCell : UICollectionViewCell {
    UIImageView *_imageView;
    IESECGoodsDetailDetailTopInfoDataModel *_dataModel;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoDataModel *dataModel;

- (void)tapCell;
- (void)configCellWithViewModel:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)setupUI;

@end
