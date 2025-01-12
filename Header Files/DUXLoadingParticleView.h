//
//     Generated by private class-dump
//

@class LOTAnimationView, NSString;

@interface DUXLoadingParticleView : UIView <DUXLoadingViewProtocol> {
    BOOL _isAnimating;
    long long _style;
    double _progress;
    double _animationAlpha;
    LOTAnimationView *_animation;
}

@property (retain, nonatomic) LOTAnimationView *animation;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long style;
@property (nonatomic) double progress;
@property (nonatomic) double animationAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aDUXCommonAdapterClass;

- (void)stopLoadingWithHide:(BOOL)arg0;
- (id)aDUXCommonAdapter;
- (void)stopLoadingAnimated:(BOOL)arg0;
- (void)stopLoading;
- (BOOL)isAnimating;
- (long long)style;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg0;
- (id)animation;
- (void)startLoading;
- (void)setAnimation:(id)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)progress;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg0;
- (void)setProgress:(double)arg0;
- (void)setStyle:(long long)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setAnimationAlpha:(double)arg0;
- (double)animationAlpha;

@end
