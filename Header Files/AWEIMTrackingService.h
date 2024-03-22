//
//     Generated by private class-dump
//

@class AWEIMDoubleTrackerManager, NSString;
@protocol AWETrackingService;

@interface AWEIMTrackingService : HTSService <AWEIMTrackingService> {
    AWEIMDoubleTrackerManager *_sampleManager;
    id<AWETrackingService> _trackerService;
}

@property (readonly, nonatomic) AWEIMDoubleTrackerManager *sampleManager;
@property (readonly, nonatomic) id<AWETrackingService> trackerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)trackEvent:(id)arg0 withParams:(id)arg1;
- (id)trackerService;
- (id)sampleManager;
- (BOOL)shouldTrackEvent:(id)arg0;
- (void).cxx_destruct;

@end
