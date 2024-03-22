//
//     Generated by private class-dump
//

@class NSString, LOTAnimationView, UILabel, YYAnimatedImageView, UIButton;

@interface DYReusedMobileView : UIView {
    UIButton *_isMineButton;
    UIButton *_notMineButton;
    UILabel *_titleLabel;
    YYAnimatedImageView *_avatarView;
    LOTAnimationView *_finishAnimationView;
    UILabel *_nicknameLabel;
    UILabel *_douyinNumberLabel;
    NSString *_avatarURL;
    NSString *_nickname;
    NSString *_douyinNumber;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYAnimatedImageView *avatarView;
@property (retain, nonatomic) LOTAnimationView *finishAnimationView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *douyinNumberLabel;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *douyinNumber;
@property (retain, nonatomic) UIButton *isMineButton;
@property (retain, nonatomic) UIButton *notMineButton;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (id)douyinNumber;
- (void)setDouyinNumber:(id)arg0;
- (id)finishAnimationView;
- (void)setFinishAnimationView:(id)arg0;
- (id)douyinNumberLabel;
- (id)isMineButton;
- (id)notMineButton;
- (id)initWithDouyinNumber:(id)arg0 avatarURL:(id)arg1 nickName:(id)arg2;
- (void)setIsMineButton:(id)arg0;
- (void)setNotMineButton:(id)arg0;
- (void)setDouyinNumberLabel:(id)arg0;
- (id)nickname;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setNickname:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;

@end