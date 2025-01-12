//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface AWEVideoCoverRecommendTextErrorView : UIView {
    id /* block */ _didTapButtonBlock;
    UILabel *_titleLabel;
    UIButton *_button;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ didTapButtonBlock;

- (void)setupSubViews;
- (id /* block */)didTapButtonBlock;
- (id)initWithTitleText:(id)arg0 buttonText:(id)arg1;
- (void)setDidTapButtonBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;

@end
