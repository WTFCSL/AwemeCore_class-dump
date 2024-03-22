//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary;

@interface LiveStreamMultiTimerManager : NSObject {
    NSMutableDictionary *_timerList;
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *timerList;
@property (retain, nonatomic) NSLock *lock;

+ (id)manager;

- (void)cancelTimerWithName:(id)arg0;
- (void)schedualTimerWithIdentifier:(id)arg0 interval:(double)arg1 queue:(id)arg2 repeats:(BOOL)arg3 action:(id /* block */)arg4;
- (void)setTimerList:(id)arg0;
- (id)timerList;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)cancelAllTimers;
- (void)setLock:(id)arg0;

@end