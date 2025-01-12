//
//     Generated by private class-dump
//

@class NSArray, HMInstance, NSString;

@interface HMDUIFrozenTracker : HMDTracker <HMDUIFrozenDetectProtocol, HMDExcludeModule> {
    BOOL _finishDetection;
    BOOL _detected;
    NSArray *_andConditions;
    HMInstance *_instance;
}

@property (retain, nonatomic) NSArray *andConditions;
@property (getter=isFinishDetection) BOOL finishDetection;
@property (getter=isDetected) BOOL detected;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)excludedModule;
+ (id)reportDataForRecords:(id)arg0;
+ (id)aggregateDataForRecords:(id)arg0;
+ (id)sharedTracker;

- (void)updateConfig:(id)arg0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (void)cleanupWithConfig:(id)arg0;
- (id)finishDetectionNotification;
- (BOOL)isFinishDetection;
- (BOOL)isDetected;
- (void)setFinishDetection:(BOOL)arg0;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)arg0;
- (void)dropExceptionData;
- (id)andConditions;
- (void)setAndConditions:(id)arg0;
- (void)didDetectUIFrozenWithData:(id)arg0;
- (id)getUIFrozenDataWithRecords:(id)arg0;
- (id)tableName;
- (void).cxx_destruct;
- (void)stop;
- (id)instance;
- (unsigned long long)exceptionType;
- (void)start;
- (void)setInstance:(id)arg0;
- (Class)storeClass;
- (void)setDetected:(BOOL)arg0;

@end
