//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;

@interface DYVCDAccountManagementTableCell : UITableViewCell {
    UIImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UIImageView *_appIconImageView;
    UILabel *_appNameLabel;
    UIImageView *_checkMarkImageView;
    UIView *_accountCardView;
    UIButton *_deleteButton;
    id /* block */ _deleteActionBlock;
    unsigned long long _cellState;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *appIconImageView;
@property (retain, nonatomic) UILabel *appNameLabel;
@property (retain, nonatomic) UIImageView *checkMarkImageView;
@property (retain, nonatomic) UIView *accountCardView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) id /* block */ deleteActionBlock;
@property (nonatomic) unsigned long long cellState;

+ (id)identifier;

- (void)setAppIconImageView:(id)arg0;
- (id)appIconImageView;
- (id)accountCardView;
- (void)setAccountCardView:(id)arg0;
- (void)setDeleteActionBlock:(id /* block */)arg0;
- (id /* block */)deleteActionBlock;
- (void)deleteAction:(id)arg0;
- (void)resetConstraint:(BOOL)arg0;
- (void)updateWithCellModel:(id)arg0 showAppIcon:(BOOL)arg1 cellState:(unsigned long long)arg2 deleteAction:(id /* block */)arg3;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (id)deleteButton;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)checkMarkImageView;
- (void)setCheckMarkImageView:(id)arg0;
- (unsigned long long)cellState;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;
- (void)setCellState:(unsigned long long)arg0;

@end
