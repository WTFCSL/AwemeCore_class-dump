//
//     Generated by private class-dump
//

@class UIImageView, CAShapeLayer;

@interface DVEFramePickerItem : UICollectionViewCell {
    UIImageView *_imageView;
    CAShapeLayer *_roundMask;
    unsigned long long _locationType;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *roundMask;
@property (nonatomic) unsigned long long locationType;

- (void)updateCorner;
- (id)roundMask;
- (void)setRoundMask:(id)arg0;
- (unsigned long long)locationType;
- (void)layoutIfNeeded;
- (void)setLocationType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;

@end