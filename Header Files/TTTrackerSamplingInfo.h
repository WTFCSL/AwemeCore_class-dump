//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface TTTrackerSamplingInfo : NSObject {
    long long _samplingRate;
    long long _samplingMethod;
    NSArray *_events;
    NSDictionary *_paramKeys;
    NSDictionary *_paramValues;
}

@property (nonatomic) long long samplingRate;
@property (nonatomic) long long samplingMethod;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDictionary *paramKeys;
@property (copy, nonatomic) NSDictionary *paramValues;

- (void)setParamKeys:(id)arg0;
- (void)setParamValues:(id)arg0;
- (id)paramKeys;
- (id)paramValues;
- (BOOL)containEvent:(id)arg0 parameters:(id)arg1;
- (BOOL)hitSamplingWithDid:(long long)arg0 checksum:(long long)arg1;
- (long long)samplingRate;
- (id)events;
- (void)setSamplingRate:(long long)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (void)setEvents:(id)arg0;
- (long long)samplingMethod;
- (void)setSamplingMethod:(long long)arg0;

@end
