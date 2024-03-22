//
//     Generated by private class-dump
//

@class UIColor, AWEButton, UIView, NSNumber;

@interface AWEGoodsCouponView : UIView {
    NSNumber *_couponHeight;
    AWEButton *_tipView;
    AWEButton *_titleView;
    UIColor *_couponBGColor;
    UIColor *_couponBorderColor;
    UIView *_seperatorView;
}

@property (retain, nonatomic) UIColor *couponBGColor;
@property (retain, nonatomic) UIColor *couponBorderColor;
@property (retain, nonatomic) AWEButton *tipView;
@property (retain, nonatomic) AWEButton *titleView;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) NSNumber *couponHeight;

- (void)setCouponTitle:(id)arg0;
- (void)setCouponBGColor:(id)arg0;
- (void)setCouponTip:(id)arg0;
- (id)couponHeight;
- (void)setCouponHeight:(id)arg0;
- (id)couponBGColor;
- (id)couponBorderColor;
- (void)setCouponBorderColor:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setTitleView:(id)arg0;
- (void)layoutSubviews;
- (id)titleView;
- (void)setupUI;
- (void)updateUI;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;

@end
