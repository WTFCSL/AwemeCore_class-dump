//
//     Generated by private class-dump
//

@class NSArray;

@interface AWESocialHeartbeatModel : AWEBaseApiModel {
    long long _heatbeatInterval;
    NSArray *_nearbyBubbleInfoList;
}

@property (nonatomic) long long heatbeatInterval;
@property (retain, nonatomic) NSArray *nearbyBubbleInfoList;

+ (id)nearbyBubbleInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)nearbyBubbleInfoList;
- (long long)heatbeatInterval;
- (void)setHeatbeatInterval:(long long)arg0;
- (void)setNearbyBubbleInfoList:(id)arg0;
- (void).cxx_destruct;

@end