//
//     Generated by private class-dump
//

@interface CJPayHybridPerformanceModel : NSObject {
    double _callAPITime;
    double _createFinishdedTime;
    double _startLoadURLTime;
    double _pageStartedTime;
    double _pageLoadFinishedTime;
}

@property (nonatomic) double callAPITime;
@property (nonatomic) double createFinishdedTime;
@property (nonatomic) double startLoadURLTime;
@property (nonatomic) double pageStartedTime;
@property (nonatomic) double pageLoadFinishedTime;

- (double)callAPITime;
- (long long)hybridContainerPrepareTime;
- (double)pageStartedTime;
- (double)createFinishdedTime;
- (double)startLoadURLTime;
- (double)pageLoadFinishedTime;
- (long long)hybridContainerCreatedFinishedTime;
- (long long)hybridStartURLLoadTime;
- (long long)hybridPageStartedTime;
- (long long)hybridPageLoadFinishedTime;
- (void)setCallAPITime:(double)arg0;
- (void)setCreateFinishdedTime:(double)arg0;
- (void)setStartLoadURLTime:(double)arg0;
- (void)setPageStartedTime:(double)arg0;
- (void)setPageLoadFinishedTime:(double)arg0;

@end
