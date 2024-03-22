//
//     Generated by private class-dump
//

@class AWEButton, UIView;

@interface AWEPublishPrivacyToNormalTableViewCell : UITableViewCell {
    id /* block */ _toNormalButtonActionBlock;
    UIView *_containerView;
    AWEButton *_toNormalButton;
    UIView *_lineView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEButton *toNormalButton;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ toNormalButtonActionBlock;

+ (id)identifier;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setToNormalButtonActionBlock:(id /* block */)arg0;
- (id)toNormalButton;
- (void)toNormalButtonAction:(id)arg0;
- (id /* block */)toNormalButtonActionBlock;
- (void)setToNormalButton:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;

@end