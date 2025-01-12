//
//     Generated by private class-dump
//

@class NSString, AWEAdSimilarRecommendResponseModel, AWEAwemeModel;

@protocol AWESimilarRecommendDataManagerProtocol <NSObject>

@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL autoShow;
@property (nonatomic) BOOL willDestroy;
@property (nonatomic) BOOL canTrackFailed;
@property (nonatomic) long long requestDelayTime;
@property (nonatomic) double startRequestTime;
@property (retain, nonatomic) AWEAdSimilarRecommendResponseModel *similarRecommendResponseModel;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *similarRecommendExtra;
@property (retain, nonatomic) AWEAwemeModel *feedModel;
@property (nonatomic) long long similarRecommendType;

- (BOOL)canShow;
- (BOOL)autoShow;
- (void)setAutoShow:(BOOL)arg0;
- (void)setRefer:(id)arg0;
- (id)refer;
- (id)similarRecommendExtra;
- (void)setSimilarRecommendExtra:(id)arg0;
- (long long)similarRecommendType;
- (void)setSimilarRecommendType:(long long)arg0;
- (double)startRequestTime;
- (void)setStartRequestTime:(double)arg0;
- (id)initWithRefer:(id)arg0 similarRecommendExtra:(id)arg1;
- (id)feedModel;
- (id)similarRecommendResponseModel;
- (void)trackShowFailedWithReason:(id)arg0;
- (void)setCanTrackFailed:(BOOL)arg0;
- (void)setSimilarRecommendResponseModel:(id)arg0;
- (BOOL)canTrackFailed;
- (long long)requestDelayTime;
- (void)setRequestDelayTime:(long long)arg0;
- (void)setWillDestroy:(BOOL)arg0;
- (void)setFeedModel:(id)arg0;
- (void)cancelCurrentRequest;
- (long long)pageSize;
- (void)setPageSize:(long long)arg0;
- (BOOL)willDestroy;

@end
