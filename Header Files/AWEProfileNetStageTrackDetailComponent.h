//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileNetStageTrackDetailComponent : AWEUserDetailBaseComponent <AWEProfileNetStageTrackDetailComponentProtocol> {
    BOOL _isTraceReported;
}

@property (nonatomic) BOOL isTraceReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userPreloadRecordBegin:(id)arg0;
- (void)userPreloadRecordEnd:(id)arg0 error:(id)arg1;
- (void)postPreloadRecordBegin:(id)arg0;
- (void)postPreloadRecordEnd:(id)arg0 error:(id)arg1;
- (BOOL)isTraceReported;
- (id)profileCustomNetStageEventWithTrace:(id)arg0;
- (void)setIsTraceReported:(BOOL)arg0;
- (void)perfTrackPreloadDuration:(id)arg0 prefix:(id)arg1;
- (id)perfTrace;
- (id)preloadCustomParams:(id)arg0 prefix:(id)arg1 baseTime:(double)arg2;
- (id)durationToMS:(double)arg0;
- (void)viewDidLoad;
- (void)onInit;

@end
