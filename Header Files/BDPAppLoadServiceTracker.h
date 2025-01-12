//
//     Generated by private class-dump
//

@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface BDPAppLoadServiceTracker : NSObject {
    NSCache *_preloadResultCache;
    NSObject<OS_dispatch_queue> *_recordReportQueue;
}

@property (retain, nonatomic) NSCache *preloadResultCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordReportQueue;

+ (id)sharedTracker;

- (id)trackInfoWithPreloadInfo:(id)arg0;
- (id)resultTypeWithInfo:(id)arg0 result:(id)arg1 isCancel:(BOOL)arg2 error:(id)arg3;
- (id)preloadResultCache;
- (void)reportMpVersionInfoWithReader:(id)arg0 model:(id)arg1;
- (void)reportPreloadInfoSourceTracker:(id)arg0 model:(id)arg1;
- (void)reportPreloadStartWithInfos:(id)arg0;
- (void)reportPreloadResultWithInfos:(id)arg0 result:(id)arg1 isCancel:(BOOL)arg2 error:(id)arg3;
- (id)preloadResultWithAppId:(id)arg0;
- (void)reportBatchMetaResultWithError:(id)arg0 batchType:(id)arg1;
- (void)setPreloadResultCache:(id)arg0;
- (void)updateCommonParamsWithMeta:(id)arg0 isForeGroundTask:(BOOL)arg1;
- (void)addPreloadRecordWithPreloadInfos:(id)arg0;
- (void)setRecordReportQueue:(id)arg0;
- (id)recordReportQueue;
- (void)reportPreloadRecord:(id)arg0 isOpen:(BOOL)arg1 timestamp:(double)arg2;
- (void)launchReportPreloadRecordWithAppID:(id)arg0 schema:(id)arg1;
- (void)reportPreloadRecordForHostLaunch;
- (id)init;
- (void).cxx_destruct;

@end
