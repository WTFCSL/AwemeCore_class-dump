//
//     Generated by private class-dump
//

@class UILabel, IESLiveImageView, IESLiveButton;

@interface IESLiveMediaMultiLinkerFocusProfileView : UIView {
    id /* block */ _followBlock;
    UILabel *_nicknameLabel;
    IESLiveButton *_followButton;
    IESLiveImageView *_muteImageView;
}

@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) IESLiveButton *followButton;
@property (retain, nonatomic) IESLiveImageView *muteImageView;
@property (copy, nonatomic) id /* block */ followBlock;

- (id)followButton;
- (void)setFollowButton:(id)arg0;
- (id /* block */)followBlock;
- (void)setFollowBlock:(id /* block */)arg0;
- (id)muteImageView;
- (void)setMuteImageView:(id)arg0;
- (void)onFollowButtonClicked;
- (id)initWithDIContext:(id)arg0 user:(id)arg1;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateUserInfo:(id)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;

@end
