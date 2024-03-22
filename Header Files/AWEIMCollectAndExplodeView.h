//
//     Generated by private class-dump
//

@class UIImageView;

@interface AWEIMCollectAndExplodeView : UIView {
    double _maxScale;
    unsigned long long _explodeTrigerCount;
    double _explodelifetime;
    long long _trigerCount;
    id /* block */ _endCollectBlock;
    id /* block */ _explodeCompletion;
    long long _animationsCount;
    UIImageView *_centerImageView;
    long long _explodingCount;
    struct CGSize { double width; double height; } _explodeSize;
}

@property (nonatomic) long long trigerCount;
@property (nonatomic) long long animationsCount;
@property (weak, nonatomic) UIImageView *centerImageView;
@property (nonatomic) long long explodingCount;
@property (nonatomic) double maxScale;
@property (nonatomic) unsigned long long explodeTrigerCount;
@property (nonatomic) struct CGSize { double width; double height; } explodeSize;
@property (nonatomic) double explodelifetime;
@property (copy, nonatomic) id /* block */ endCollectBlock;
@property (copy, nonatomic) id /* block */ explodeCompletion;

- (void)setExplodeCompletion:(id /* block */)arg0;
- (unsigned long long)explodeTrigerCount;
- (void)performAnimationFromView:(id)arg0 image:(id)arg1 centerAvatarView:(id)arg2;
- (long long)trigerCount;
- (void)setTrigerCount:(long long)arg0;
- (long long)animationsCount;
- (void)setAnimationsCount:(long long)arg0;
- (void)explodeWithCenterImageView:(id)arg0;
- (void)p_checkAllAnimationsEnd;
- (long long)explodingCount;
- (id /* block */)explodeCompletion;
- (void)setExplodingCount:(long long)arg0;
- (struct CGSize { double x0; double x1; })explodeSize;
- (double)explodelifetime;
- (void)triggerExplode;
- (void)setExplodeTrigerCount:(unsigned long long)arg0;
- (void)setExplodeSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setExplodelifetime:(double)arg0;
- (id /* block */)endCollectBlock;
- (void)setEndCollectBlock:(id /* block */)arg0;
- (double)maxScale;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMaxScale:(double)arg0;
- (id)centerImageView;
- (void)setCenterImageView:(id)arg0;

@end