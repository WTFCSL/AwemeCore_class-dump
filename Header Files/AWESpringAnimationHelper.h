//
//     Generated by private class-dump
//

@class CADisplayLink;

@interface AWESpringAnimationHelper : NSObject {
    CADisplayLink *_displaylink;
    double _fromValue;
    double _fullValue;
    double _damping;
    long long _numberOfnum;
    long long _beginNum;
    id /* block */ _callbackValue;
    id /* block */ _completedBlock;
}

@property (retain, nonatomic) CADisplayLink *displaylink;
@property (nonatomic) double fromValue;
@property (nonatomic) double fullValue;
@property (nonatomic) double damping;
@property (nonatomic) long long numberOfnum;
@property (nonatomic) long long beginNum;
@property (copy, nonatomic) id /* block */ callbackValue;
@property (copy, nonatomic) id /* block */ completedBlock;

- (void)setCompletedBlock:(id /* block */)arg0;
- (id /* block */)completedBlock;
- (id)displaylink;
- (void)setDisplaylink:(id)arg0;
- (void)setNumberOfnum:(long long)arg0;
- (void)setFullValue:(double)arg0;
- (void)setBeginNum:(long long)arg0;
- (void)setCallbackValue:(id /* block */)arg0;
- (void)displayLinkRun;
- (long long)beginNum;
- (long long)numberOfnum;
- (double)fullValue;
- (id /* block */)callbackValue;
- (double)caculateMathValueWithValue:(double)arg0 damping:(double)arg1;
- (void)animationWithFromValue:(double)arg0 toValue:(double)arg1 damping:(double)arg2 duration:(double)arg3 callback:(id /* block */)arg4 completedCallback:(id /* block */)arg5;
- (id)animationWithFromValue:(double)arg0 toValue:(double)arg1 damping:(double)arg2 duration:(double)arg3;
- (void).cxx_destruct;
- (void)setDamping:(double)arg0;
- (double)damping;
- (double)fromValue;
- (void)setFromValue:(double)arg0;

@end
