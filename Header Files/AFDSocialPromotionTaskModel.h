//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AFDSocialPromotionTaskModel : MTLModel <MTLJSONSerializing> {
    BOOL _enable;
    BOOL _needPolling;
    NSString *_activityID;
    NSString *_activityType;
    long long _version;
    double _startTime;
    double _endTime;
    NSDictionary *_config;
}

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long version;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL needPolling;
@property (copy, nonatomic) NSDictionary *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)needPolling;
- (void)setNeedPolling:(BOOL)arg0;
- (BOOL)enable;
- (void)setActivityType:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)activityType;
- (double)endTime;
- (long long)version;
- (double)startTime;
- (void)setEnable:(BOOL)arg0;
- (void)setEndTime:(double)arg0;
- (id)activityID;
- (void)setActivityID:(id)arg0;

@end
