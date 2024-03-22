//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AFDExchangeLocationAnchorView : UIView {
    UIImageView *_iconBackgroundImageView;
    UIImageView *_iconImageView;
    UIView *_titleBackgroundView;
    UIImageView *_titleIconImageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *iconBackgroundImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *titleBackgroundView;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)updateIconWithUserCoverImageURLArray:(id)arg0;
- (void)updateTitle:(id)arg0 titleFontSize:(double)arg1;
- (void)p_setupIconUIWithConfig:(id)arg0;
- (void)p_setupTitleUIWithConfig:(id)arg0;
- (void)updateUIHiddenWithStyle:(unsigned long long)arg0;
- (id)iconBackgroundImageView;
- (id)titleBackgroundView;
- (void)triggerShowAniamtion;
- (void)setIconBackgroundImageView:(id)arg0;
- (void)setTitleBackgroundView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithConfig:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)titleIconImageView;
- (void)setTitleIconImageView:(id)arg0;

@end