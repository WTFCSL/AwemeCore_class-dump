//
//     Generated by private class-dump
//

@protocol IESLiveDFDisplayLinkAnimation <NSObject>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long frameRateType;
@property (readonly, nonatomic) long long framesPerSecond;

- (void)updateTime:(double)arg0;
- (long long)frameRateType;
- (void)resume;
- (long long)state;
- (void)stop;
- (void)prepare;
- (void)pause;
- (long long)framesPerSecond;

@optional

- (BOOL)disableAnimation;

@end
