//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel;

@interface AWEPayExchangeCell : UICollectionViewCell {
    NSString *_avatarUrl;
    NSString *_nickname;
    long long _amount;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    UIImageView *_avatarView;
}

@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) long long amount;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarView;

- (void)setAvatarUrl:(id)arg0;
- (id)avatarUrl;
- (void)p_setupUI;
- (void)updateWithAvatar:(id)arg0 title:(id)arg1;
- (id)p_processTitle:(id)arg0;
- (id)nickname;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg0;
- (id)titleLabel;
- (void)setNickname:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (long long)amount;
- (void)setAmount:(long long)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end
