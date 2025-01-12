//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, NSHashTable, AWECloudAlbumTracker, NSObject, EcClient;
@protocol OS_dispatch_queue;

@interface AWECloudAlbumManager : NSObject <ACCUserServiceMessage, EcTokenFetchProtocol, EcUserChangeProtocol, EcTeaProtocol, EcLogProtocol, EcReachabilityChangedProtocol, EcCoverFetchProtocol> {
    BOOL _enableUsePHAsset;
    EcClient *_ecClient;
    id /* block */ _ecClientNetworkStatusCallback;
    NSMutableDictionary *_albumObserveDic;
    NSHashTable *_userChangeObserverDic;
    NSHashTable *_uploadTaskObserverDic;
    AWECloudAlbumTracker *_tracker;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly, copy, nonatomic) EcClient *ecClient;
@property (class, nonatomic) BOOL enableUsePHAsset;

@property (retain, nonatomic) EcClient *ecClient;
@property (copy, nonatomic) id /* block */ ecClientNetworkStatusCallback;
@property (retain, nonatomic) NSMutableDictionary *albumObserveDic;
@property (retain, nonatomic) NSHashTable *userChangeObserverDic;
@property (retain, nonatomic) NSHashTable *uploadTaskObserverDic;
@property (retain, nonatomic) AWECloudAlbumTracker *tracker;
@property (nonatomic) BOOL enableUsePHAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addObserveAlbum:(unsigned long long)arg0 delegate:(id)arg1;
+ (id)ecClient;
+ (void)tryUpdateCurrentUserToken:(id /* block */)arg0;
+ (void)pauseUploadTask:(id)arg0 completion:(id /* block */)arg1;
+ (void)resumeUploadTask:(id)arg0 completion:(id /* block */)arg1;
+ (void)removeAssetsAlbumId:(unsigned long long)arg0 assetIds:(id)arg1 completion:(id /* block */)arg2;
+ (void)closeCloudAlbum:(id /* block */)arg0;
+ (void)clearCurrentUserToken;
+ (BOOL)enableUsePHAsset;
+ (void)setEnableUsePHAsset:(BOOL)arg0;
+ (id)decryAssetID:(id)arg0 imageData:(id)arg1;
+ (void)removeObserverAlbum:(unsigned long long)arg0 delegate:(id)arg1;
+ (void)addObserveUserChange:(id)arg0;
+ (void)removeUserChangeObserver:(id)arg0;
+ (void)addUploadTaskObserver:(id)arg0;
+ (void)removeUploadTaskObserver:(id)arg0;
+ (id)shareInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)logLevel:(long long)arg0 message:(id)arg1;
- (void)fetchCoverByModel:(id)arg0 targetSize:(struct CGSize { double x0; double x1; })arg1 resultHandler:(id /* block */)arg2;
- (void)fetchToken:(id /* block */)arg0;
- (void)reachabilityChangeCallback:(id /* block */)arg0;
- (void)userChangeOldUser:(id)arg0 newUser:(id)arg1;
- (void)teaEvent:(id)arg0 param:(id)arg1;
- (id)ecClient;
- (void)networkStateChange;
- (id)currentUserLocalToken;
- (long long)currentUserLocalEPUid;
- (void)saveCurrentUserToken:(id)arg0 everphotoUid:(long long)arg1;
- (id)albumObserveDic;
- (id)userChangeObserverDic;
- (BOOL)p_needCareAboutCloudAlbumSDk;
- (void)setEcClient:(id)arg0;
- (void)setEcClientNetworkStatusCallback:(id /* block */)arg0;
- (id)uploadTaskObserverDic;
- (id)ecClientDataFolder;
- (id)ecClientCacheFolder;
- (id)ecClientDownloadFolder;
- (id /* block */)ecClientNetworkStatusCallback;
- (id)p_generateNewEcClient;
- (BOOL)enableUsePHAsset;
- (void)setEnableUsePHAsset:(BOOL)arg0;
- (void)setAlbumObserveDic:(id)arg0;
- (void)setUserChangeObserverDic:(id)arg0;
- (void)setUploadTaskObserverDic:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (long long)currentReachabilityStatus;
- (void)dealloc;

@end
