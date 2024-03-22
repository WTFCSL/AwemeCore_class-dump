//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, UILabel, UIVisualEffectView, LOTAnimationView;

@interface AWEProgressSectionCollectionViewInnerCell : UICollectionViewCell <AWEProgressSectionCellProtocol> {
    unsigned long long _style;
    UILabel *_textLabel;
    UIImageView *_iconImgView;
    UIImageView *_bgImageView;
    UIImage *_bgImage;
    UIVisualEffectView *_effectView;
    LOTAnimationView *_lottieView;
}

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImage *bgImage;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cellInsets;
+ (double)itemWidthWithText:(id)arg0;
+ (id)identifier;
+ (id)textFont;

- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (void)configWithChapterModel:(id)arg0;
- (id)iconImgView;
- (void)setIconImgView:(id)arg0;
- (id)textLabel;
- (unsigned long long)style;
- (id)effectView;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEffectView:(id)arg0;
- (void)setSelected:(BOOL)arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setStyle:(unsigned long long)arg0;
- (void)setTextLabel:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (void)setBgImage:(id)arg0;
- (id)bgImage;

@end
