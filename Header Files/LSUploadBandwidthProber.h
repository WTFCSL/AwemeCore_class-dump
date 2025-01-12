//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSOperationQueue, LSUploadBandwidthAliveKeeper, NSObject;
@protocol OS_dispatch_semaphore;

@interface LSUploadBandwidthProber : NSObject {
    struct unique_ptr<avframework::RTMPUploadBWProbe, std::default_delete<avframework::RTMPUploadBWProbe>> { struct __compressed_pair<avframework::RTMPUploadBWProbe *, std::default_delete<avframework::RTMPUploadBWProbe>> { struct RTMPUploadBWProbe *__value_; } __ptr_; } rtmpUploadBWTest;
    struct unique_ptr<avframework::LSUploadBandwidthProberObs, std::default_delete<avframework::LSUploadBandwidthProberObs>> { struct __compressed_pair<avframework::LSUploadBandwidthProberObs *, std::default_delete<avframework::LSUploadBandwidthProberObs>> { struct LSUploadBandwidthProberObs *__value_; } __ptr_; } rtmpUploadBWTestObs;
    NSObject<OS_dispatch_semaphore> *_optimumSignal;
    NSString *_tcUrl;
    BOOL _fixAnr;
    BOOL _enableInternalTimer;
    BOOL _enableDnsOptimize;
    int _probeIpCostTime;
    NSString *_url;
    NSString *_historyResolution;
    NSString *_maxResolution;
    NSDictionary *_sdkParams;
    id /* block */ _updateOptimumIPAddressBlock;
    id /* block */ _excuteWithCommandAndUserInfoBlock;
    id /* block */ _bandwidthStateBlock;
    id /* block */ _bandwidthResultBlock;
    id /* block */ _bandwidthResultEventBlock;
    NSString *_sessionId;
    NSDictionary *_nodeProbeInfo;
    NSOperationQueue *_taskOperationQueue;
    LSUploadBandwidthAliveKeeper *_myAliveKeeper;
}

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *nodeProbeInfo;
@property (retain, nonatomic) NSOperationQueue *taskOperationQueue;
@property (nonatomic) int probeIpCostTime;
@property (retain, nonatomic) LSUploadBandwidthAliveKeeper *myAliveKeeper;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *historyResolution;
@property (copy, nonatomic) NSString *maxResolution;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (nonatomic) BOOL fixAnr;
@property (nonatomic) BOOL enableInternalTimer;
@property (nonatomic) BOOL enableDnsOptimize;
@property (copy, nonatomic) id /* block */ updateOptimumIPAddressBlock;
@property (copy, nonatomic) id /* block */ excuteWithCommandAndUserInfoBlock;
@property (copy, nonatomic) id /* block */ bandwidthStateBlock;
@property (copy, nonatomic) id /* block */ bandwidthResultBlock;
@property (copy, nonatomic) id /* block */ bandwidthResultEventBlock;

- (id)convertToJsonData:(id)arg0 compress:(BOOL)arg1;
- (id)getTcUrl;
- (id)sdkParams;
- (void)setEnableInternalTimer:(BOOL)arg0;
- (id /* block */)bandwidthStateBlock;
- (id)taskOperationQueue;
- (id /* block */)bandwidthResultBlock;
- (void)__setupRtmpUploadBWTest;
- (void)__updateRtmpOpt;
- (id)__shouldUpdateOptimumURL;
- (id)__getNodeOptimizedTrackInfo;
- (void)__sendLogInfoToRtmpUploadBWTest:(id)arg0;
- (id)__setSessionIdForUrl:(id)arg0;
- (id)modifyRtmpUrlWithPorts:(id)arg0 sdkParams:(id)arg1;
- (id)historyResolution;
- (BOOL)fixAnr;
- (BOOL)enableInternalTimer;
- (id)myAliveKeeper;
- (id /* block */)excuteWithCommandAndUserInfoBlock;
- (id)__getNodeProbeIpWithTimeoutAndHost:(id)arg0;
- (id)__getNodeProbeIpWithHost:(id)arg0;
- (id /* block */)updateOptimumIPAddressBlock;
- (void)setProbeIpCostTime:(int)arg0;
- (int)probeIpCostTime;
- (void)setHistoryResolution:(id)arg0;
- (void)setMaxResolution:(id)arg0;
- (void)setFixAnr:(BOOL)arg0;
- (BOOL)enableDnsOptimize;
- (void)setEnableDnsOptimize:(BOOL)arg0;
- (void)setUpdateOptimumIPAddressBlock:(id /* block */)arg0;
- (void)setExcuteWithCommandAndUserInfoBlock:(id /* block */)arg0;
- (void)setBandwidthStateBlock:(id /* block */)arg0;
- (void)setBandwidthResultBlock:(id /* block */)arg0;
- (id /* block */)bandwidthResultEventBlock;
- (void)setBandwidthResultEventBlock:(id /* block */)arg0;
- (id)nodeProbeInfo;
- (void)setNodeProbeInfo:(id)arg0;
- (void)setTaskOperationQueue:(id)arg0;
- (void)setMyAliveKeeper:(id)arg0;
- (void)setSdkParams:(id)arg0;
- (id)init;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (void)stop;
- (void)setUrl:(id)arg0;
- (void)start;
- (id)url;
- (id).cxx_construct;
- (id)maxResolution;

@end
