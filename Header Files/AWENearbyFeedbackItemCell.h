//
//     Generated by private class-dump
//

@class UIImageView, UILabel, CAShapeLayer;

@interface AWENearbyFeedbackItemCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    CAShapeLayer *_contentShapeLayer;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAShapeLayer *contentShapeLayer;

- (void)configWithItem:(id)arg0;
- (id)contentShapeLayer;
- (void)setContentShapeLayer:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;

@end
