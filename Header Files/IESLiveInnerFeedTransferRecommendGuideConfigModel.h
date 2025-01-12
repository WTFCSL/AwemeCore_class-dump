//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface IESLiveInnerFeedTransferRecommendGuideConfigModel : NSObject {
    BOOL _useNewConfig;
    BOOL _channelGuideEnable;
    long long _styleType;
    double _showMillMs;
    NSArray *_followEntrances;
    NSDictionary *_entranceItemConfig;
}

@property (nonatomic) BOOL channelGuideEnable;
@property (nonatomic) long long styleType;
@property (nonatomic) BOOL useNewConfig;
@property (nonatomic) double showMillMs;
@property (retain, nonatomic) NSArray *followEntrances;
@property (retain, nonatomic) NSDictionary *entranceItemConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void)setStyleType:(long long)arg0;
- (BOOL)useNewConfig;
- (void)setUseNewConfig:(BOOL)arg0;
- (double)showMillMs;
- (void)setShowMillMs:(double)arg0;
- (id)followEntrances;
- (void)setFollowEntrances:(id)arg0;
- (id)entranceItemConfig;
- (void)setEntranceItemConfig:(id)arg0;
- (BOOL)channelGuideEnable;
- (void)setChannelGuideEnable:(BOOL)arg0;
- (id)init;
- (long long)styleType;
- (void).cxx_destruct;

@end
