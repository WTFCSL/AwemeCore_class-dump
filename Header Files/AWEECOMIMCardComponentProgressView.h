//
//     Generated by private class-dump
//

@class UIControl, UIStackView, UIImageView, NSString, UIView, UILabel, BDPCDDynamicCardDashedLineView;
@protocol AWEECOMIMCardComponentProgressViewProtocol;

@interface AWEECOMIMCardComponentProgressView : UIView {
    UIControl *_tapControl;
    UIImageView *_iconView;
    BDPCDDynamicCardDashedLineView *_dashLine;
    UIStackView *_stackView;
    UIView *_titleView;
    UILabel *_titleLabel;
    UILabel *_distinctLabel;
    UILabel *_descLabel;
    UILabel *_timeLabel;
    NSString *_progressUrl;
    id<AWEECOMIMCardComponentProgressViewProtocol> _data;
}

@property (retain, nonatomic) UIControl *tapControl;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) BDPCDDynamicCardDashedLineView *dashLine;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *distinctLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (copy, nonatomic) NSString *progressUrl;
@property (retain, nonatomic) id<AWEECOMIMCardComponentProgressViewProtocol> data;
@property (nonatomic) unsigned long long descLineNumber;

+ (double)designHeightWithDescLineNum:(unsigned long long)arg0;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)progressUrl;
- (id)distinctLabel;
- (void)setProgressUrl:(id)arg0;
- (void)setDescLineNumber:(unsigned long long)arg0;
- (unsigned long long)descLineNumber;
- (id)tapControl;
- (void)setTapControl:(id)arg0;
- (id)dashLine;
- (void)setDashLine:(id)arg0;
- (void)setDistinctLabel:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (id)iconView;
- (void)setData:(id)arg0;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (void)setTitleView:(id)arg0;
- (id)stackView;
- (void)updateWithData:(id)arg0;
- (void)setStackView:(id)arg0;
- (void)onTap;
- (void)setTitleLabel:(id)arg0;
- (id)timeLabel;
- (id)titleView;

@end
