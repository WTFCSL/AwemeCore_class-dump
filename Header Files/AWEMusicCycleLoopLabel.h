//
//     Generated by private class-dump
//

@class UIColor, BNGradientCoverView, CADisplayLink, UIFont, UILabel, UIView, NSString;
@protocol AWEMusicCycleLoopLabelDelegate;

@interface AWEMusicCycleLoopLabel : UIView {
    BOOL _isSuspendLoop;
    BOOL _shouldCirculate;
    BOOL _isLoopable;
    BOOL _isLooping;
    double _speed;
    double _space;
    double _gradientRight;
    double _gradientLeft;
    id<AWEMusicCycleLoopLabelDelegate> _delegate;
    double _progress;
    double _labelWidth;
    double _lastTime;
    CADisplayLink *_displayLink;
    UILabel *_mainLabel;
    UILabel *_cycleLabel;
    UIView *_containerView;
    BNGradientCoverView *_coverView;
}

@property (nonatomic) BOOL isLoopable;
@property (nonatomic) BOOL isLooping;
@property (nonatomic) double progress;
@property (nonatomic) double labelWidth;
@property (nonatomic) double lastTime;
@property (retain) CADisplayLink *displayLink;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *cycleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BNGradientCoverView *coverView;
@property (nonatomic) BOOL isSuspendLoop;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long numberOfLines;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double speed;
@property (nonatomic) double space;
@property (nonatomic) double gradientRight;
@property (nonatomic) double gradientLeft;
@property (nonatomic) BOOL shouldCirculate;
@property (weak, nonatomic) id<AWEMusicCycleLoopLabelDelegate> delegate;

- (double)gradientLeft;
- (void)setGradientLeft:(double)arg0;
- (double)gradientRight;
- (void)setGradientRight:(double)arg0;
- (BOOL)isSuspendLoop;
- (void)setIsSuspendLoop:(BOOL)arg0;
- (void)startLoop;
- (void)pauseLoop;
- (void)stopLoop;
- (void)clearLoop;
- (void)resetLoop;
- (void)onDisplayLink;
- (void)setCycleLabel:(id)arg0;
- (id)cycleLabel;
- (BOOL)isLoopable;
- (void)buildDisplayLink;
- (void)setIsLoopable:(BOOL)arg0;
- (BOOL)shouldCirculate;
- (void)setShouldCirculate:(BOOL)arg0;
- (void)setShadowOffset:(struct CGSize { double x0; double x1; })arg0;
- (void)setDisplayLink:(id)arg0;
- (void)setLastTime:(double)arg0;
- (struct CGSize { double x0; double x1; })shadowOffset;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)shadowColor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setShadowColor:(id)arg0;
- (void)setContainerView:(id)arg0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSpeed:(double)arg0;
- (id)delegate;
- (id)font;
- (long long)numberOfLines;
- (double)lastTime;
- (id)containerView;
- (id)displayLink;
- (double)progress;
- (id)text;
- (void)setNumberOfLines:(long long)arg0;
- (void)setFont:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isLooping;
- (void)setTextColor:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setProgress:(double)arg0;
- (double)speed;
- (id)textColor;
- (double)space;
- (double)labelWidth;
- (void)setLabelWidth:(double)arg0;
- (id)mainLabel;
- (void)setMainLabel:(id)arg0;
- (void)setIsLooping:(BOOL)arg0;
- (void)setSpace:(double)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
