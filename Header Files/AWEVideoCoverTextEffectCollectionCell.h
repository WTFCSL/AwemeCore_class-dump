//
//     Generated by private class-dump
//

@class UIImageView, AWEScrollStringLabel, UIView;

@interface AWEVideoCoverTextEffectCollectionCell : UICollectionViewCell {
    UIView *_borderView;
    UIImageView *_effectImageView;
    UIImageView *_statusIndicator;
    AWEScrollStringLabel *_nameLabel;
    long long _downloadStatus;
}

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *effectImageView;
@property (retain, nonatomic) UIImageView *statusIndicator;
@property (retain, nonatomic) AWEScrollStringLabel *nameLabel;
@property (nonatomic) long long downloadStatus;

- (id)effectImageView;
- (void)setEffectImageView:(id)arg0;
- (id)createRotationAnimation;
- (void)startDownloadAnimation;
- (void)stopDownloadAnimation;
- (void)configCellWithModel:(id)arg0 selected:(BOOL)arg1;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (BOOL)isAccessibilityElement;
- (void)setNameLabel:(id)arg0;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (long long)downloadStatus;
- (void)setDownloadStatus:(long long)arg0;
- (id)statusIndicator;
- (void)setStatusIndicator:(id)arg0;

@end
