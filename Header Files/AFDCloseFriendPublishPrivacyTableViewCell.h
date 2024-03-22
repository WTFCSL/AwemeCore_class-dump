//
//     Generated by private class-dump
//

@class UIImageView, AFDCloseFriendsPrivacyOptionModel, UILabel, UIView;

@interface AFDCloseFriendPublishPrivacyTableViewCell : UITableViewCell {
    UIView *_lineView;
    UIImageView *_iconImageView;
    UIView *_labelContainerView;
    UILabel *_titleLabel;
    UILabel *_relationLabel;
    UIImageView *_relationArrowView;
    UIImageView *_selectImageView;
    AFDCloseFriendsPrivacyOptionModel *_currentModel;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIImageView *relationArrowView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) AFDCloseFriendsPrivacyOptionModel *currentModel;
@property (retain, nonatomic) UIView *lineView;

+ (id)reuseIdentifier;

- (id)relationLabel;
- (void)setRelationLabel:(id)arg0;
- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (void)updateSelected:(BOOL)arg0;
- (id)relationArrowView;
- (void)relationLabelClicked;
- (void)updateWithPrivacyOptionModel:(id)arg0;
- (void)setRelationArrowView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)labelContainerView;
- (void)setLabelContainerView:(id)arg0;

@end