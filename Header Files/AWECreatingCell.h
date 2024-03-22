//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWECreateInfoModel;

@interface AWECreatingCell : UITableViewCell {
    AWECreateInfoModel *_model;
    UIImageView *_iconImageView;
    UILabel *_fileNameLabel;
    UILabel *_creatingStatusLabel;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *fileNameLabel;
@property (retain, nonatomic) UILabel *creatingStatusLabel;
@property (retain, nonatomic) AWECreateInfoModel *model;

- (void)p_setupUI;
- (id)creatingStatusLabel;
- (void)setCreatingStatusLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)layoutSubviews;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)fileNameLabel;
- (void)setFileNameLabel:(id)arg0;

@end