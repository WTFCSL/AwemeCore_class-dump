//
//     Generated by private class-dump
//

@class UILabel, IESLiveImageView, IESLiveButton;
@protocol IESLiveInteractUserModel;

@interface IESLiveMultiLinkerFocusProfileView : UIView {
    BOOL _medalIconShow;
    id /* block */ _followBlock;
    id<IESLiveInteractUserModel> _userModel;
    UILabel *_nicknameLabel;
    IESLiveButton *_followButton;
    IESLiveImageView *_muteImageView;
    IESLiveImageView *_medalImageView;
}

@property (retain, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) IESLiveButton *followButton;
@property (retain, nonatomic) IESLiveImageView *muteImageView;
@property (retain, nonatomic) IESLiveImageView *medalImageView;
@property (nonatomic) BOOL medalIconShow;
@property (copy, nonatomic) id /* block */ followBlock;

- (id)followButton;
- (void)setFollowButton:(id)arg0;
- (id /* block */)followBlock;
- (void)setFollowBlock:(id /* block */)arg0;
- (id)muteImageView;
- (void)setMuteImageView:(id)arg0;
- (void)onFollowButtonClicked;
- (id)initWithDIContext:(id)arg0 user:(id)arg1;
- (id)battleInfo;
- (BOOL)shouldShowMedal;
- (id)medalImageView;
- (void)updateFocusViewLayout;
- (void)setMedalIconShow:(BOOL)arg0;
- (BOOL)medalIconShow;
- (void)updateMedalIconShow:(BOOL)arg0;
- (void)setMedalImageView:(id)arg0;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)setupSubviews;
- (void)updateUserInfo:(id)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;

@end