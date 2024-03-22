//
//     Generated by private class-dump
//

@class AWEPublishVideoSyncContentViewItem, UIImageView, UISwitch, UILabel, UIView, UIButton;

@interface AWEPublishVideoSyncContentVCTabelViewCell : UITableViewCell {
    id /* block */ _onChangeBlock;
    id /* block */ _clickTipBlock;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UISwitch *_switcher;
    UIButton *_tipButton;
    UIView *_lineView;
    UILabel *_subTitleLabel;
    AWEPublishVideoSyncContentViewItem *_item;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *switcher;
@property (retain, nonatomic) UIButton *tipButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *item;
@property (copy, nonatomic) id /* block */ onChangeBlock;
@property (copy, nonatomic) id /* block */ clickTipBlock;

- (void)hideBottomLine;
- (id)switcher;
- (void)setSwitcher:(id)arg0;
- (void)onCellClicked;
- (void)onSwitcherToggled:(id)arg0;
- (id)tipButton;
- (void)setTipButton:(id)arg0;
- (void)tipButtonTapped:(id)arg0;
- (void)updateViewWithBanMode:(BOOL)arg0;
- (id /* block */)clickTipBlock;
- (id /* block */)onChangeBlock;
- (void)setOnChangeBlock:(id /* block */)arg0;
- (void)setClickTipBlock:(id /* block */)arg0;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupViews;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
