//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWEConcernBellPushSettingPanelTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UIImageView *_checkIcon;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *checkIcon;

+ (id)identifier;
+ (double)cellHeight;

- (void)initViews;
- (void)configWithBellPushStrategy:(unsigned long long)arg0 type:(unsigned long long)arg1 isCheck:(BOOL)arg2;
- (id)titleForLabelWithBellPushStrategy:(unsigned long long)arg0 type:(unsigned long long)arg1;
- (void)setCheckIcon:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setTitleLabel:(id)arg0;
- (id)checkIcon;

@end