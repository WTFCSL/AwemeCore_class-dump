//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEPadLandscapeTrackService : NSObject {
    BOOL _wasVertical;
    double _lastUpdateTimeStamp;
    NSMutableDictionary *_currentReportDurationInfo;
}

@property (nonatomic) double lastUpdateTimeStamp;
@property (nonatomic) BOOL wasVertical;
@property (retain, nonatomic) NSMutableDictionary *currentReportDurationInfo;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)GetService;
+ (id)sharedInstance;

- (void)didAppChangedOrientation;
- (void)didAppEnterBackground;
- (void)willAppEnterForeground;
- (void)willAppTerminate;
- (void)onDeviceOrientationDidChange:(id)arg0;
- (void)setLastUpdateTimeStamp:(double)arg0;
- (void)setWasVertical:(BOOL)arg0;
- (void)updateReportInfo;
- (void)trackScreenTime;
- (void)trackDeviceRtated;
- (id)currentReportDurationInfo;
- (void)resetDurationInfo;
- (double)lastUpdateTimeStamp;
- (BOOL)wasVertical;
- (void)updateReportDurationInfoWithTimeInterval:(double)arg0 toScreenTimeOrientation:(unsigned long long)arg1;
- (id)getDeviceDirection;
- (void)setCurrentReportDurationInfo:(id)arg0;
- (void).cxx_destruct;
- (void)startTracking;

@end
