//
//     Generated by private class-dump
//

@class UILabel, UIImageView, NSString;

@interface CJProtocolListCell : UITableViewCell {
    NSString *_title;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) NSString *title;

- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)title;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
