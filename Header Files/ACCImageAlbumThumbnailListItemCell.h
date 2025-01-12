//
//     Generated by private class-dump
//

@class UIImageView;

@interface ACCImageAlbumThumbnailListItemCell : UICollectionViewCell {
    UIImageView *_imageView;
    double _imageViewWidth;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double imageViewWidth;

+ (id)cellIdentifier;

- (void)setImageViewWidth:(double)arg0;
- (void)updateUIWithSeletedStatus:(BOOL)arg0;
- (void)setupViewsWithWidth:(double)arg0;
- (void)updateWithImage:(id)arg0 isSelected:(BOOL)arg1 index:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (double)imageViewWidth;

@end
