//
//     Generated by private class-dump
//

@class UIImageView, AWEButton, AWEUserNameLabel, AWEUserModel;
@protocol AWECommentSearchCellDelegate;

@interface AWECommentSearchCell : UITableViewCell {
    id<AWECommentSearchCellDelegate> _delegate;
    UIImageView *_avatarImageView;
    UIImageView *_verifyBadgeView;
    AWEUserNameLabel *_nameLabel;
    AWEButton *_messageBtn;
    AWEUserModel *_user;
}

@property (weak, nonatomic) id<AWECommentSearchCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifyBadgeView;
@property (retain, nonatomic) AWEUserNameLabel *nameLabel;
@property (retain, nonatomic) AWEButton *messageBtn;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)defaultAvatarImage;
+ (id)identifier;

- (id)verifyBadgeView;
- (id)messageBtn;
- (void)p_sendMessageToUser;
- (void)configWithUser:(id)arg0 isDefaultSearch:(BOOL)arg1 currentInputText:(id)arg2;
- (void)setVerifyBadgeView:(id)arg0;
- (void)setMessageBtn:(id)arg0;
- (void)setUser:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)user;
- (void).cxx_destruct;
- (id)delegate;
- (id)nameLabel;
- (void)setDelegate:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)p_init;

@end