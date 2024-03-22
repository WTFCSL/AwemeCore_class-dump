//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary;

@interface AWESoftADAwardRequestModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _rewardType;
    NSArray *_viewedVideo;
    NSArray *_singleViewTimeList;
    NSArray *_singleVideoRewardList;
    long long _currentIndex;
    long long _highestReward;
    NSString *_adFrom;
    NSString *_enterFrom;
}

@property (nonatomic) unsigned long long rewardType;
@property (copy, nonatomic) NSArray *viewedVideo;
@property (copy, nonatomic) NSArray *singleViewTimeList;
@property (copy, nonatomic) NSArray *singleVideoRewardList;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long highestReward;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setRewardType:(unsigned long long)arg0;
- (unsigned long long)rewardType;
- (id)adFrom;
- (void)setAdFrom:(id)arg0;
- (id)viewedVideo;
- (void)setViewedVideo:(id)arg0;
- (id)singleViewTimeList;
- (void)setSingleViewTimeList:(id)arg0;
- (id)singleVideoRewardList;
- (void)setSingleVideoRewardList:(id)arg0;
- (long long)highestReward;
- (void)setHighestReward:(long long)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg0;

@end