//
//     Generated by private class-dump
//

@class AWEHPSkylightUIConfig, CAMediaTimingFunction;

@protocol AWEHPSkylightAnimateAccessApproachModelProtocol <NSObject>

@property (readonly, nonatomic) long long eventType;
@property (nonatomic) long long animateType;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) CAMediaTimingFunction *animationFunction;
@property (readonly, nonatomic) AWEHPSkylightUIConfig *intentExpandedUIConfig;

- (long long)animateType;
- (void)setAnimateType:(long long)arg0;
- (id)intentExpandedUIConfig;
- (id)animationFunction;
- (double)animationDuration;
- (long long)eventType;

@end
