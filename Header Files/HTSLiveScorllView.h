//
//     Generated by private class-dump
//

@class UIView;

@interface HTSLiveScorllView : UIView {
    BOOL _enableAnimation;
    BOOL _shouldRepeat;
    BOOL _waitingForLayout;
    id /* block */ _createViewBlock;
    double _speed;
    long long _scorllViewAlignMode;
    UIView *_frontView;
    UIView *_backView;
}

@property (retain, nonatomic) UIView *frontView;
@property (retain, nonatomic) UIView *backView;
@property (nonatomic) BOOL waitingForLayout;
@property (copy, nonatomic) id /* block */ createViewBlock;
@property (nonatomic) double speed;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) long long scorllViewAlignMode;
@property (nonatomic) BOOL shouldRepeat;

- (void)setFrontView:(id)arg0;
- (void)loadUI;
- (BOOL)waitingForLayout;
- (void)setWaitingForLayout:(BOOL)arg0;
- (void)setCreateViewBlock:(id /* block */)arg0;
- (id /* block */)createViewBlock;
- (long long)scorllViewAlignMode;
- (void)setScorllViewAlignMode:(long long)arg0;
- (void)setBackView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSpeed:(double)arg0;
- (id)backView;
- (BOOL)enableAnimation;
- (void)layoutSubviews;
- (void)startAnimation;
- (id)initWithCreateViewBlock:(id /* block */)arg0;
- (double)speed;
- (void)setEnableAnimation:(BOOL)arg0;
- (void)stopAnimation;
- (id)frontView;
- (void)resetLayout;
- (void)setShouldRepeat:(BOOL)arg0;
- (BOOL)shouldRepeat;

@end