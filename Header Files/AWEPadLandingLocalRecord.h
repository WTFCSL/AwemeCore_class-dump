//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadLandingLocalRecord : MTLModel <MTLJSONSerializing> {
    NSString *_landingTaskId;
    long long _lastLandingTime;
    long long _landingTotalCount;
}

@property (copy, nonatomic) NSString *landingTaskId;
@property (nonatomic) long long lastLandingTime;
@property (nonatomic) long long landingTotalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)landingTaskId;
- (void)setLandingTaskId:(id)arg0;
- (long long)lastLandingTime;
- (void)setLastLandingTime:(long long)arg0;
- (long long)landingTotalCount;
- (void)setLandingTotalCount:(long long)arg0;
- (void).cxx_destruct;

@end
