//
//     Generated by private class-dump
//

@class AFDCloseFriendsRecommendRespModel;

@interface AFDCloseFriendsRecommendDataController : AWEListDataController {
    BOOL _isRequestingDislikeUser;
    unsigned long long _source;
    AFDCloseFriendsRecommendRespModel *_prevRespModel;
}

@property (retain, nonatomic) AFDCloseFriendsRecommendRespModel *prevRespModel;
@property (nonatomic) BOOL isRequestingDislikeUser;
@property (nonatomic) unsigned long long source;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)getRecommendDataWithLoadType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (BOOL)isRequestingDislikeUser;
- (void)setIsRequestingDislikeUser:(BOOL)arg0;
- (id)prevRespModel;
- (id)requestParamsWithLoadType:(unsigned long long)arg0;
- (void)setPrevRespModel:(id)arg0;
- (void)dislikeRecommendUserWithID:(id)arg0 completion:(id /* block */)arg1;
- (void)preloadRecommendDataIfNeeded;
- (unsigned long long)source;
- (void).cxx_destruct;
- (void)setSource:(unsigned long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end