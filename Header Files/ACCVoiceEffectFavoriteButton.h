//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface ACCVoiceEffectFavoriteButton : UIButton {
    UIImageView *_starImgView;
    UILabel *_favoriteLabel;
}

@property (retain, nonatomic) UIImageView *starImgView;
@property (retain, nonatomic) UILabel *favoriteLabel;

- (void)setStarImgView:(id)arg0;
- (id)starImgView;
- (void)setFavoriteLabel:(id)arg0;
- (id)favoriteLabel;
- (void)updateFavoriteStatus:(BOOL)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)setupViews;

@end