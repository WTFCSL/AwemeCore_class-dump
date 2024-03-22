//
//     Generated by private class-dump
//

@class AWEPublishVideoSyncContentViewItem, UILabel, UIView, UIButton;

@interface AWEPublishVideoSyncContentVCXiguaCell : UITableViewCell {
    id /* block */ _clickTipBlock;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_tipButton;
    UIView *_lineView;
    AWEPublishVideoSyncContentViewItem *_item;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *tipButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *item;
@property (copy, nonatomic) id /* block */ clickTipBlock;

- (void)hideBottomLine;
- (id)tipButton;
- (void)setTipButton:(id)arg0;
- (void)tipButtonTapped:(id)arg0;
- (id /* block */)clickTipBlock;
- (void)setClickTipBlock:(id /* block */)arg0;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupViews;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end