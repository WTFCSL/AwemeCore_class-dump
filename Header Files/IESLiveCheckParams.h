//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveCheckParams : NSObject {
    BOOL _isLiving;
    BOOL _isAdWhite;
    BOOL _isAds;
    NSString *_userId;
    NSString *_roomId;
    NSString *_adTypeFlags;
    NSString *_relativeLogids;
    long long _distributionScenes;
    NSString *_feedTimeMs;
    NSString *_enterFromMerge;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *adTypeFlags;
@property (copy, nonatomic) NSString *relativeLogids;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) BOOL isAdWhite;
@property (nonatomic) long long distributionScenes;
@property (copy, nonatomic) NSString *feedTimeMs;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (nonatomic) BOOL isAds;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (BOOL)isLiving;
- (BOOL)isAds;
- (id)enterFromMerge;
- (void)setEnterFromMerge:(id)arg0;
- (void)setIsAds:(BOOL)arg0;
- (void)setIsLiving:(BOOL)arg0;
- (void)setFeedTimeMs:(id)arg0;
- (id)feedTimeMs;
- (void)setAdTypeFlags:(id)arg0;
- (void)setIsAdWhite:(BOOL)arg0;
- (void)setRelativeLogids:(id)arg0;
- (void)setDistributionScenes:(long long)arg0;
- (long long)distributionScenes;
- (id)adTypeFlags;
- (id)relativeLogids;
- (BOOL)isAdWhite;
- (void).cxx_destruct;
- (id)userId;
- (void)setUserId:(id)arg0;

@end
