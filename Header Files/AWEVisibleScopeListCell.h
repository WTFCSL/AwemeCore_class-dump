//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, MASConstraint;

@interface AWEVisibleScopeListCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_selectImageView;
    UILabel *_relationLabel;
    UIView *_relationView;
    MASConstraint *_titleTopConstraint;
    MASConstraint *_titleCenterConstraint;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIView *relationView;
@property (retain, nonatomic) MASConstraint *titleTopConstraint;
@property (retain, nonatomic) MASConstraint *titleCenterConstraint;

+ (id)identifier;
+ (double)cellHeight;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)relationLabel;
- (void)setRelationLabel:(id)arg0;
- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (void)updateSelected:(BOOL)arg0;
- (id)relationView;
- (void)setRelationView:(id)arg0;
- (void)configUserForSearching:(id)arg0 isSelected:(BOOL)arg1;
- (void)configUser:(id)arg0 isSelected:(BOOL)arg1;
- (void)setDisableStyle;
- (id)relationForAwemeUser:(id)arg0;
- (void)pr_configCellTitle:(id)arg0 desc:(id)arg1 relation:(id)arg2 isSelected:(BOOL)arg3;
- (void)setTitleTopConstraint:(id)arg0;
- (void)setTitleCenterConstraint:(id)arg0;
- (id)titleTopConstraint;
- (id)titleCenterConstraint;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;

@end