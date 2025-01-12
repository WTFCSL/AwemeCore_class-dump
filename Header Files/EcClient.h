//
//     Generated by private class-dump
//

@class EcAssetManager, ECUploadManager, EcWCDBManager, EcNetworkManager, EcNetworkConfig, EcDownloadManager, EcTagManager, EcCommonConfig, NSObject, EcUpdateManager, EcStrategyConfig, EcDelegateConfig;
@protocol EcReachabilityChangedProtocol, EcCoverFetchProtocol, EcHeimdallrProtocol, EcTeaProtocol, OS_dispatch_queue, EcTokenFetchProtocol;

@interface EcClient : NSObject {
    EcCommonConfig *_commonConfig;
    EcStrategyConfig *_strategyConfig;
    EcDelegateConfig *_delegateConfig;
    id<EcTeaProtocol> _logDelegate;
    id<EcReachabilityChangedProtocol> _reachabilityDelegate;
    long long _handle;
    EcTagManager *_tagManager;
    EcUpdateManager *_updateManager;
    EcAssetManager *_assetManager;
    EcNetworkManager *_networkManager;
    EcWCDBManager *_dbManager;
    ECUploadManager *_uploadManager;
    EcDownloadManager *_downloadManager;
    EcNetworkConfig *_networkConfig;
    id<EcTokenFetchProtocol> _tokenFetchDelegate;
    NSObject<OS_dispatch_queue> *_ecSdkSerialQueue;
    NSObject<OS_dispatch_queue> *_ecSdkConcurrentQueue;
}

@property (retain, nonatomic) EcCommonConfig *commonConfig;
@property (retain, nonatomic) EcNetworkConfig *networkConfig;
@property (retain, nonatomic) EcStrategyConfig *strategyConfig;
@property (retain, nonatomic) EcDelegateConfig *delegateConfig;
@property (weak, nonatomic) id<EcTokenFetchProtocol> tokenFetchDelegate;
@property (retain, nonatomic) EcTagManager *tagManager;
@property (retain, nonatomic) EcUpdateManager *updateManager;
@property (retain, nonatomic) EcAssetManager *assetManager;
@property (retain, nonatomic) EcNetworkManager *networkManager;
@property (retain, nonatomic) EcWCDBManager *dbManager;
@property (retain, nonatomic) ECUploadManager *uploadManager;
@property (retain, nonatomic) EcDownloadManager *downloadManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ecSdkSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ecSdkConcurrentQueue;
@property (weak, nonatomic) id<EcTeaProtocol> logDelegate;
@property (weak, nonatomic) id<EcReachabilityChangedProtocol> reachabilityDelegate;
@property (readonly, weak, nonatomic) id<EcCoverFetchProtocol> coverFetchDelegate;
@property (readonly, weak, nonatomic) id<EcTeaProtocol> teaDelegate;
@property (readonly, weak, nonatomic) id<EcHeimdallrProtocol> heimDelegate;
@property (readonly, nonatomic) long long handle;

