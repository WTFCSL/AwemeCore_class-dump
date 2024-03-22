//
//     Generated by private class-dump
//

@class DIRSEventComparator, NSArray, NSDictionary, DIRSEventSamplingSubject;

@interface DIRSEventSamplingUnit : NSObject {
    long long _samplingMethod;
    long long _samplingRate;
    NSArray *_events;
    NSDictionary *_eventParamKeys;
    NSDictionary *_eventParamKeyValues;
    DIRSEventSamplingSubject *_subject;
    DIRSEventComparator *_comparator;
}

@property (nonatomic) long long samplingMethod;
@property (nonatomic) long long samplingRate;
@property (retain, nonatomic) DIRSEventComparator *comparator;
@property (readonly) NSArray *events;
@property (readonly) NSDictionary *eventParamKeys;
@property (readonly) NSDictionary *eventParamKeyValues;
@property (weak, nonatomic) DIRSEventSamplingSubject *subject;

+ (id)unitWithDictionary:(id)arg0;

- (BOOL)isEventHit:(id)arg0;
- (BOOL)_isHitEventSampling;
- (id)eventParamKeys;
- (id)eventParamKeyValues;
- (id)comparator;
- (long long)samplingRate;
- (id)events;
- (void)setSamplingRate:(long long)arg0;
- (id)subject;
- (void)setSubject:(id)arg0;
- (void)setComparator:(id)arg0;
- (void).cxx_destruct;
- (long long)samplingMethod;
- (void)setSamplingMethod:(long long)arg0;
- (void)_load:(id)arg0;

@end