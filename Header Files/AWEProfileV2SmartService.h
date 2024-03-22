//
//     Generated by private class-dump
//

@class NSString, IESCombineFeatureConfig;

@interface AWEProfileV2SmartService : AWEBaseSmartServiceImpl <IESFCEventObserver, AWEProfileV2SmartService> {
    BOOL _hasAddObserver;
    double _lastRunTime;
    IESCombineFeatureConfig *_updateCombineTypeConfig;
    NSString *_latestVisitedItemID;
}

@property (nonatomic) double lastRunTime;
@property (nonatomic) BOOL hasAddObserver;
@property (retain, nonatomic) IESCombineFeatureConfig *updateCombineTypeConfig;
@property (copy) NSString *latestVisitedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onTriggerEvent:(unsigned long long)arg0 params:(id)arg1;
- (void)onWillRunCompletion:(BOOL *)arg0 input:(id)arg1 output:(id)arg2;
- (void)onDidRunCompletion:(BOOL *)arg0 input:(id)arg1 output:(id)arg2;
- (BOOL)injectTruthForData:(id)arg0 withInput:(id)arg1 ext:(id)arg2;
- (BOOL)hasAddObserver;
- (void)setHasAddObserver:(BOOL)arg0;
- (void)setUpdateCombineTypeConfig:(id)arg0;
- (void)setLatestVisitedItemID:(id)arg0;
- (id)updateCombineTypeConfig;
- (id)latestVisitedItemID;
- (BOOL)shouldTriggerPredictForItemID:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (double)lastRunTime;
- (void)setLastRunTime:(double)arg0;

@end
