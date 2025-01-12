//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, NSObject, DIRSContext;
@protocol OS_dispatch_queue;

@interface DIRSEventObservablePlugin : DIRSBasicModule <IRISModule, IRISEventObserver> {
    NSObject<OS_dispatch_queue> *executionQueue;
    NSMutableArray *statisticUnits;
    BOOL _eventLengthObservable;
    BOOL _eventFrequenceObservable;
    double _interval;
}

@property (nonatomic) BOOL eventLengthObservable;
@property (nonatomic) BOOL eventFrequenceObservable;
@property (nonatomic) double interval;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (void)setEventLengthObservable:(BOOL)arg0;
- (void)setEventFrequenceObservable:(BOOL)arg0;
- (BOOL)eventLengthObservable;
- (BOOL)eventFrequenceObservable;
- (void)_frequencyAggregation:(id)arg0;
- (void)onEventAccepted:(id)arg0;
- (void)onEventStored:(id)arg0;
- (void)onEventDropped:(id)arg0 withError:(id)arg1;
- (void)onEventUploaded:(id)arg0;
- (void).cxx_destruct;
- (void)commonInit;
- (double)interval;
- (void)setInterval:(double)arg0;
- (id)executionQueue;

@end
