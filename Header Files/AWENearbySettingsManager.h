//
//     Generated by private class-dump
//

@class AWENearbyBannerResourceModel, NSString, NSArray, AWEDiamondPerfMonitor, AWENearbyLRUCache, AWENearbyPageContext, AWEPOIInfoModel, AWENearbySettingsResponse;
@protocol AWEHttpTask;

@interface AWENearbySettingsManager : NSObject {
    BOOL _isHometownMode;
    BOOL _isHometownLocalMode;
    BOOL _permanentDisplaySkylight;
    AWEPOIInfoModel *_publishTaskPoi;
    NSArray *_diamondTabs;
    AWENearbyBannerResourceModel *_bannerResource;
    AWENearbySettingsResponse *_settingResponse;
    AWEDiamondPerfMonitor *_perfMonitor;
    id /* block */ _settingsCompletion;
    long long _sceneType;
    NSString *_currentResponseCityCode;
    NSString *_currentRequestingCityCode;
    id<AWEHttpTask> _currentRequestTask;
    AWENearbyPageContext *_pageContext;
    AWENearbyLRUCache *_requestParamCache;
}

@property (copy, nonatomic) NSString *currentResponseCityCode;
@property (copy, nonatomic) NSString *currentRequestingCityCode;
@property (retain, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (nonatomic) BOOL permanentDisplaySkylight;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (retain, nonatomic) AWENearbyLRUCache *requestParamCache;
@property (nonatomic) BOOL isHometownMode;
@property (nonatomic) BOOL isHometownLocalMode;
@property (retain, nonatomic) AWEPOIInfoModel *publishTaskPoi;
@property (retain, nonatomic) NSArray *diamondTabs;
@property (retain, nonatomic) AWENearbyBannerResourceModel *bannerResource;
@property (retain, nonatomic) AWENearbySettingsResponse *settingResponse;
@property (retain, nonatomic) AWEDiamondPerfMonitor *perfMonitor;
@property (copy, nonatomic) id /* block */ settingsCompletion;
@property (readonly, nonatomic) BOOL enableLowLineSkyLight;
@property (readonly, nonatomic) BOOL enableLynxSkyLight;
@property (readonly, nonatomic) BOOL haveSkyLight;
@property (readonly, nonatomic) BOOL haveLowLineSkyLight;
@property (readonly, nonatomic) BOOL haveLynxSkyLight;

- (void)dealloc;
- (void)setPerfMonitor:(id)arg0;
- (id)perfMonitor;
- (BOOL)isHometownMode;
- (id)settingResponse;
- (id)initWithScene:(long long)arg0 pageContext:(id)arg1;
- (void)setSettingResponse:(id)arg0;
- (void)refreshSettingsWithRefreshType:(unsigned long long)arg0 rowType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 usePreloadCache:(id)arg3 complete:(id /* block */)arg4;
- (void)refreshSettingsWithRefreshType:(unsigned long long)arg0 rowType:(unsigned long long)arg1 cardParams:(id)arg2 completion:(id /* block */)arg3;
- (void)setCurrentRequestTask:(id)arg0;
- (id)currentRequestTask;
- (id)diamondTabs;
- (BOOL)haveSkyLight;
- (void)refreshSettingsWithComplete:(id /* block */)arg0;
- (BOOL)permanentDisplaySkylight;
- (void)setSettingsCompletion:(id /* block */)arg0;
- (BOOL)enableLynxSkyLight;
- (BOOL)enableLowLineSkyLight;
- (id /* block */)settingsCompletion;
- (void)refreshSettingsWithFeedParms:(id)arg0 complete:(id /* block */)arg1;
- (void)setPublishTaskPoi:(id)arg0;
- (void)refreshSettingsWithSourceType:(unsigned long long)arg0 complete:(id /* block */)arg1;
- (BOOL)isHometownLocalMode;
- (void)setIsHometownMode:(BOOL)arg0;
- (void)setIsHometownLocalMode:(BOOL)arg0;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)arg0 rowType:(unsigned long long)arg1 sceneType:(long long)arg2 completion:(id /* block */)arg3;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)refreshSettingsWithPullType:(unsigned long long)arg0 Complete:(id /* block */)arg1;
- (void)refreshSettingsWithPullType:(unsigned long long)arg0 sourceType:(unsigned long long)arg1 refreshType:(unsigned long long)arg2 rowType:(unsigned long long)arg3 usePreloadCache:(id)arg4 feedParams:(id)arg5 complete:(id /* block */)arg6;
- (void)refreshSettingsWithPullType:(unsigned long long)arg0 usePreloadCache:(id)arg1 Complete:(id /* block */)arg2;
- (void)refreshSettingsWithPullType:(unsigned long long)arg0 sourceType:(unsigned long long)arg1 usePreloadCache:(id)arg2 feedParams:(id)arg3 complete:(id /* block */)arg4;
- (id)defaultDiamondTabs;
- (void)setDiamondTabs:(id)arg0;
- (id)bannerResource;
- (void)setBannerResource:(id)arg0;
- (id)currentRequestingCityCode;
- (id)currentResponseCityCode;
- (void)prelaodTimors:(id)arg0;
- (void)preloadLynxFont;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)arg0 sourceType:(unsigned long long)arg1 refreshType:(unsigned long long)arg2 rowType:(unsigned long long)arg3 feedParams:(id)arg4 sceneType:(long long)arg5 completion:(id /* block */)arg6;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)arg0 sourceType:(unsigned long long)arg1 refreshType:(unsigned long long)arg2 rowType:(unsigned long long)arg3 feedParams:(id)arg4 cardParams:(id)arg5 sceneType:(long long)arg6 completion:(id /* block */)arg7;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)arg0 feedParams:(id)arg1 completion:(id /* block */)arg2;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)arg0 sourceType:(unsigned long long)arg1 feedParams:(id)arg2 completion:(id /* block */)arg3;
- (void)setCurrentRequestingCityCode:(id)arg0;
- (id)publishTaskPoi;
- (id)requestParamCache;
- (void)setCurrentResponseCityCode:(id)arg0;
- (void)setPermanentDisplaySkylight:(BOOL)arg0;
- (BOOL)haveLynxSkyLight;
- (BOOL)haveLowLineSkyLight;
- (void)refreshSettingsWithRefreshType:(unsigned long long)arg0 rowType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 complete:(id /* block */)arg3;
- (void)refreshSettingsWithPullType:(unsigned long long)arg0 sourceType:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (void)updateSettingsWithResponse:(id)arg0;
- (unsigned long long)adaptWithDatalistPulltype:(long long)arg0;
- (void)setRequestParamCache:(id)arg0;
- (void).cxx_destruct;
- (void)cancelCurrentRequest;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
