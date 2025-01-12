//
//     Generated by private class-dump
//

@interface AWEFeedScreenCaptureMonitor : NSObject {
    BOOL _screenRecording;
}

@property (nonatomic) BOOL screenRecording;

+ (id)sharedInstance;
+ (void)setup;

- (void)userDidTakeScreenshot:(id)arg0;
- (void)updateRecordState;
- (void)trackCurrentABTestData;
- (void)trackCurrentSettingsData;
- (void)trackCurrentUITree;
- (long long)screenShotDumpViewTreeCount;
- (id)dumpViewTree;
- (void)trackScreenRecordingEvent;
- (id)dumpViewTree:(id)arg0 depth:(long long)arg1 maxDepth:(long long)arg2;
- (void)changeLogLevelIfNeed;
- (id)init;
- (void)setupObservers;
- (void)dealloc;
- (BOOL)screenRecording;
- (void)setScreenRecording:(BOOL)arg0;
- (void)setupNotifications;

@end
