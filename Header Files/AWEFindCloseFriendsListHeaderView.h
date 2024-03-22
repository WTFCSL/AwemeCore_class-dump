//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEFindCloseFriendsListHeaderView : UICollectionReusableView {
    NSString *_enterMethod;
    UILabel *_closeFriendsHintLabel;
    UIButton *_closeFriendsHintButton;
    UIButton *_closeFriendsHintArrowButton;
    UIView *_closeFriendsHintView;
    UIImageView *_inviteViaWechatIcon;
    UILabel *_inviteViaWechatLabel;
    UIButton *_inviteViaWechatButton;
    UIView *_inviteViaWechatView;
}

@property (retain, nonatomic) UILabel *closeFriendsHintLabel;
@property (retain, nonatomic) UIButton *closeFriendsHintButton;
@property (retain, nonatomic) UIButton *closeFriendsHintArrowButton;
@property (retain, nonatomic) UIView *closeFriendsHintView;
@property (retain, nonatomic) UIImageView *inviteViaWechatIcon;
@property (retain, nonatomic) UILabel *inviteViaWechatLabel;
@property (retain, nonatomic) UIButton *inviteViaWechatButton;
@property (retain, nonatomic) UIView *inviteViaWechatView;
@property (copy, nonatomic) NSString *enterMethod;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)closeFriendsHintView;
- (id)closeFriendsHintLabel;
- (id)closeFriendsHintButton;
- (id)closeFriendsHintArrowButton;
- (id)inviteViaWechatView;
- (id)inviteViaWechatIcon;
- (id)inviteViaWechatLabel;
- (id)inviteViaWechatButton;
- (void)closeFriendsHintButtonTapped;
- (void)inviteViaWechatButtonTapped;
- (void)setCloseFriendsHintLabel:(id)arg0;
- (void)setCloseFriendsHintButton:(id)arg0;
- (void)setCloseFriendsHintArrowButton:(id)arg0;
- (void)setCloseFriendsHintView:(id)arg0;
- (void)setInviteViaWechatIcon:(id)arg0;
- (void)setInviteViaWechatLabel:(id)arg0;
- (void)setInviteViaWechatButton:(id)arg0;
- (void)setInviteViaWechatView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
