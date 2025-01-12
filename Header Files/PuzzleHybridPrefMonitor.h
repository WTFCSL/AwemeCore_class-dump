//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, NSString, PuzzleHybridPrefSampler, NSObject;
@protocol OS_dispatch_queue, IESHYContainerProtocol, OS_dispatch_semaphore, PuzzleHybridMonitorReporter, PuzzleHybridPrefSamplerProtocol;

@interface PuzzleHybridPrefMonitor : NSObject <PuzzleHybridPrefSamplerProtocol> {
    BOOL _enableAdditionalReport;
    int _recordTimes;
    NSObject<OS_dispatch_semaphore> *_lock;
    PuzzleHybridPrefSampler *_prefSampler;
    id<PuzzleHybridMonitorReporter> _reporter;
    NSMutableDictionary *_preSampleDic;
    id<PuzzleHybridPrefSamplerProtocol> _prefSamplerService;
    unsigned long long _sampleLevel;
    NSObject<OS_dispatch_queue> *_prefQueue;
    long long _openTime;
    id<IESHYContainerProtocol> _hybridContainer;
    NSTimer *_fpsTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) PuzzleHybridPrefSampler *prefSampler;
@property (retain, nonatomic) id<PuzzleHybridMonitorReporter> reporter;
@property (retain, nonatomic) NSMutableDictionary *preSampleDic;
@property (retain, nonatomic) id<PuzzleHybridPrefSamplerProtocol> prefSamplerService;
@property (nonatomic) unsigned long long sampleLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prefQueue;
@property (nonatomic) BOOL enableAdditionalReport;
@property (nonatomic) long long openTime;
@property (weak, nonatomic) id<IESHYContainerProtocol> hybridContainer;
@property (nonatomic) int recordTimes;
@property (retain, nonatomic) NSTimer *fpsTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)hybridContainer;
- (void)handleMemoryWarning;
- (long long)openTime;
- (void)setHybridContainer:(id)arg0;
- (void)setOpenTime:(long long)arg0;
- (void)setSampleLevel:(unsigned long long)arg0;
- (void)recordHybridContainerPrefWithURL:(id)arg0 aid:(id)arg1 containerId:(id)arg2 moment:(unsigned long long)arg3 containerType:(unsigned long long)arg4;
- (void)recordHybridContainerPrefWithURL:(id)arg0 aid:(id)arg1 container:(id)arg2 containerId:(id)arg3 moment:(unsigned long long)arg4 containerType:(unsigned long long)arg5;
- (id)initWithReporter:(id)arg0 monitorConfig:(id)arg1;
- (unsigned long long)sampleLevel;
- (BOOL)enableAdditionalReport;
- (id)prefSamplerService;
- (void)defaultRecordHybridContainerPrefWithURL:(id)arg0 aid:(id)arg1 containerId:(id)arg2 moment:(unsigned long long)arg3 containerType:(unsigned long long)arg4;
- (id)prefSampler;
- (void)recordHybridContainerIncreasePrefWithURL:(id)arg0 aid:(id)arg1 containerId:(id)arg2 moment:(unsigned long long)arg3 containerType:(unsigned long long)arg4 defaultSampleInfo:(id)arg5;
- (void)recordPerfFPSWithURL:(id)arg0 containerId:(id)arg1 aid:(id)arg2 containerType:(unsigned long long)arg3;
- (void)recordHybridInstanceMonitorWithURL:(id)arg0 aid:(id)arg1 containerId:(id)arg2 moment:(unsigned long long)arg3 containerType:(unsigned long long)arg4;
- (void)recordHybridLynxJSThreadMonitorWithURL:(id)arg0 aid:(id)arg1 containerId:(id)arg2 moment:(unsigned long long)arg3 containerType:(unsigned long long)arg4;
- (id)preSampleDic;
- (void)startFPSTimer:(id)arg0 containerId:(id)arg1 aid:(id)arg2 containerType:(unsigned long long)arg3;
- (void)stopFPSTimer;
- (void)setRecordTimes:(int)arg0;
- (int)recordTimes;
- (void)setFpsTimer:(id)arg0;
- (id)fpsTimer;
- (void)recordHybridContainerIncreasePrefWithURL:(id)arg0 aid:(id)arg1 containerId:(id)arg2 moment:(unsigned long long)arg3 containerType:(unsigned long long)arg4;
- (void)setPrefSampler:(id)arg0;
- (void)setPreSampleDic:(id)arg0;
- (void)setPrefSamplerService:(id)arg0;
- (id)prefQueue;
- (void)setPrefQueue:(id)arg0;
- (void)setEnableAdditionalReport:(BOOL)arg0;
- (void).cxx_destruct;
- (id)reporter;
- (id)lock;
- (void)setReporter:(id)arg0;
- (void)setLock:(id)arg0;

@end
