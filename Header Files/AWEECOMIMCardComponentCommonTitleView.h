//
//     Generated by private class-dump
//

@class UILabel, AWEECOMIMCardCountdownLabel;
@protocol AWEECOMIMCardCountdownDelegate;

@interface AWEECOMIMCardComponentCommonTitleView : UIView {
    UILabel *_titleLabel;
    AWEECOMIMCardCountdownLabel *_countDownLabel;
    UILabel *_statusLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEECOMIMCardCountdownLabel *countDownLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (weak, nonatomic) id<AWEECOMIMCardCountdownDelegate> delegate;

+ (double)designHeight;
+ (id)cardTitleFont;
+ (double)cardTitleHeight;

- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)updateWithData:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;

@end
