//
//     Generated by private class-dump
//

@class UIImageView;

@interface AWETeenSlidesClipCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIImageView *_underImageView;
}

@property (retain, nonatomic) UIImageView *underImageView;
@property (retain, nonatomic) UIImageView *imageView;

- (id)underImageView;
- (void)setUnderImageView:(id)arg0;
- (void)p_setupViews;
- (void)p_updateImageViewSize;
- (long long)p_scaleModeWithImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setImageModel:(id)arg0 placeholderImage:(id)arg1 index:(long long)arg2 totalCount:(long long)arg3 logExtra:(id)arg4;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)prepareForReuse;

@end
