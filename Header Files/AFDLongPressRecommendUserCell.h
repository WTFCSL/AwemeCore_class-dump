//
//     Generated by private class-dump
//

@class AWEUserModel, AFDHalfScreenRecommendContext, UIImageView, NSString, UILabel, UIView, AWEUserRecommendButton;
@protocol AFDLongPressRecommendUserCellDelegate;

@interface AFDLongPressRecommendUserCell : UITableViewCell <AWEUserMessage> {
    BOOL _hideRemoveBtn;
    AWEUserModel *_user;
    long long _userType;
    AFDHalfScreenRecommendContext *_context;
    long long _position;
    id<AFDLongPressRecommendUserCellDelegate> _delegate;
    UIView *_containerView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    AWEUserRecommendButton *_shareBtn;
    AWEUserRecommendButton *_removeBtn;
    AWEUserRecommendButton *_followBtn;
    UIView *_lineView;
    long long _buttonStatus;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEUserRecommendButton *shareBtn;
@property (retain, nonatomic) AWEUserRecommendButton *removeBtn;
@property (retain, nonatomic) AWEUserRecommendButton *followBtn;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) long long buttonStatus;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long userType;
@property (retain, nonatomic) AFDHalfScreenRecommendContext *context;
@property (nonatomic) long long position;
@property (weak, nonatomic) id<AFDLongPressRecommendUserCellDelegate> delegate;
@property (nonatomic) BOOL hideRemoveBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)suggestHeight;
+ (id)identifier;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (void)configWithUser:(id)arg0;
- (void)p_setupUI;
- (id)shareBtn;
- (void)setShareBtn:(id)arg0;
- (long long)buttonStatus;
- (void)setButtonStatus:(long long)arg0;
- (id)followBtn;
- (void)didTapFollowBtn;
- (void)setFollowBtn:(id)arg0;
- (id)removeBtn;
- (void)didTapRemoveBtn;
- (BOOL)hideRemoveBtn;
- (void)setRemoveBtn:(id)arg0;
- (void)updateWithPosition:(long long)arg0;
- (void)setHideRemoveBtn:(BOOL)arg0;
- (BOOL)shouldShowSendMessageAfterShare;
- (void)p_setButtonStautsWithFollowStatus:(long long)arg0 followerStauts:(long long)arg1;
- (void)didTapShareBtn;
- (void)p_shareAweme;
- (BOOL)canShareTitle;
- (id)p_cutAwemeDesciptionWithTextExtra:(id)arg0;
- (void)setUser:(id)arg0;
- (long long)userType;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)user;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (long long)position;
- (void)setPosition:(long long)arg0;
- (void)setContainerView:(id)arg0;
- (id)displayName;
- (id)delegate;
- (id)containerView;
- (id)context;
- (id)nameLabel;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setNameLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setUserType:(long long)arg0;

@end
