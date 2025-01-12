//
//     Generated by private class-dump
//

@class NSMutableSet;
@protocol HMDUITrackerDelegate;

@interface HMDUITracker : NSObject {
    _Atomic BOOL _isRuning;
    NSMutableSet *_liveContexts;
    id<HMDUITrackerDelegate> _delegate;
}

@property (class, readonly) HMDUITracker *sharedInstance;

@property (weak, nonatomic) id<HMDUITrackerDelegate> delegate;

+ (id)sharedInstance;

- (void)trackWithName:(id)arg0 event:(id)arg1 parameters:(id)arg2;
- (void)trackableContext:(id)arg0 didTriggerEvent:(long long)arg1 parameters:(id)arg2;
- (void)trackableContext:(id)arg0 eventWithName:(id)arg1 parameters:(id)arg2;
- (void)trackableContextDidStart:(id)arg0;
- (void)trackableContextDidEnd:(id)arg0;
- (void)trackableContext:(id)arg0 didTriggerEvent:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg0;
- (void)stop;
- (id)delegate;
- (void)didBecomeActive:(id)arg0;
- (void)willResignActive:(id)arg0;
- (void)start;
- (void)setDelegate:(id)arg0;
- (void)willEnterForeground:(id)arg0;

@end
