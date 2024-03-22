//
//     Generated by private class-dump
//

@class AWEIronManLandingPageCommonItemModel, UIImageView, UIView, UILabel, NSMutableArray;

@interface AWEIronManLandingPageRecentListCellTableViewCell : UITableViewCell {
    AWEIronManLandingPageCommonItemModel *_model;
    UIView *_bgView;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIView *_tipsView;
    NSMutableArray *_tipLabelArr;
}

@property (retain, nonatomic) AWEIronManLandingPageCommonItemModel *model;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) NSMutableArray *tipLabelArr;

- (void)awe_themeDidChange:(long long)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (void)updateContentWithModel:(id)arg0;
- (void)updateTips:(id)arg0;
- (void)themeUIUpdate;
- (id)buildTipLabel;
- (id)tipLabelArr;
- (void)setTipLabelArr:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)iconView;
- (id)model;
- (void)setIconView:(id)arg0;
- (id)nameLabel;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setUpUI;

@end