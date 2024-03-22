//
//     Generated by private class-dump
//

@class NSString, AWESimpleUserModel;

@interface AWEConcernVisitFrequentUserModel : AWEBaseApiModel {
    BOOL _isEpisode;
    AWESimpleUserModel *_userModel;
    long long _unwatchedCount;
    double _latestItemPublishTime;
    NSString *_episodeExtraInfo;
}

@property (retain, nonatomic) AWESimpleUserModel *userModel;
@property (nonatomic) long long unwatchedCount;
@property (nonatomic) double latestItemPublishTime;
@property (nonatomic) BOOL isEpisode;
@property (copy, nonatomic) NSString *episodeExtraInfo;

+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)unwatchedCount;
- (void)setUnwatchedCount:(long long)arg0;
- (double)latestItemPublishTime;
- (void)setLatestItemPublishTime:(double)arg0;
- (BOOL)isEpisode;
- (void)setIsEpisode:(BOOL)arg0;
- (id)episodeExtraInfo;
- (id)episodeModel;
- (void)setEpisodeExtraInfo:(id)arg0;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;

@end