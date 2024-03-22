//
//     Generated by private class-dump
//

@class NSString, NSMapTable, AWEWebViewChannelInterceptor, AWEOriginalAdModel;
@protocol AWEWebViewConfigProtocol, AWEHttpTask;

@interface AWEWebViewGurdPreloadManager : NSObject <IESGurdEventDelegate, IESFalconGurdInterceptionDelegate, AWEAppAwemeSettingMessage> {
    BOOL _gurdInitialized;
    NSString *_eventName;
    AWEWebViewChannelInterceptor *_specificInterceptor;
    NSMapTable *_adModelCache;
    id<AWEHttpTask> _requestTask;
    AWEOriginalAdModel *_currAdModel;
    long long _currScene;
    id<AWEWebViewConfigProtocol> _webConfig;
}

@property (nonatomic) BOOL gurdInitialized;
@property (retain, nonatomic) NSMapTable *adModelCache;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (retain, nonatomic) AWEOriginalAdModel *currAdModel;
@property (nonatomic) long long currScene;
@property (retain, nonatomic) id<AWEWebViewConfigProtocol> webConfig;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) AWEWebViewChannelInterceptor *specificInterceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didReceiveMemoryWarningNotification;
- (void)gurdWillDownloadPackageForAccessKey:(id)arg0 channel:(id)arg1 isPatch:(BOOL)arg2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)arg0 channel:(id)arg1 packageInfo:(id)arg2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg0 channel:(id)arg1 succeed:(BOOL)arg2 error:(id)arg3;
- (void)gurdDidRequestConfigForAccessKey:(id)arg0 configsDictionary:(id)arg1;
- (void)gurdDidCleanCachePackageForAccessKey:(id)arg0 channel:(id)arg1;
- (void)awemeSettingDidChange;
- (long long)preloadStatusOfModel:(id)arg0;
- (BOOL)enableGurdPreload;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (id)webConfig;
- (void)setWebConfig:(id)arg0;
- (void)updateLogPanel:(id)arg0;
- (void)showLogPanel;
- (long long)currScene;
- (void)setCurrScene:(long long)arg0;
- (void)preloadResourceWithModel:(id)arg0 scene:(long long)arg1;
- (BOOL)enableWebGurdPreloadWithModel:(id)arg0;
- (void)syncWebViewResourcesWithModelListIfNeeded:(id)arg0 scene:(long long)arg1;
- (id)channelNameOfModel:(id)arg0 scene:(long long)arg1;
- (void)setupInterceptorWithModelIfNeeded:(id)arg0;
- (long long)pageTypeOfModel:(id)arg0;
- (void)updateCurrAdModelIfNeeded:(id)arg0;
- (void)falconInterceptedRequest:(id)arg0 willLoadFromCache:(BOOL)arg1 statModel:(id)arg2;
- (id)specificInterceptor;
- (void)setGurdInitialized:(BOOL)arg0;
- (void)setAdModelCache:(id)arg0;
- (id)adModelCache;
- (id)currAdModel;
- (void)setCurrAdModel:(id)arg0;
- (long long)sceneOfChannel:(id)arg0;
- (BOOL)enableThirdWebGurdPreloadWithModel:(id)arg0;
- (BOOL)gurdInitialized;
- (void)registerCustomInterceptor;
- (id)accessKeyOfScene:(long long)arg0;
- (void)syncResourcesWithModelList:(id)arg0 scene:(long long)arg1 completion:(id /* block */)arg2;
- (id)channelListOfModelList:(id)arg0 scene:(long long)arg1;
- (void)setupGurdForCommerceIfNeeded;
- (BOOL)isValidAccessKey:(id)arg0;
- (long long)pageTypeOfChannel:(id)arg0;
- (void)trackFeedPlayablePreloadStatusWithAdModel:(id)arg0 extraParams:(id)arg1;
- (id)accessKeyOfChannel:(id)arg0;
- (BOOL)matchCommonPrefix:(id)arg0;
- (void)setSpecificInterceptor:(id)arg0;
- (void)setRequestTask:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (id)requestTask;
- (void)dealloc;
- (id)eventName;

@end
