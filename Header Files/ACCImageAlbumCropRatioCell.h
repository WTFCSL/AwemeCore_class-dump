//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface ACCImageAlbumCropRatioCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UIImageView *_circleImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *circleImageView;

+ (id)cellIdentifier;

- (void)p_setupView;
- (void)p_setupLayout;
- (id)circleImageView;
- (id)p_getImageWithRatioWidth:(double)arg0 height:(double)arg1 longestSideLength:(double)arg2;
- (id)p_getImageWithRatioWidth:(double)arg0 height:(double)arg1 longestSideLength:(double)arg2 imageWidth:(double)arg3 minPadding:(double)arg4 cornerRadius:(double)arg5 lineWidth:(double)arg6 lineColor:(id)arg7 screenRatio:(double)arg8;
- (void)loadData:(id)arg0 isSelected:(BOOL)arg1;
- (void)setCircleImageView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;

@end
