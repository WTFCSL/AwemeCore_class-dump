//
//     Generated by private class-dump
//

@class CADisplayLink;

@interface XIGDanmakuClock : NSObject {
    double _speedFactor;
    long long _preferredFramesPerSecond;
    CADisplayLink *_displayLink;
    double _previousTime;
    id /* block */ _callBack;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double previousTime;
@property (copy, nonatomic) id /* block */ callBack;
@property (nonatomic) double speedFactor;
@property (nonatomic) long long preferredFramesPerSecond;

- (id /* block */)callBack;
- (void)setCallBack:(id /* block */)arg0;
- (void)displayLinkDidTriggered:(id)arg0;
- (void)setDisplayLink:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)invalidate;
- (id)displayLink;
- (void)setPreferredFramesPerSecond:(long long)arg0;
- (void)pause;
- (long long)preferredFramesPerSecond;
- (id)initWithCallBack:(id /* block */)arg0;
- (double)previousTime;
- (void)setPreviousTime:(double)arg0;
- (double)speedFactor;
- (void)setSpeedFactor:(double)arg0;

@end