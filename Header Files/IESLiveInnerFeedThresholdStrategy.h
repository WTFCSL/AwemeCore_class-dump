//
//     Generated by private class-dump
//

@class IESLivePEDecisionService, NSDictionary, NSString, NSMutableArray, IESLiveInnerFeedContext;
@protocol IESLiveNetworkQualityInfoService;

@interface IESLiveInnerFeedThresholdStrategy : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnerFeedDisplayAction, IESLiveInnerFeedThresholdStrategyService, IESLivePEDecisionObserver> {
    IESLivePEDecisionService *_decisionService;
    id<IESLiveNetworkQualityInfoService> _networkService;
    IESLiveInnerFeedContext *_context;
    NSMutableArray *_recentTimes;
    NSMutableArray *_recentCPUs;
    NSDictionary *_config;
    long long _maxDecisionCount;
    NSDictionary *_features;
    id /* block */ _decisionCompletion;
}

@property (retain, nonatomic) IESLivePEDecisionService *decisionService;
@property (retain, nonatomic) id<IESLiveNetworkQualityInfoService> networkService;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) NSMutableArray *recentTimes;
@property (retain, nonatomic) NSMutableArray *recentCPUs;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) long long maxDecisionCount;
@property (retain, nonatomic) NSDictionary *features;
@property (copy, nonatomic) id /* block */ decisionCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)decisionService;
- (void)decision:(id)arg0 result:(id)arg1;
- (void)innerFeedDidMountObject:(id)arg0 atIndex:(long long)arg1 lastIndex:(long long)arg2;
- (void)innerFeedWillBeginDragging:(id)arg0;
- (void)innerFeedDidEndDecelerating:(id)arg0;
- (void)innerFeedDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)innerFeedWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (BOOL)matchEnterSource;
- (BOOL)matchStrategy;
- (id /* block */)decisionCompletion;
- (long long)maxDecisionCount;
- (id)recentTimes;
- (id)recentCPUs;
- (void)setDecisionCompletion:(id /* block */)arg0;
- (void)decisionWithCompletion:(id /* block */)arg0;
- (void)addCPURate;
- (void)setDecisionService:(id)arg0;
- (void)setRecentTimes:(id)arg0;
- (void)setRecentCPUs:(id)arg0;
- (void)setMaxDecisionCount:(long long)arg0;
- (id)features;
- (id)initWithContext:(id)arg0;
- (long long)threshold;
- (id)networkService;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)config;
- (id)context;
- (void)setNetworkService:(id)arg0;
- (void)setFeatures:(id)arg0;

@end
