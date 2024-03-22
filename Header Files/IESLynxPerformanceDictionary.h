//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, IESLynxPerformanceContext, BDHMRepeatRecordFilter, NSObject;
@protocol OS_dispatch_queue;

@interface IESLynxPerformanceDictionary : IESLynxBasePerfDictionary <BDHMRepeatRecordFilterDelegate> {
    NSString *_bid;
    NSString *_containerBid;
    NSString *_containerName;
    NSMutableDictionary *_overviewDic;
    NSMutableDictionary *_pendingParams;
    NSObject<OS_dispatch_queue> *_messageDispatchQueue;
    IESLynxPerformanceContext *_context;
    BDHMRepeatRecordFilter *_repeatFilter;
}

@property (copy) NSString *containerName;
@property (retain, nonatomic) NSMutableDictionary *overviewDic;
@property (retain, nonatomic) NSMutableDictionary *pendingParams;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageDispatchQueue;
@property (retain, nonatomic) IESLynxPerformanceContext *context;
@property (retain, nonatomic) BDHMRepeatRecordFilter *repeatFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attachNativeBaseContextBlock:(id /* block */)arg0;
- (void)reportContainerError:(id)arg0 errorCode:(long long)arg1 errorMsg:(id)arg2 bizTag:(id)arg3;
- (void)attachContainerUUID:(id)arg0;
- (void)detachContainerUUID:(id)arg0;
- (void)setBid:(id)arg0;
- (void)setContainerBid:(id)arg0;
- (id)bid;
- (id)containerBid;
- (void)reportResourceLoaderEvent:(id)arg0 info:(id)arg1;
- (void)collectEventCreated:(id)arg0;
- (void)fetchFinalBid:(id /* block */)arg0;
- (void)fetchContainerData:(id /* block */)arg0;
- (void)bdhmReportAggregationRecord:(id)arg0;
- (void)setNavigationID:(id)arg0;
- (id)fetchCurrentUrl;
- (id)fetchCurrentNavID;
- (void)coverWithDic:(id)arg0;
- (void)setContainerReuse;
- (void)reportBlankWithDic:(id)arg0;
- (void)reportNavigationStart;
- (BOOL)customReportRemoveDuplication:(id)arg0;
- (id)sdkMonitorCommonParams;
- (id)bdwm_virtualAid;
- (void)setBdwm_virtualAid:(id)arg0;
- (void)coverClientParams:(id)arg0 async:(BOOL)arg1;
- (id)overviewDic;
- (void)setOverviewDic:(id)arg0;
- (id)pendingParams;
- (void)addClientParams:(id)arg0 paramsKey:(id)arg1 addType:(long long)arg2 async:(BOOL)arg3;
- (id)formatORIGDic:(id)arg0;
- (void)setPendingParams:(id)arg0;
- (void)feCustomReportRequestError:(id)arg0;
- (void)reportPerformance;
- (void)reportDirectlyWithRemoveDuplicatedDic:(id)arg0 evType:(id)arg1;
- (void)reportCustomEventFromLynxCustom:(id)arg0 lynxView:(id)arg1;
- (void)reportHybridInfoWithBid:(id)arg0;
- (long long)attachTS;
- (id)fetchCurrentBid;
- (void)reportCustomWithDic:(id)arg0;
- (void)reportDirectlyWithDic:(id)arg0 evType:(id)arg1;
- (void)reportRequestError:(id)arg0;
- (void)updateAttachTS:(long long)arg0;
- (void)updateDetachTS:(long long)arg0;
- (void)updateLynxCardVersion:(id)arg0;
- (void)updateNavigationID:(id)arg0 url:(id)arg1 lynxView:(id)arg2 startLoadTs:(long long)arg3 loadFinishTs:(long long)arg4 firstScreenTs:(long long)arg5;
- (id)currentPefContext;
- (void)updatePerfContext:(id)arg0;
- (void)reportCacheArrayIfNeeded;
- (BOOL)hasContainerData;
- (id)repeatFilter;
- (id)messageDispatchQueue;
- (id)formatWithDic:(id)arg0 evType:(id)arg1;
- (void)prepareCoverForNavigationID:(id)arg0 paramsKey:(id)arg1;
- (void)reportRequestError:(id)arg0 isCustom:(BOOL)arg1;
- (void)reportDirectlyWithEventName:(id)arg0 clientMetric:(id)arg1 clientCategory:(id)arg2 extra:(id)arg3 url:(id)arg4;
- (void)coverWithEventName:(id)arg0 clientMetric:(id)arg1 clientCategory:(id)arg2 extra:(id)arg3 url:(id)arg4;
- (id)initWithPerfAggregation:(BOOL)arg0;
- (void)reportCurrentPage:(id)arg0 config:(id)arg1;
- (void)setMessageDispatchQueue:(id)arg0;
- (void)setRepeatFilter:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)containerName;
- (id)initWithConfig:(id)arg0;
- (id)context;
- (void)dealloc;
- (void)setContainerName:(id)arg0;

@end