//
//     Generated by private class-dump
//

@class UIImageView, AWEAwemeModel, UILabel, UIButton;

@interface CMCBatManBannerView : UIView {
    UIImageView *_iconImage;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_rightButton;
    UIButton *_bannerCloseButton;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *bannerCloseButton;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)updateUIWithModel:(id)arg0;
- (id)bannerCloseButton;
- (void)setBannerCloseButton:(id)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (id)iconImage;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setIconImage:(id)arg0;
- (void)setupUI;

@end
