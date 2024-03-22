//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol ACCSideslipPropPanelTrackerService <NSObject>

@property (readonly, nonatomic) NSDictionary *commonTrackerInfo;

- (void)startPerfMonitor;
- (id)commonTrackerInfo;
- (void)configCommonTrackerInfo:(id)arg0;
- (void)configPropSelectedFromPrefix:(id)arg0;
- (void)configExtraTrackerInfo:(id)arg0;
- (void)setExtraInfoBlock:(id /* block */)arg0 forTrackerMethod:(SEL)arg1;
- (void)setEnterMethod:(id)arg0 forShowState:(long long)arg1;
- (id)enterMethodForShowState:(long long)arg0;
- (BOOL)hasPropShow;
- (void)trackerPanelShow;
- (void)trackerPanelExpose;
- (void)trackerPanelClickDismiss;
- (void)trackerClickMore;
- (void)trackerClickSaveFavorite;
- (void)trackerPropCancelWith:(id)arg0;
- (void)trackerPropClick;
- (void)trackerPropShowWithIndex:(long long)arg0;
- (void)trackerUnavailablePropShowWithIndex:(long long)arg0;
- (void)trackerPropSkipWithShouldReport:(BOOL)arg0;
- (void)trackerDidFinishEffectIconShowingWithParams:(id)arg0;
- (void)trackerSlideslipFetchListDataPerformanceWithDuration:(double)arg0 dataSource:(id)arg1 isCache:(BOOL)arg2 error:(id)arg3;
- (void)stopPerfMonitor;

@end
