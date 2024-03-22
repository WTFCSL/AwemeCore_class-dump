//
//     Generated by private class-dump
//

@class AWEHPSkylightUIConfig, NSString, CAMediaTimingFunction;

@interface AWEHPSkylightAnimateAccessApproachModel : NSObject <AWEHPSkylightAnimateAccessApproachModelProtocol> {
    long long _eventType;
    long long _animateType;
    double _animationDuration;
    CAMediaTimingFunction *_animationFunction;
    AWEHPSkylightUIConfig *_intentExpandedUIConfig;
}

@property (nonatomic) long long eventType;
@property (nonatomic) long long animateType;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CAMediaTimingFunction *animationFunction;
@property (retain, nonatomic) AWEHPSkylightUIConfig *intentExpandedUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)animateType;
- (void)setAnimateType:(long long)arg0;
- (id)intentExpandedUIConfig;
- (void)setAnimationFunction:(id)arg0;
- (id)animationFunction;
- (void)setIntentExpandedUIConfig:(id)arg0;
- (void).cxx_destruct;
- (double)animationDuration;
- (long long)eventType;
- (void)setAnimationDuration:(double)arg0;
- (void)setEventType:(long long)arg0;

@end