//
//     Generated by private class-dump
//

@class ILAAssetsSortModel, NSMutableDictionary, ILAExtraFrameModel, ILADecodeModel, NSObject, ILAScanModelManager;
@protocol OS_dispatch_queue, ILAScanWrapperProtocol, OS_dispatch_semaphore;

@interface ILAScanWrapper : NSObject {
    struct shared_ptr<ILASDK::Scan> { struct Scan *__ptr_; struct __shared_weak_count *__cntrl_; } scan;
    struct shared_ptr<ILASDK::Config> { struct Config *__ptr_; struct __shared_weak_count *__cntrl_; } scanConfig;
    id<ILAScanWrapperProtocol> _delegate;
    NSObject<OS_dispatch_queue> *_scanQueue;
    NSObject<OS_dispatch_queue> *_momentQueue;
    NSObject<OS_dispatch_queue> *_prepareQueue;
    ILAScanModelManager *_scanModelManager;
    ILAExtraFrameModel *_frameModel;
    ILADecodeModel *_decodeModel;
    ILAAssetsSortModel *_sortModel;
    NSMutableDictionary *_tagMapping;
    long long _lastScanState;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _innerState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *momentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prepareQueue;
@property (retain, nonatomic) ILAScanModelManager *scanModelManager;
@property (retain, nonatomic) ILAExtraFrameModel *frameModel;
@property (retain, nonatomic) ILADecodeModel *decodeModel;
@property (retain, nonatomic) ILAAssetsSortModel *sortModel;
@property (retain, nonatomic) NSMutableDictionary *tagMapping;
@property (nonatomic) long long lastScanState;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property unsigned long long innerState;
@property (weak, nonatomic) id<ILAScanWrapperProtocol> delegate;

+ (void)setLogModel:(id)arg0;
+ (void)setTeaModel:(id)arg0;

- (id)initWithConfig:(id)arg0 modelManager:(id)arg1;
- (void)setExtraFrameModel:(id)arg0;
- (void)setDecodeModel:(id)arg0;
- (void)setSortModel:(id)arg0;
- (void)scanModelFinished;
- (void)downloadModels;
- (BOOL)verifyIntegrity;
- (long long)PauseAllTask;
- (long long)CancelAllTask;
- (long long)ResumeAllTask;
- (long long)PauseTask:(id)arg0;
- (long long)CancelTask:(id)arg0;
- (long long)ResumeTask:(id)arg0;
- (id)scanWithAssetList:(id)arg0 taskConfig:(id)arg1 progress:(id /* block */)arg2 finish:(id /* block */)arg3;
- (id)beautifyWithAssetList:(id)arg0 taskConfig:(id)arg1 tagMap:(id)arg2 progress:(id /* block */)arg3 finish:(id /* block */)arg4;
- (void)startScan:(id)arg0 progress:(id /* block */)arg1 finish:(id /* block */)arg2 priority:(unsigned long long)arg3 increase:(BOOL)arg4 saveDB:(BOOL)arg5;
- (void)pauseScan;
- (void)resumeScan;
- (void)pauseAggregate;
- (void)resumeAggregate;
- (id)queryAssetWithLocalId:(id)arg0;
- (id)queryResultsWithLocalId:(id)arg0;
- (id)querryTagsMapping;
- (id)tagNameForId:(id)arg0;
- (void)updateDeviceThreshold:(id)arg0;
- (void)deleteAssetsByLocalId:(id)arg0;
- (int)UpdatePermissionState:(long long)arg0;
- (void)aggregateMoment:(id)arg0 step:(long long)arg1 momentConfig:(id)arg2 progress:(id /* block */)arg3 finish:(id /* block */)arg4 refresh:(BOOL)arg5;
- (id)aggregateMoment:(id)arg0 refresh:(BOOL)arg1;
- (id)queryMoment:(id)arg0 orderType:(unsigned long long)arg1 like:(BOOL)arg2;
- (id)queryAllMomentKeyPrefix:(id)arg0 orderType:(unsigned long long)arg1;
- (void)aggregateMoment:(id)arg0 refresh:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)queryMoment:(id)arg0 orderType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)startScanWithILAAssetList:(id)arg0 progress:(id /* block */)arg1 finish:(id /* block */)arg2 priority:(unsigned long long)arg3 increase:(BOOL)arg4 saveDB:(BOOL)arg5;
- (id)scanModelManager;
- (long long)lastScanState;
- (id)prepareQueue;
- (void)setLastScanState:(long long)arg0;
- (unsigned long long)innerState;
- (void)setInnerState:(unsigned long long)arg0;
- (struct shared_ptr<ILAScanProgressImpl> { struct ILAScanProgressImpl *x0; struct __shared_weak_count *x1; })progressImplWithCallback:(id /* block */)arg0;
- (struct shared_ptr<ILAScanFinishImpl> { struct ILAScanFinishImpl *x0; struct __shared_weak_count *x1; })finishImplWithCallback:(id /* block */)arg0;
- (void)prepareCV:(id)arg0 completion:(id /* block */)arg1;
- (id)momentQueue;
- (struct vector<std::shared_ptr<ILASDK::Asset>, std::allocator<std::shared_ptr<ILASDK::Asset>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<ILASDK::Asset> *, std::allocator<std::shared_ptr<ILASDK::Asset>>> { void *x0; } x2; })convertAssets:(id)arg0 filter:(id /* block */)arg1;
- (struct vector<std::shared_ptr<ILASDK::MomentConfig>, std::allocator<std::shared_ptr<ILASDK::MomentConfig>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<ILASDK::MomentConfig> *, std::allocator<std::shared_ptr<ILASDK::MomentConfig>>> { void *x0; } x2; })convertMomentConfigs:(id)arg0;
- (struct shared_ptr<ILAMomentFinishImpl> { struct ILAMomentFinishImpl *x0; struct __shared_weak_count *x1; })momemtImplWithCallback:(id /* block */)arg0;
- (id)tagMapping;
- (void)setMomentQueue:(id)arg0;
- (void)setPrepareQueue:(id)arg0;
- (void)setScanModelManager:(id)arg0;
- (id)frameModel;
- (void)setFrameModel:(id)arg0;
- (id)decodeModel;
- (id)sortModel;
- (void)setTagMapping:(id)arg0;
- (void)stopScan;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setSemaphore:(id)arg0;
- (id)delegate;
- (long long)scanState;
- (void)setDelegate:(id)arg0;
- (void)updateAssets:(id)arg0;
- (id).cxx_construct;
- (void)deleteAssets:(id)arg0;
- (void)releaseMemory;
- (id)scanQueue;
- (void)setScanQueue:(id)arg0;
- (void)cancelScan;
- (int)beginScan;

@end
