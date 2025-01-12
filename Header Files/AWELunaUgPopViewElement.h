//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIImage;

@interface AWELunaUgPopViewElement : UIView {
    UIImageView *_iconImageView;
    UILabel *_countLabel;
    UIImage *_iconImage;
    long long *_count;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) long long *count;

- (void)updateCount:(id)arg0;
- (void)updateWithIcon:(id)arg0 count:(id)arg1;
- (id)initWithIcon:(id)arg0 count:(id)arg1;
- (void)setCount:(long long *)arg0;
- (id)iconImage;
- (void).cxx_destruct;
- (long long *)count;
- (void)updateTintColor:(id)arg0;
- (id)iconImageView;
- (void)setIconImage:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (void)setUpUI;

@end
