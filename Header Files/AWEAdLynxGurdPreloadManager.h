//
//     Generated by private class-dump
//

@class NSLock, NSMapTable, NSString;
@protocol AWEWebViewConfigProtocol;

@interface AWEAdLynxGurdPreloadManager : NSObject <IESGurdEventDelegate, IESFalconGurdInterceptionDelegate> {
    BOOL _gurdInitialized;
    NSString *_eventName;
    NSMapTable *_adModelCache;
    id<AWEWebViewConfigProtocol> _webConfig;
    NSLock *_cacheLock;
}

@property (nonatomic) BOOL gurdInitialized;
@property (retain, nonatomic) NSMapTable *adModelCache;
@property (retain, nonatomic) id<AWEWebViewConfigProtocol> webConfig;
@property (retain, nonatomic) NSLock *cacheLock;
@property (copy, nonatomic) NSString *eventName;
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
- (BOOL)enableLynxGurdPreloadWithModel:(id)arg0;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (id)webConfig;
- (void)setWebConfig:(id)arg0;
- (void)updateLogPanel:(id)arg0;
- (void)showLogPanel;
- (void)setGurdInitialized:(BOOL)arg0;
- (void)setAdModelCache:(id)arg0;
- (id)adModelCache;
- (BOOL)gurdInitialized;
- (BOOL)isValidAccessKey:(id)arg0;
- (void)trackFeedPlayablePreloadStatusWithAdModel:(id)arg0 extraParams:(id)arg1;
- (id)feedPlayableAccessKey;
- (id)accessKeyForAdModel:(id)arg0;
- (BOOL)isFullScreenLynxSceneWithModel:(id)arg0;
- (void)processFullScreenLynxChannels:(id)arg0 accessKey:(id)arg1 channalListDic:(id)arg2 adModel:(id)arg3;
- (void)setupGurdForLynxIfNeeded;
- (BOOL)isValidChannel:(id)arg0 andAccessKey:(id)arg1;
- (void)syncResourcesWithModelListIfNeeded:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)cacheLock;
- (void)setEventName:(id)arg0;
- (void)setCacheLock:(id)arg0;
- (void)dealloc;
- (id)eventName;
- (id)accessKey;

@end