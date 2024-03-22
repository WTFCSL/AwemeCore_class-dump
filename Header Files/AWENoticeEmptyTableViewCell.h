//
//     Generated by private class-dump
//

@class UILabel;

@interface AWENoticeEmptyTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)p_setupUI;
- (void)configTitle:(id)arg0 detail:(id)arg1;
- (id)accessibilityLabel;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg0;

@end