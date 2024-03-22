//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, AWEUserModel;

@interface AWEPublishCoproduceSearchTableViewCell : UITableViewCell {
    BOOL _hasSelected;
    BOOL _selectAble;
    AWEUserModel *_userModel;
    UIImageView *_iconImageView;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    UIView *_userInfoView;
    UILabel *_followerCountLabel;
    UILabel *_verifyInfoLabel;
    UIImageView *_verifyInfoIcon;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UILabel *followerCountLabel;
@property (retain, nonatomic) UILabel *verifyInfoLabel;
@property (retain, nonatomic) UIImageView *verifyInfoIcon;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) BOOL selectAble;
@property (retain, nonatomic) AWEUserModel *userModel;

+ (id)identifier;
+ (double)cellHeight;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setUserInfoView:(id)arg0;
- (id)followerCountLabel;
- (void)setFollowerCountLabel:(id)arg0;
- (id)verifyInfoIcon;
- (id)verifyInfoLabel;
- (void)updateNameTextWithModel:(id)arg0;
- (void)updateFollowerLabelTextWithModel:(id)arg0;
- (void)updateVerifyTextWithModel:(id)arg0;
- (void)updateVerifyIconWithModel:(id)arg0;
- (void)setSelectAble:(BOOL)arg0;
- (void)configCellWithUser:(id)arg0;
- (BOOL)selectAble;
- (void)setVerifyInfoLabel:(id)arg0;
- (void)setVerifyInfoIcon:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)prepareForReuse;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (BOOL)hasSelected;
- (void)setupUI;
- (id)userInfoView;
- (void)setHasSelected:(BOOL)arg0;

@end