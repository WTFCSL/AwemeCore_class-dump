//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface HMDAppExitReasonDetector : NSObject

@property (class, retain, nonatomic) NSMutableSet *delegatesSet;
@property (class, nonatomic) BOOL finishDetection;
@property (class) double systemStateUpdateInterval;

+ (BOOL)finishDetection;
+ (void)setFinishDetection:(BOOL)arg0;
+ (BOOL)findOrCreateDirectoryInPath:(id)arg0;
+ (void)sceneDidUpdate;
+ (void)uploadLastMemoryInfoScene;
+ (id)memoryLogPreparedPath;
+ (void)uploadPreparedFiles;
+ (void)uploadMemoryInfoAtPath:(id)arg0 scene:(id)arg1 retryCount:(unsigned long long)arg2 byUser:(BOOL)arg3;
+ (void)cleanupIdentifier:(id)arg0;
+ (BOOL)shouldUploadMemoryLog;
+ (void)setSystemStateUpdateInterval:(double)arg0;
+ (id)delegatesSet;
+ (void)excludedCompleteAndDetectOOMCrash:(id)arg0;
+ (void)excludedCompleteWithoutOOMCrash:(id)arg0;
+ (void)excludedCompleteAndDetectUserTerminate:(id)arg0;
+ (void)finishDetectionWithReason:(int)arg0 info:(id)arg1;
+ (void)excludedCompleteAndDetectBackgroundExit:(id)arg0;
+ (id)binaryInfoFromLastTimeBinaryImageSet;
+ (void)uploadMemoryInfo;
+ (void)deleteMemoryInfo;
+ (int)getOOMCrashInfo:(id *)arg0;
+ (void)checkRebootTypeFinishWithInfo:(id)arg0 reason:(int)arg1;
+ (void)storeOneTimeData_lock;
+ (void)dispatchStoreOneTimeCurrentDataToQueueWithAction:(id)arg0;
+ (void)initializeOnce_noLock;
+ (void)turnOnApplicationStateUpdate_noLock;
+ (void)turnOnWatchDogStateObserver;
+ (void)turnOnThermalStateObserver;
+ (void)turnOnCPUExceptonObserver;
+ (void)startSdklog;
+ (void)enableTimer_noLock;
+ (void)disableTimer_noLock;
+ (void)turnOffApplicationStateUpdate_noLock;
+ (void)turnOffWatchDogStateObserver;
+ (void)turnOffThermalStateObserver;
+ (void)turnOffCPUExceptonObserver;
+ (void)endSdklog;
+ (void)storeCurrentData_lock;
+ (id)memoryLogProcessingPath;
+ (void)pendingOptimizationRequest_noLock;
+ (void)addAppStateObserverWithSelf;
+ (void)slardarMallocInuse;
+ (void)willEnterForegroundUpdate;
+ (void)didEnterBackgroundUpdate;
+ (void)receiveTerminateUpdate;
+ (void)willResignActiveUpdate;
+ (void)didBecomeActiveUpdate;
+ (unsigned long long)lifeCycleType;
+ (void)checkAPPStateObserverWithAppdelegateClass:(Class)arg0 sceneDelegateClass:(Class)arg1 lifeCycleType:(unsigned long long)arg2;
+ (void)receiveForegroundUpdate;
+ (void)receiveBackgroundUpdate;
+ (void)weakWatchdogTimeout;
+ (void)watchdogRecover;
+ (void)CPUExceptionHappenning;
+ (void)CPUExceptionRecover;
+ (void)thermalStateChangeed:(id)arg0;
+ (void)triggerCurrentEnvironmentInformationSaving;
+ (void)triggerCurrentEnvironmentInformationSavingWithAction:(id)arg0;
+ (BOOL)saveData:(id)arg0;
+ (void)uploadMemoryInfoAsync;
+ (void)deleteLastMemoryInfo;
+ (void)setAppExitFlagBefroHeimdallr;
+ (void)updateTimeInterval:(double)arg0;
+ (id)logFileDictionary;
+ (void)triggerCurrentEnvironmentInfomationSaving;
+ (void)triggerCurrentEnvironmentInfomationSavingWithAction:(id)arg0;
+ (double)systemStateUpdateInterval;
+ (void)setDelegatesSet:(id)arg0;
+ (BOOL)isFixNoDataMisjudgment;
+ (void)setIsFixNoDataMisjudgment:(BOOL)arg0;
+ (BOOL)isNeedBinaryInfo;
+ (void)setIsNeedBinaryInfo:(BOOL)arg0;
+ (int)appRelaunchReason;
+ (void)watchdogTimeout;
+ (void)deregisterDelegate:(id)arg0;
+ (void)stop;
+ (void)resetAppState;
+ (Class)sceneDelegateClass;
+ (void)registerDelegate:(id)arg0;
+ (void)start;
+ (void)timerCallback;

- (void)MOCK_applicationWillTerminate:(id)arg0;
- (void)MOCK_sceneWillEnterForeground:(id)arg0;
- (void)MOCK_sceneDidEnterBackground:(id)arg0;
- (void)MOCK_sceneWillResignActive:(id)arg0;
- (void)MOCK_sceneDidBecomeActive:(id)arg0;
- (void)MOCK_applicationWillEnterForeground:(id)arg0;
- (void)MOCK_applicationDidEnterBackground:(id)arg0;
- (void)MOCK_applicationWillResignActive:(id)arg0;
- (void)MOCK_applicationDidBecomeActive:(id)arg0;

@end
