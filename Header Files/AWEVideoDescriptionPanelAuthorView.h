//
//     Generated by private class-dump
//

@class AWEVideoDescriptionPanelHeaderView, NSString, UIImageView, DUXButton, UILabel, AWEUserModel, AWEAwemeModel;

@interface AWEVideoDescriptionPanelAuthorView : UIView <AWEUserMessage, AWEGuestModeMessage> {
    BOOL _isFollowAnimating;
    BOOL _followBtnHasClicked;
    NSString *_enterFrom;
    AWEVideoDescriptionPanelHeaderView *_headView;
    AWEUserModel *_user;
    UIImageView *_avatarView;
    UILabel *_userNameLabel;
    DUXButton *_followBtn;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) DUXButton *followBtn;
@property (nonatomic) BOOL isFollowAnimating;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL followBtnHasClicked;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) AWEVideoDescriptionPanelHeaderView *headView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)updateAvatarView;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (void)followBtnClicked;
- (BOOL)isFollowAnimating;
- (void)setIsFollowAnimating:(BOOL)arg0;
- (void)updateFollowBtn;
- (id)followBtn;
- (void)setFollowBtn:(id)arg0;
- (void)changeToUnfollowStatus:(long long)arg0 userID:(id)arg1;
- (void)updateUserName;
- (void)setHeadView:(id)arg0;
- (id)headView;
- (void)guestDidFinishFollowUser:(id)arg0 isUnfollow:(BOOL)arg1;
- (void)setFollowBtnHasClicked:(BOOL)arg0;
- (void)unfollowAction;
- (void)followAction;
- (id)getUnfollowRelationContext;
- (id)getFollowRalationContext;
- (BOOL)followBtnHasClicked;
- (void)trackConcernAction:(BOOL)arg0;
- (void)authorInfoClickedByHead:(id)arg0;
- (void)authorInfoClickedByName:(id)arg0;
- (void)setUser:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (id)user;
- (void).cxx_destruct;
- (id)model;
- (void)dealloc;
- (id)authorName;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;

@end
