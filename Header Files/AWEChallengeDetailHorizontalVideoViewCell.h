//
//     Generated by private class-dump
//

@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWEChallengeDetailHorizontalVideoViewCell : UICollectionViewCell {
    BOOL _newStyle;
    BOOL _hiddenLikeImageView;
    UIImageView *_coverImageView;
    UIView *_maskView;
    UILabel *_titleLabel;
    UIImageView *_likeImageView;
    UILabel *_likeNumberLabel;
    CAGradientLayer *_maskGradientLayer;
    unsigned long long _styleType;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) CAGradientLayer *maskGradientLayer;
@property (nonatomic) BOOL newStyle;
@property (nonatomic) BOOL hiddenLikeImageView;
@property (nonatomic) unsigned long long styleType;

+ (id)identifier;

- (void)setStyleType:(unsigned long long)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)configUI;
- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg0;
- (BOOL)hiddenLikeImageView;
- (void)setHiddenLikeImageView:(BOOL)arg0;
- (id)likeImageView;
- (id)likeNumberLabel;
- (void)updateBottomContentWithStyle:(unsigned long long)arg0 model:(id)arg1;
- (id)maskGradientLayer;
- (void)setMaskGradientLayer:(id)arg0;
- (void)setLikeImageView:(id)arg0;
- (void)setLikeNumberLabel:(id)arg0;
- (unsigned long long)styleType;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)awakeFromNib;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
