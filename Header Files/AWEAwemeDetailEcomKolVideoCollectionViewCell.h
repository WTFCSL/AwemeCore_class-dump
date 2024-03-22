//
//     Generated by private class-dump
//

@class UIImageView, UILabel, CAGradientLayer;

@interface AWEAwemeDetailEcomKolVideoCollectionViewCell : UICollectionViewCell {
    UIImageView *_videoImageView;
    UIImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIImageView *_playIconImageView;
    UILabel *_followLabel;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)playIconImageView;
- (void)setPlayIconImageView:(id)arg0;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)updateSelected:(BOOL)arg0;
- (id)videoImageView;
- (id)followLabel;
- (void)setVideoImageView:(id)arg0;
- (void)setFollowLabel:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setGradientLayer:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)updateModel:(id)arg0;

@end
