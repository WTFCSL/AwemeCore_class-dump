//
//     Generated by private class-dump
//

@class UILongPressGestureRecognizer, BDImageView, UIImageView, UIColor, UIView, UILabel, UITapGestureRecognizer;

@interface AWEVideoEffectViewCollectionCell : UICollectionViewCell {
    BDImageView *_imageView;
    UILabel *_nameLabel;
    UIImageView *_colorView;
    UIColor *_coverColor;
    long long _downloadStatus;
    UIImageView *_statusIndicator;
    UIView *_imageBackgroundView;
    UITapGestureRecognizer *_tapGes;
    UILongPressGestureRecognizer *_longGes;
    unsigned long long _type;
}

@property (retain, nonatomic) UIImageView *statusIndicator;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGes;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *colorView;
@property (retain, nonatomic) UIColor *coverColor;
@property (nonatomic) long long downloadStatus;

- (id)coverColor;
- (void)setCoverColor:(id)arg0;
- (id)tapGes;
- (void)setTapGes:(id)arg0;
- (id)imageBackgroundView;
- (void)setImageBackgroundView:(id)arg0;
- (id)createRotationAnimation;
- (void)startDownloadAnimation;
- (void)stopDownloadAnimation;
- (void)tapAnimation;
- (id)longGes;
- (void)longPressedAnimationWithGesture:(id)arg0;
- (void)setCenterImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)setLongGes:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)commonInit;
- (id)imageView;
- (unsigned long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setSelected:(BOOL)arg0;
- (id)nameLabel;
- (BOOL)isAccessibilityElement;
- (void)setNameLabel:(id)arg0;
- (void)updateText:(id)arg0;
- (id)colorView;
- (void)setColorView:(id)arg0;
- (long long)downloadStatus;
- (void)setDownloadStatus:(long long)arg0;
- (id)statusIndicator;
- (void)setStatusIndicator:(id)arg0;

@end