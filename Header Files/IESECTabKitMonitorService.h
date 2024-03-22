//
//     Generated by private class-dump
//

@class IESECTabKitTimingCategory, NSString, IESECServiceProxy, NSMutableDictionary, IESECTabKitTimingMetric;
@protocol IESECTabKitDataService;

@interface IESECTabKitMonitorService : IESECTabKitService <IESECTabKitMonitorService> {
    double _tabKitCreateTime;
    NSMutableDictionary *_tabElementTimingDict;
    IESECTabKitTimingCategory *_category;
    IESECTabKitTimingMetric *_metric;
    IESECServiceProxy<IESECTabKitDataService> *_dataService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECTabKitTimingCategory *category;
@property (retain, nonatomic) IESECTabKitTimingMetric *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataService;
- (void)setDataService:(id)arg0;
- (void)reportWithEventName:(id)arg0 metric:(id)arg1 category:(id)arg2;
- (void)configCategoryWithParameters:(id)arg0;
- (void)reportFirstScreenWithTabPerf:(id)arg0;
- (id)timingModelForTabModel:(id)arg0;
- (void)tabKitDidCreate;
- (void)tabElementDidCreate:(id)arg0;
- (void)tabElementDidEnter:(id)arg0;
- (void)tabElementDidLeave:(id)arg0;
- (void)tabDataRequestDidStart:(id)arg0;
- (void)tabDataRequestDidEnd:(id)arg0;
- (void)tabHybridViewDidCreate:(id)arg0;
- (void)tabHybridViewDidFinishLoad:(id)arg0;
- (void)reportSwitchTabWithTabPerf:(id)arg0;
- (id)tabElementKey:(id)arg0;
- (id)metric;
- (id)init;
- (id)category;
- (void).cxx_destruct;
- (void)setCategory:(id)arg0;
- (void)setMetric:(id)arg0;

@end