//
//     Generated by private class-dump
//

@class HMInstance;

@interface HMDANRTracker2 : HMDANRTracker {
    HMInstance *_instance;
}

@property (retain, nonatomic) HMInstance *instance;

+ (id)sharedTracker;

- (BOOL)exceptionDataSource;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)arg0;
- (void)dropExceptionData;
- (void)didBlockWithInfo:(id)arg0;
- (void).cxx_destruct;
- (id)instance;
- (void)setInstance:(id)arg0;

@end
