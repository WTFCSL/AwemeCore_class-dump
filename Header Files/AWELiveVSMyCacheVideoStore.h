//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWELiveVSCacheVideoTracker, NSIndexPath, NSMutableArray;

@interface AWELiveVSMyCacheVideoStore : NSObject <IESVSVideoCacheServiceDelegate> {
    BOOL _isLoading;
    BOOL _showNetworkAlert;
    BOOL _isFirstShowTracked;
    BOOL _isViewDidAppeared;
    NSIndexPath *_indexPath;
    NSDictionary *_models;
    AWELiveVSCacheVideoTracker *_tracker;
    long long _networkStatus;
    NSMutableArray *_waitingTasks;
    NSMutableArray *_downloadingTasks;
}

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL showNetworkAlert;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSDictionary *models;
@property (retain, nonatomic) AWELiveVSCacheVideoTracker *tracker;
@property (nonatomic) BOOL isFirstShowTracked;
@property (nonatomic) BOOL isViewDidAppeared;
@property (nonatomic) long long networkStatus;
@property (retain, nonatomic) NSMutableArray *waitingTasks;
@property (retain, nonatomic) NSMutableArray *downloadingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseAllTasks;
- (id)downloadingTasks;
- (void)setDownloadingTasks:(id)arg0;
- (id)waitingTasks;
- (void)setWaitingTasks:(id)arg0;
- (void)trackWithKey:(id)arg0 model:(id)arg1;
- (void)resumeAllTasks;
- (id)cacheModelAtIndexPath:(id)arg0;
- (void)deleteItemAtIndexPath:(id)arg0;
- (void)pauseDownloadWithModel:(id)arg0;
- (void)startDownloadWithModel:(id)arg0;
- (void)p_receiveHTSLiveReachabilityChangedNotification:(id)arg0;
- (BOOL)isViewDidAppeared;
- (void)setIsViewDidAppeared:(BOOL)arg0;
- (void)p_setExtraInitWithModel:(id)arg0;
- (BOOL)isFirstShowTracked;
- (void)setIsFirstShowTracked:(BOOL)arg0;
- (void)p_trackModelsDownloadStatusShow;
- (void)setShowNetworkAlert:(BOOL)arg0;
- (void)p_updateDownloadTask:(id)arg0;
- (void)p_updateDownloadTask:(id)arg0 withProgress:(float)arg1 netSpeed:(float)arg2;
- (void)videoCacheService:(id)arg0 didStartWithDownloadTask:(id)arg1;
- (void)videoCacheService:(id)arg0 downloadTask:(id)arg1 stateDidChange:(long long)arg2;
- (void)videoCacheService:(id)arg0 downloadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)videoCacheService:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 timeInterval:(double)arg3 currentProgress:(double)arg4;
- (BOOL)showNetworkAlert;
- (BOOL)isLoading;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (long long)networkStatus;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (long long)numberOfSections;
- (void)fetchData;
- (id)indexPath;
- (id)models;
- (void)viewDidAppear;
- (void)setNetworkStatus:(long long)arg0;
- (void)setModels:(id)arg0;
- (long long)numberOfRowsInSection:(long long)arg0;
- (void)dealloc;
- (void)setIsLoading:(BOOL)arg0;
- (id)titleForSection:(long long)arg0;

@end
