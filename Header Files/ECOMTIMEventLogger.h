//
//     Generated by private class-dump
//

@class ECOMTIMThreadSafeMutableDictionary;

@interface ECOMTIMEventLogger : NSObject {
    ECOMTIMThreadSafeMutableDictionary *_timedEvents;
}

@property (retain, nonatomic) ECOMTIMThreadSafeMutableDictionary *timedEvents;

+ (id)sharedInstance;

- (void)logService:(id)arg0 name:(id)arg1 data:(id)arg2;
- (id)startTimedEventWithStartInfo:(id)arg0;
- (void)endTimedEventForStartMarker:(id)arg0 withService:(id)arg1 name:(id)arg2 dataConfigBlock:(id /* block */)arg3;
- (void)endTimedEventForStartMarker:(id)arg0 withService:(id)arg1 name:(id)arg2 data:(id)arg3;
- (void)startTimedEventWithMarker:(id)arg0 startInfo:(id)arg1;
- (void)setTimedEvents:(id)arg0;
- (id)timedEvents;
- (id)init;
- (void).cxx_destruct;

@end
