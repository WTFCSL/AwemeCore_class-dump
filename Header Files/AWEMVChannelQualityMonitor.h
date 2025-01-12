//
//     Generated by private class-dump
//

@class NSMutableSet, AWEAwemeResponseModel;

@interface AWEMVChannelQualityMonitor : NSObject {
    BOOL _isScrolled;
    AWEAwemeResponseModel *_lastResponseModel;
    NSMutableSet *_trackFilterSet;
}

@property (retain, nonatomic) AWEAwemeResponseModel *lastResponseModel;
@property (retain, nonatomic) NSMutableSet *trackFilterSet;
@property (nonatomic) BOOL isScrolled;

- (void)setLastResponseModel:(id)arg0;
- (id)lastResponseModel;
- (void)trackDataError:(unsigned long long)arg0 requestNums:(long long)arg1 extraParams:(id)arg2;
- (void)trackListRefreshWithRequestDuration:(double)arg0 responseModel:(id)arg1 requestNums:(long long)arg2 feedType:(long long)arg3 pullType:(long long)arg4 error:(id)arg5 extraParams:(id)arg6;
- (void)trackMVChannelEntranceStrategyDuration:(double)arg0 error:(id)arg1 extraParams:(id)arg2;
- (id)paramsForImageMonitor:(id)arg0;
- (BOOL)isScrolled;
- (BOOL)imageHadMonitorWithModel:(id)arg0;
- (unsigned long long)imageErrorTypeWithAwemeModel:(id)arg0;
- (id)trackFilterSet;
- (void)setTrackFilterSet:(id)arg0;
- (void)setIsScrolled:(BOOL)arg0;
- (void).cxx_destruct;

@end
