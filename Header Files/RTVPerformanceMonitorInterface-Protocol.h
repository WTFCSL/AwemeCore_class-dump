//
//     Generated by private class-dump
//

@protocol RTVPerformanceMonitorDelegate;

@protocol RTVPerformanceMonitorInterface <NSObject>

@property (weak, nonatomic) id<RTVPerformanceMonitorDelegate> delegate;

- (id)fetchCurrentDurationForMarker:(id)arg0;
- (id)fetchCurrentDurationSinceToken:(id)arg0 forMarker:(id)arg1;
- (void)clearDataForMarker:(id)arg0;
- (id)attributesWithMarker:(id)arg0;
- (id)containToken:(id)arg0 forMarker:(id)arg1;
- (void)updateAttributesWithMarker:(id)arg0 appendDictionary:(id)arg1;
- (void)updateAttributesWithMarker:(id)arg0 removeKeys:(id)arg1;
- (void)startTimedEventWithMarker:(id)arg0 attributes:(id)arg1;
- (void)startTimedEventWithMarker:(id)arg0;
- (id)startTimedEventAttributes:(id)arg0;
- (id)endTimedEventForMarker:(id)arg0;
- (void)endTimedEventForStartMarker:(id)arg0 withService:(id)arg1 status:(long long)arg2 data:(id)arg3;
- (void)endTimedEventForStartMarker:(id)arg0 withService:(id)arg1 status:(long long)arg2 extraDictionaryBlock:(id /* block */)arg3;
- (void)pinTimerIntervalSinceStartWithToken:(id)arg0 forMarker:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
