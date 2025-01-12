//
//     Generated by private class-dump
//

@class IESLivePKScoreBarConfig, UIView;

@interface IESLiveRevenueInteractShareScoreBar : UIView {
    double _ratio;
    long long _leftNum;
    long long _rightNum;
    UIView *_contentView;
    UIView *_leftNumView;
    UIView *_rightNumView;
    IESLivePKScoreBarConfig *_config;
}

@property (nonatomic) double ratio;
@property (nonatomic) long long leftNum;
@property (nonatomic) long long rightNum;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *leftNumView;
@property (retain, nonatomic) UIView *rightNumView;
@property (retain, nonatomic) IESLivePKScoreBarConfig *config;

- (void)setLeftScore:(long long)arg0;
- (void)setRightScore:(long long)arg0;
- (void)initSubviews;
- (id)initWithDIContext:(id)arg0 config:(id)arg1;
- (long long)leftNum;
- (long long)rightNum;
- (void)updateScoreView;
- (id)leftNumView;
- (id)rightNumView;
- (void)setLeftNum:(long long)arg0;
- (void)setRightNum:(long long)arg0;
- (void)setLeftNumView:(id)arg0;
- (void)setRightNumView:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)contentView;
- (void)layoutSubviews;
- (void)setContentView:(id)arg0;
- (double)ratio;
- (void)setRatio:(double)arg0;

@end
