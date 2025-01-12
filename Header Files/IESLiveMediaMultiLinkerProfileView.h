//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;
@protocol IESLiveInteractUserModel;

@interface IESLiveMediaMultiLinkerProfileView : UIView {
    BOOL _isFirstLoad;
    BOOL _clearMode;
    UIImageView *_avatarView;
    UILabel *_nicknameLabel;
    UIButton *_followButton;
    id<IESLiveInteractUserModel> _userModel;
    long long _followStatus;
    UIImageView *_closeMicIconView;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL clearMode;
@property (retain, nonatomic) UIImageView *closeMicIconView;

- (long long)followStatus;
- (void)setIsFirstLoad:(BOOL)arg0;
- (void)setFollowStatus:(long long)arg0;
- (id)followButton;
- (void)setFollowButton:(id)arg0;
- (void)updateWithFollowStatus:(long long)arg0;
- (BOOL)isOptimizedPad;
- (id)initWithDIContext:(id)arg0 clearMode:(BOOL)arg1;
- (void)updateIsMute:(BOOL)arg0;
- (id)closeMicIconView;
- (void)iPadWithFollow:(BOOL)arg0;
- (void)twoPeopleWithFollow:(BOOL)arg0;
- (void)multiPeopleWithFollow:(BOOL)arg0;
- (BOOL)clearMode;
- (void)tapFollowButtton;
- (void)setClearMode:(BOOL)arg0;
- (void)setCloseMicIconView:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)updateUserInfo:(id)arg0;
- (BOOL)isFirstLoad;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;
- (void)layoutUI;

@end
