//
//     Generated by private class-dump
//

@class IESLiveThreadSafeDictionary, NSString, NSDictionary, NSObject, IESLivePEFeatureSet;
@protocol OS_dispatch_queue, IESLiveMonitor;

@interface IESLivePEDecisionService : NSObject <IESLivePEFeatureSetDelegate, IESLivePEDecisionObserver, IESLivePEDecisionProvider, IESLivePEFeatureCollector> {
    NSDictionary *_strategyDic;
    NSObject<OS_dispatch_queue> *_processQueue;
    IESLivePEFeatureSet *_featureSet;
    IESLiveThreadSafeDictionary *_observerDic;
    id<IESLiveMonitor> _monitor;
    double _totalDecisionCostTime;
    long long _decisionCount;
    double _minDecisionCostTime;
    double _maxDecisionCostTime;
}

@property (retain, nonatomic) NSDictionary *strategyDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) IESLivePEFeatureSet *featureSet;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *observerDic;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) double totalDecisionCostTime;
@property (nonatomic) long long decisionCount;
@property (nonatomic) double minDecisionCostTime;
@property (nonatomic) double maxDecisionCostTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)observerDic;
- (void)setObserverDic:(id)arg0;
- (id)strategyDic;
- (void)setStrategyDic:(id)arg0;
- (void)setProcessQueue:(id)arg0;
- (void)decision:(id)arg0 result:(id)arg1;
- (void)addObserver:(id)arg0 withScene:(id)arg1 features:(id)arg2;
- (id)strategyWithName:(id)arg0;
- (void)addObserver:(id)arg0 withScene:(id)arg1;
- (void)removeObserver:(id)arg0 withScene:(id)arg1;
- (void)collectFeature:(id)arg0 withBoolValue:(BOOL)arg1;
- (void)collectFeature:(id)arg0 withIntValue:(long long)arg1;
- (void)collectFeature:(id)arg0 withDoubleValue:(double)arg1;
- (void)collectFeature:(id)arg0 withStringValue:(id)arg1;
- (void)collectFeature:(id)arg0;
- (void)fetchFeatureFromBackend:(id /* block */)arg0;
- (void)setupEnv;
- (void)setTotalDecisionCostTime:(double)arg0;
- (void)setDecisionCount:(long long)arg0;
- (void)setMinDecisionCostTime:(double)arg0;
- (void)setMaxDecisionCostTime:(double)arg0;
- (void)createDecisionWorkflowWith:(id)arg0 featureSet:(id)arg1 trigger:(id)arg2 completion:(id)arg3;
- (void)inProcessQueue:(id /* block */)arg0;
- (void)trackDecisionResult:(id)arg0;
- (double)totalDecisionCostTime;
- (double)minDecisionCostTime;
- (double)maxDecisionCostTime;
- (void)detectedFeatureChanged:(id)arg0;
- (void)trackDecisionCostTime;
- (id)featureSet;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (long long)decisionCount;
- (void)setFeatureSet:(id)arg0;
- (id)processQueue;

@end
