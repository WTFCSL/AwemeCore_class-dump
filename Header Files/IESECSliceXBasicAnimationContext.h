//
//     Generated by private class-dump
//

@class UIView;
@protocol IESECSliceXElementView;

@interface IESECSliceXBasicAnimationContext : NSObject {
    long long _state;
    UIView<IESECSliceXElementView> *_animatingElementView;
    double _beginTime;
}

@property (nonatomic) long long state;
@property (weak, nonatomic) UIView<IESECSliceXElementView> *animatingElementView;
@property (nonatomic) double beginTime;

- (id)animatingElementView;
- (void)setAnimatingElementView:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (void)setBeginTime:(double)arg0;
- (double)beginTime;

@end