//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface DUXLoadingBarView : UIView <DUXLoadingViewProtocol, DUXProgressViewProtocol> {
    BOOL _isAnimating;
    long long _type;
    UIView *_bottomView;
    UIView *_animationView;
    double _barWidth;
    double _progress;
}

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) double barWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getProgress;
- (void)updateProgress:(double)arg0 inDuration:(double)arg1;
- (void)stopLoadingAnimated:(BOOL)arg0;
- (id)initWithWidth:(double)arg0 andType:(long long)arg1;
- (void)stopLoading;
- (BOOL)isAnimating;
- (id)init;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithWidth:(double)arg0;
- (long long)type;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;
- (void)resetProgress;
- (void)setBarWidth:(double)arg0;
- (double)progress;
- (double)barWidth;
- (void)setProgress:(double)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (id)bottomView;
- (void)setBottomView:(id)arg0;
- (void)updateProgress:(double)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end
