//
//     Generated by private class-dump
//

@class NSString, RxMultipleDelegate;
@protocol RTVVoipProximityMonitorDelegate;

@interface RTVVoipProximityMonitor : NSObject <RTVVoipProximityMonitorInterface> {
    RxMultipleDelegate<RTVVoipProximityMonitorDelegate> *_multipleDelegate;
}

@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipProximityMonitorDelegate> *multipleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)multipleDelegate;
- (id)activeProximityMonitoringWithObserver:(id)arg0;
- (id)deactiveProximityMonitoringWithObserver:(id)arg0;
- (void)proximityMonitorStateChangeNotification:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end