//
//     Generated by private class-dump
//

@class UILabel, NSAttributedString;

@interface HTSLiveScorllLabelView : UIView {
    BOOL _enableAnimation;
    BOOL _shouldRepeat;
    BOOL _triggerRoundBlockInsteadRepeat;
    BOOL _showAlphaBorderMask;
    BOOL _fixRepeatStartAnimation;
    BOOL _waitingForLayout;
    double _speed;
    long long _scorllLabelAlignMode;
    NSAttributedString *_attributedContent;
    id /* block */ _animationFinishOneRoundBlock;
    UILabel *_frontLabel;
    UILabel *_backLabel;
    struct CGSize { double width; double height; } _contentSize;
}

@property (retain, nonatomic) UILabel *frontLabel;
@property (retain, nonatomic) UILabel *backLabel;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL waitingForLayout;
@property (nonatomic) double speed;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) long long scorllLabelAlignMode;
@property (nonatomic) BOOL shouldRepeat;
@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (nonatomic) BOOL triggerRoundBlockInsteadRepeat;
@property (nonatomic) BOOL showAlphaBorderMask;
@property (copy, nonatomic) id /* block */ animationFinishOneRoundBlock;
@property (nonatomic) BOOL fixRepeatStartAnimation;

- (id)attributedContent;
- (void)setAttributedContent:(id)arg0;
- (id)backLabel;
- (void)setBackLabel:(id)arg0;
- (id)frontLabel;
- (void)setFrontLabel:(id)arg0;
- (void)renderUI;
- (void)setScorllLabelAlignMode:(long long)arg0;
- (void)setFixRepeatStartAnimation:(BOOL)arg0;
- (BOOL)showAlphaBorderMask;
- (BOOL)waitingForLayout;
- (void)setWaitingForLayout:(BOOL)arg0;
- (long long)scorllLabelAlignMode;
- (BOOL)triggerRoundBlockInsteadRepeat;
- (BOOL)fixRepeatStartAnimation;
- (id /* block */)animationFinishOneRoundBlock;
- (void)setTriggerRoundBlockInsteadRepeat:(BOOL)arg0;
- (void)setShowAlphaBorderMask:(BOOL)arg0;
- (void)setAnimationFinishOneRoundBlock:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)init;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setSpeed:(double)arg0;
- (BOOL)enableAnimation;
- (void)layoutSubviews;
- (void)startAnimation;
- (double)speed;
- (void)setEnableAnimation:(BOOL)arg0;
- (void)stopAnimation;
- (id)initWithContent:(id)arg0;
- (void)resetLayout;
- (void)setShouldRepeat:(BOOL)arg0;
- (BOOL)shouldRepeat;

@end