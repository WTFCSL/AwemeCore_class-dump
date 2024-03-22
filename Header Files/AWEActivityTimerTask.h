//
//     Generated by private class-dump
//

@class NSTimer, NSString;

@interface AWEActivityTimerTask : NSObject <AWEFeedActivityTimerTaskProtocol> {
    BOOL _shouldRepeat;
    unsigned long long _status;
    double _timeInterval;
    id /* block */ _fireBlock;
    NSTimer *_taskTimer;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL shouldRepeat;
@property (copy, nonatomic) id /* block */ fireBlock;
@property (retain, nonatomic) NSTimer *taskTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskTimer;
- (void)setTaskTimer:(id)arg0;
- (void)pauseTaskIfNeed;
- (void)resumeTaskIfNeed;
- (void)startTaskIfNeed;
- (id)initWithTimerInterval:(double)arg0 fireBlock:(id /* block */)arg1;
- (void)startTaskTimer;
- (void)pauseTaskTimer;
- (void)resumeTaskTimer;
- (void)resetTaskTimer;
- (void)taskFire:(id)arg0;
- (id)initWithTimerInterval:(double)arg0 shouldRepeat:(BOOL)arg1 fireBlock:(id /* block */)arg2;
- (void)stopTaskIfNeed;
- (double)timeInterval;
- (void)setFireBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setTimeInterval:(double)arg0;
- (unsigned long long)status;
- (id /* block */)fireBlock;
- (void)setStatus:(unsigned long long)arg0;
- (void)reset;
- (void)setShouldRepeat:(BOOL)arg0;
- (BOOL)shouldRepeat;

@end