- (id)strategyConfig;
- (void)getStorage:(id /* block */)arg0;
- (void)setLogDelegate:(id)arg0;
- (id)logDelegate;
- (void)getVideoInfos:(id)arg0 complete:(id /* block */)arg1;
- (id)albumCover:(unsigned long long)arg0;
- (id)decryptAssetId:(id)arg0 data:(id)arg1;
- (void)doAddAssetsAlbumId:(unsigned long long)arg0 assetModels:(id)arg1 customParam:(id)arg2 complete:(id /* block */)arg3;
- (id)upload:(id)arg0 dataList:(id)arg1;
- (void)importAssetUpsertModels:(id)arg0 complete:(id /* block */)arg1;
- (void)getAssets:(id)arg0 complete:(id /* block */)arg1;
- (void)getAssetInfos:(id)arg0 complete:(id /* block */)arg1;
- (void)getAlbums:(id)arg0 complete:(id /* block */)arg1;
- (void)getAlbumInfos:(id)arg0 complete:(id /* block */)arg1;
- (void)createAlbum:(id)arg0 complete:(id /* block */)arg1;
- (void)createPredefineAlbum:(unsigned long long)arg0 complete:(id /* block */)arg1;
- (void)deleteAlbum:(unsigned long long)arg0 complete:(id /* block */)arg1;
- (void)renameAlbum:(unsigned long long)arg0 name:(id)arg1 complete:(id /* block */)arg2;
- (void)modifyCover:(unsigned long long)arg0 cover:(id)arg1 complete:(id /* block */)arg2;
- (void)addAssetsAlbumId:(unsigned long long)arg0 assetModels:(id)arg1 complete:(id /* block */)arg2;
- (void)addAssetsPredefineAlbumId:(unsigned long long)arg0 assetModels:(id)arg1 complete:(id /* block */)arg2;
- (void)removeAssetsAlbumId:(unsigned long long)arg0 assetIds:(id)arg1 complete:(id /* block */)arg2;
- (void)cancelAndRemoveAlbumId:(unsigned long long)arg0 complete:(id /* block */)arg1;
- (void)doImportAppleAssets:(id)arg0 removeAssets:(id)arg1 complete:(id /* block */)arg2;
- (id)ecLocalAssetModelList:(id)arg0;
- (void)importPHAssetDelChanges:(id)arg0 complete:(id /* block */)arg1;
- (void)importPHAssetUpsert:(id)arg0 complete:(id /* block */)arg1;
- (void)triggerSync;
- (void)uploadPauseAllReason:(long long)arg0 complete:(id /* block */)arg1;
- (void)uploadResumeAllReason:(long long)arg0 complete:(id /* block */)arg1;
- (void)addDownloadChangeDelegate:(id)arg0;
- (void)removeDownloadDelegate:(id)arg0;
- (void)addUploadChangeDelegate:(id)arg0;
- (void)removeUploadDelegate:(id)arg0;
- (void)getUploadTaskState:(id)arg0 complete:(id /* block */)arg1;
- (id)getTaskProgress:(id)arg0 type:(long long)arg1;
- (void)getUploadTaskItemState:(id)arg0 assetId:(id)arg1 complete:(id /* block */)arg2;
- (void)pauseUploadTask:(id)arg0 complete:(id /* block */)arg1;
- (void)resumeUploadTask:(id)arg0 complete:(id /* block */)arg1;
- (void)cancelUploadTask:(id)arg0 complete:(id /* block */)arg1;
- (void)retryUploadTask:(id)arg0 complete:(id /* block */)arg1;
- (void)retryUploadTask:(id)arg0 assetId:(id)arg1 complete:(id /* block */)arg2;
- (void)downloadAssetList:(id)arg0 complete:(id /* block */)arg1;
- (void)cleanInnerSdk;
- (void)sdkInitWithConfig:(id)arg0 delegate:(id)arg1 strategy:(id)arg2;
- (void)setEcSdkSerialQueue:(id)arg0;
- (void)setEcSdkConcurrentQueue:(id)arg0;
- (void)setCommonConfig:(id)arg0;
- (void)setStrategyConfig:(id)arg0;
- (void)setDelegateConfig:(id)arg0;
- (id)commonConfig;
- (id)delegateConfig;
- (void)reachabilityChangeStatus:(long long)arg0;
- (void)createInnerSdk;
- (void)setTagManager:(id)arg0;
- (void)setNetworkManager:(id)arg0;
- (void)refreshWorkLogic;
- (id)ecSdkSerialQueue;
- (id)ecSdkConcurrentQueue;
- (id)tokenFetchDelegate;
- (id)coverFetchDelegate;
- (id)teaDelegate;
- (id)heimDelegate;
- (id)initWithConfig:(id)arg0 delegate:(id)arg1 strategy:(id)arg2;
- (void)redoCreateInnerSdk;
- (void)updateToken:(id)arg0 userInfo:(id)arg1;
- (void)invokeBlockSerialSync:(id /* block */)arg0;
- (void)invokeBlockSerialASync:(id /* block */)arg0;
- (void)invokeBlockConcurrentSync:(id /* block */)arg0;
- (id)networkConfig;
- (void)setNetworkConfig:(id)arg0;
- (void)setTokenFetchDelegate:(id)arg0;
- (void)getDownloadTaskState:(id)arg0 complete:(id /* block */)arg1;
- (void)cancelDownloadTask:(id)arg0 complete:(id /* block */)arg1;
- (void)refreshToken:(id /* block */)arg0;
- (id)networkManager;
- (void)addObserveAlbum:(unsigned long long)arg0 delegate:(id)arg1;
- (void)removeObserveAlbum:(unsigned long long)arg0 delegate:(id)arg1;
- (id)tagManager;
- (void)updateUserStorage:(id)arg0;
- (void)invokeBlockConcurrentASync:(id /* block */)arg0;
- (id)httpDomain;
- (id)customNetworkHeader;
- (id)downloadManager;
- (void)setUpdateManager:(id)arg0;
- (id)assetManager;
- (id)updateManager;
- (void).cxx_destruct;
- (void)setDownloadManager:(id)arg0;
- (void)setAssetManager:(id)arg0;
- (long long)currentReachabilityStatus;
- (void)setDbManager:(id)arg0;
- (id)dbManager;
- (void)dealloc;
- (long long)handle;
- (id)reachabilityDelegate;
- (void)setReachabilityDelegate:(id)arg0;
- (id)uploadManager;
- (void)setUploadManager:(id)arg0;

@end
