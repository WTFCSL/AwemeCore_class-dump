//
//     Generated by private class-dump
//

@class HMDThreadSafeDictionary;

@interface AWEIMGCDTimerManager : NSObject {
    HMDThreadSafeDictionary *_timerContainer;
}

@property (retain, nonatomic) HMDThreadSafeDictionary *timerContainer;

+ (id)sharedInstance;

- (void)cancelTimerWithName:(id)arg0;
- (id)timerContainer;
- (void)scheduleTimerWithName:(id)arg0 timeInterval:(double)arg1 queue:(id)arg2 repeats:(BOOL)arg3 action:(id /* block */)arg4;
- (BOOL)existTimer:(id)arg0;
- (void)setTimerContainer:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
