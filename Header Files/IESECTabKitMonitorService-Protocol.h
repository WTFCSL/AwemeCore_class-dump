//
//     Generated by private class-dump
//

@class IESECTabKitTimingCategory, IESECTabKitTimingMetric;

@protocol IESECTabKitMonitorService <NSObject>

@property (retain, nonatomic) IESECTabKitTimingCategory *category;
@property (retain, nonatomic) IESECTabKitTimingMetric *metric;

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
- (id)metric;
- (id)category;
- (void)setCategory:(id)arg0;
- (void)setMetric:(id)arg0;

@end