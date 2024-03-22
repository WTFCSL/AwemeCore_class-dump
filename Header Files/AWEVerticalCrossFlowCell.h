//
//     Generated by private class-dump
//

@class UIImageView, AWEButton, UILabel, UIView;

@interface AWEVerticalCrossFlowCell : UITableViewCell {
    UIImageView *_iconImageView;
    AWEButton *_rightButton;
    UILabel *_titleLabel;
    UIView *_lineView;
    id /* block */ _rightButtonAction;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEButton *rightButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ rightButtonAction;

- (void)buildSubviews;
- (id /* block */)rightButtonAction;
- (void)setRightButtonAction:(id /* block */)arg0;
- (void)rightButtonTapped;
- (void)stayState;
- (id)rightButton;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)openState;
- (void)setIconImageView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end
