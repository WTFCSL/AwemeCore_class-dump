//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWELiveShelfCacheManager;
@protocol AWEHttpTask;

@interface AWELiveShelfViewModel : NSObject {
    BOOL _preload;
    AWELiveShelfCacheManager *_cacheManager;
    NSDictionary *_commonTrackerParameter;
    NSString *_aggCardId;
    NSString *_roomId;
    NSString *_sourceType;
    NSString *_anchorId;
    NSString *_couponIds;
    NSString *_scene;
    NSDictionary *_extraParams;
    NSString *_envAddressInfo;
    NSString *_serverExtraInfo;
    NSString *_refreshInfo;
    id<AWEHttpTask> _httpTask;
    id<AWEHttpTask> _httpTaskUpdate;
    NSDictionary *_roomDimensionParams;
    NSDictionary *_shelfDimensionParams;
    NSDictionary *_timeDimensionParams;
    unsigned long long _currentAggRequestFailTimes;
}

@property (copy, nonatomic) NSString *aggCardId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *couponIds;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *envAddressInfo;
@property (copy, nonatomic) NSString *serverExtraInfo;
@property (copy, nonatomic) NSString *refreshInfo;
@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (retain, nonatomic) id<AWEHttpTask> httpTaskUpdate;
@property (nonatomic) BOOL preload;
@property (copy, nonatomic) NSDictionary *roomDimensionParams;
@property (copy, nonatomic) NSDictionary *shelfDimensionParams;
@property (copy, nonatomic) NSDictionary *timeDimensionParams;
@property (nonatomic) unsigned long long currentAggRequestFailTimes;
@property (weak, nonatomic) AWELiveShelfCacheManager *cacheManager;
@property (copy, nonatomic) NSDictionary *commonTrackerParameter;

+ (void)updateOriginDataWithShelfModel:(id)arg0;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (void)setHttpTask:(id)arg0;
- (id)httpTask;
- (void)trackerWithEvent:(id)arg0 params:(id)arg1;
- (id)commonParam;
- (id)aggCardId;
- (void)setEnvAddressInfo:(id)arg0;
- (id)commonTrackerParameter;
- (void)setAddressInfoRequestParams:(id)arg0;
- (id)roomDimensionParams;
- (id)envAddressInfo;
- (void)setCommonTrackerParameter:(id)arg0;
- (void)setAggCardId:(id)arg0;
- (void)logRequestStartWithUrl:(id)arg0 params:(id)arg1;
- (void)logRequestEndWithUrl:(id)arg0 ttResponse:(id)arg1 error:(id)arg2;
- (void)setRoomDimensionParams:(id)arg0;
- (void)setCouponIds:(id)arg0;
- (id)couponIds;
- (BOOL)updateListCacheIfNeededWithAggCardId:(id)arg0 roomId:(id)arg1 anchorId:(id)arg2 sourceType:(id)arg3 extraParams:(id)arg4 completion:(id /* block */)arg5;
- (id)commonCacheModelWithAggCardId:(id)arg0 roomId:(id)arg1 anchorId:(id)arg2 extraParams:(id)arg3;
- (void)setCardListRequestParams:(id)arg0;
- (void)prepareForReopen;
- (id)fetchListWithAggCardId:(id)arg0 roomId:(id)arg1 anchorId:(id)arg2 sourceType:(id)arg3 activeSourceType:(id)arg4 scene:(id)arg5 couponIds:(id)arg6 extraParams:(id)arg7 refreshInfo:(id)arg8 completion:(id /* block */)arg9;
- (void)manageShelfClose;
- (void)updateWithCardIds:(id)arg0 GrouponIds:(id)arg1 completion:(id /* block */)arg2;
- (id)createRequestParamsWithActiveSourceType:(id)arg0;
- (void)setServerExtraInfo:(id)arg0;
- (id)refreshInfo;
- (id)serverExtraInfo;
- (id)shelfDimensionParams;
- (id)timeDimensionParams;
- (id)fetchListWithTime:(long long)arg0 activeSourceType:(id)arg1 completion:(id /* block */)arg2;
- (void)setTimeDimensionParams:(id)arg0;
- (id)cacheKeyWithRequestParams:(id)arg0;
- (void)adjustShelfModel:(id)arg0 originModel:(id)arg1;
- (void)prefetchShelfImage:(id)arg0;
- (unsigned long long)currentAggRequestFailTimes;
- (void)setCurrentAggRequestFailTimes:(unsigned long long)arg0;
- (id)fetchListWithTime:(long long)arg0 completion:(id /* block */)arg1;
- (id)cacheModelWithKey:(id)arg0;
- (id)createRequestParams;
- (void)logCardDetailUpdateStatus:(id)arg0;
- (id)requestParamsKeysNotAffectCachedData;
- (id)httpTaskUpdate;
- (void)setHttpTaskUpdate:(id)arg0;
- (void)setShelfDimensionParams:(id)arg0;
- (void)setRefreshInfo:(id)arg0;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (BOOL)preload;
- (id)scene;
- (id)cacheManager;
- (void)setCacheManager:(id)arg0;
- (void)setPreload:(BOOL)arg0;

@end
