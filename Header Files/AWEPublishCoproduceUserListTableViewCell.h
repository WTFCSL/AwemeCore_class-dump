//
//     Generated by private class-dump
//

@class UIImageView, AWECoProduceUserModel, UILabel, UIButton;

@interface AWEPublishCoproduceUserListTableViewCell : UITableViewCell {
    AWECoProduceUserModel *_coProduceUserModel;
    id /* block */ _closeButtonClickBlock;
    id /* block */ _changeIdentifyButtonClickBlock;
    UIImageView *_iconImageView;
    UILabel *_nickNameLabel;
    UILabel *_coProduceDescLabel;
    UIButton *_changeButton;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *coProduceDescLabel;
@property (retain, nonatomic) UIButton *changeButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWECoProduceUserModel *coProduceUserModel;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;
@property (copy, nonatomic) id /* block */ changeIdentifyButtonClickBlock;

+ (id)identifier;
+ (double)cellHeight;

- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setCloseButtonClickBlock:(id /* block */)arg0;
- (id /* block */)closeButtonClickBlock;
- (void)configCellWithUser:(id)arg0;
- (id)coProduceDescLabel;
- (void)configCellWithUser:(id)arg0 canEdit:(BOOL)arg1;
- (void)setCoProduceUserModel:(id)arg0;
- (id)coProduceUserModel;
- (void)disableAndGrey:(BOOL)arg0;
- (void)disableAndHide:(BOOL)arg0;
- (id /* block */)changeIdentifyButtonClickBlock;
- (void)changeButtonTap;
- (void)closeButtonTap;
- (void)updateCoProduceRole:(id)arg0;
- (id)getCoProduceIdentify;
- (void)setChangeIdentifyButtonClickBlock:(id /* block */)arg0;
- (void)setCoProduceDescLabel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)changeButton;
- (void)setChangeButton:(id)arg0;

@end
