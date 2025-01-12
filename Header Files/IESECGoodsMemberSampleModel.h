//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsMemberSampleModel : MTLModel <MTLJSONSerializing> {
    double _preBeginTime;
    double _beginTime;
    double _endTime;
    NSString *_reason;
    long long _type;
    double _initTimeinterval;
    double _serverTime;
}

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double preBeginTime;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long type;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setServerTime:(double)arg0;
- (double)initTimeinterval;
- (void)setInitTimeinterval:(double)arg0;
- (id)getTrackParams;
- (double)preBeginTime;
- (void)setPreBeginTime:(double)arg0;
- (id)init;
- (double)serverTime;
- (void).cxx_destruct;
- (id)reason;
- (long long)type;
- (void)setBeginTime:(double)arg0;
- (double)endTime;
- (void)setType:(long long)arg0;
- (double)currentTime;
- (void)setReason:(id)arg0;
- (void)setEndTime:(double)arg0;
- (double)beginTime;

@end
