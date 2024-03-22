//
//     Generated by private class-dump
//

@class CADisplayLink, NSRunLoop;

@interface HLDisplayLink : NSObject {
    CADisplayLink *_caLink;
    NSRunLoop *_runLoop;
    long long _maxFPS;
}

@property (retain) NSRunLoop *runLoop;
@property (nonatomic) long long maxFPS;

- (void)setMaxFPS:(long long)arg0;
- (long long)maxFPS;
- (id)runLoop;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)arg0;
- (void)setRunLoop:(id)arg0;
- (void)invalidate;
- (void)setPreferredFramesPerSecond:(long long)arg0;
- (void)setTarget:(id)arg0 selector:(SEL)arg1;

@end
