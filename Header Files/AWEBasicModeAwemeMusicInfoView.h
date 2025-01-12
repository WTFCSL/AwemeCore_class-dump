//
//     Generated by private class-dump
//

@class CAGradientLayer, NSString, UIImageView, AWEAwemeModel, UIView;

@interface AWEBasicModeAwemeMusicInfoView : UIView {
    UIImageView *_musicLogoView;
    NSString *_musicLoopString;
    AWEAwemeModel *_awemeModel;
    UIView *_containerView;
    UIView *_loopContainerView;
    UIView *_musicContainerView;
    CAGradientLayer *_gradientLayer;
    double _containerViewWidth;
    double _containerViewHeight;
    double _subviewWidth;
    long long _subviewCount;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *loopContainerView;
@property (retain, nonatomic) UIView *musicContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double containerViewWidth;
@property (nonatomic) double containerViewHeight;
@property (nonatomic) double subviewWidth;
@property (nonatomic) long long subviewCount;
@property (retain, nonatomic) UIImageView *musicLogoView;
@property (copy, nonatomic) NSString *musicLoopString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (double)containerViewHeight;
- (id)musicLoopString;
- (void)setContainerViewWidth:(double)arg0;
- (void)setContainerViewHeight:(double)arg0;
- (double)widthWithLabelString:(id)arg0;
- (void)setSubviewWidth:(double)arg0;
- (double)containerViewWidth;
- (double)subviewWidth;
- (void)setSubviewCount:(long long)arg0;
- (id)musicLogoView;
- (id)musicContainerView;
- (long long)subviewCount;
- (id)loopContainerView;
- (void)setMusicLoopString:(id)arg0;
- (id)subviewItemWithLabelString:(id)arg0;
- (void)configRollingAnimationWithLabelString:(id)arg0 awemeModel:(id)arg1;
- (void)setMusicLogoView:(id)arg0;
- (void)setLoopContainerView:(id)arg0;
- (void)setMusicContainerView:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)pauseAnimation;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)resumeAnimation;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setGradientLayer:(id)arg0;

@end
