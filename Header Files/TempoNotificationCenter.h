//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface TempoNotificationCenter : NSObject {
    NSMutableDictionary *_eventToObservers;
}

@property (retain, nonatomic) NSMutableDictionary *eventToObservers;

- (void)publishEvent:(id)arg0 parameters:(id)arg1;
- (void)addObserver:(id)arg0 selector:(SEL)arg1 event:(id)arg2;
- (void)removeObserver:(id)arg0 event:(id)arg1;
- (void)publishEvent:(id)arg0 observer:(id)arg1 parameters:(id)arg2;
- (id)eventToObservers;
- (void)removeNilObjectForEvent:(id)arg0;
- (void)setEventToObservers:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg0;

@end