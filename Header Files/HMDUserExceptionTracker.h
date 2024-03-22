//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, HMInstance, HMDThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDUserExceptionTracker : HMDTracker <HMDExceptionReporterDataProvider> {
    NSArray *_andConditions;
    HMDThreadSafeDictionary *_timestampMap;
    NSObject<OS_dispatch_queue> *_userExceptionQueue;
    BOOL _addNetScheduleNoti;
    unsigned long long _maxUploadCount;
    NSDictionary *_typeBlockList;
    NSArray *_typeAllowList;
    HMInstance *_instance;
}

@property (nonatomic) unsigned long long maxUploadCount;
@property (retain) NSDictionary *typeBlockList;
@property (retain, nonatomic) NSArray *typeAllowList;
@property (nonatomic) BOOL addNetScheduleNoti;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)arg0;
- (BOOL)needSyncStart;
- (BOOL)exceptionDataSource;
- (long long)dbMaxSize;
- (void)trackAllThreadsLogExceptionType:(id)arg0 skippedDepth:(unsigned long long)arg1 customParams:(id)arg2 filters:(id)arg3 callback:(id /* block */)arg4;
- (void)trackUserExceptionWithExceptionType:(id)arg0 title:(id)arg1 subTitle:(id)arg2 customParams:(id)arg3 filters:(id)arg4 callback:(id /* block */)arg5;
- (id)getBacktracesWithKeyThread:(unsigned int)arg0 skippedDepth:(unsigned long long)arg1 needAllThreads:(BOOL)arg2;
- (void)trackUserExceptionWithType:(id)arg0 backtracesArray:(id)arg1 customParams:(id)arg2 filters:(id)arg3 callback:(id /* block */)arg4;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)arg0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)arg0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)arg0;
- (void)dropExceptionDataIgnoreHermas;
- (void)setMaxUploadCount:(unsigned long long)arg0;
- (unsigned long long)maxUploadCount;
- (id)dealNotDebugRealPerformanceData;
- (void)trackThreadLogWithBacktraceParameter:(id)arg0 callback:(id /* block */)arg1;
- (void)trackBaseExceptionWithBacktraceParameter:(id)arg0 callback:(id /* block */)arg1;
- (id)getBacktracesWithParameter:(id)arg0;
- (void)trackThreadLogWithParameter:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)addNetScheduleNoti;
- (id)typeBlockList;
- (void)setTypeBlockList:(id)arg0;
- (id)typeAllowList;
- (void)setTypeAllowList:(id)arg0;
- (id)checkIfAvailableForType:(id)arg0 appID:(id)arg1;
- (BOOL)checkException:(id)arg0 appID:(id)arg1 callback:(id /* block */)arg2;
- (void)didCollectOneExceptionRecordIfAvailable:(id)arg0 log:(id)arg1 title:(id)arg2 subTitle:(id)arg3 symbol:(BOOL)arg4 addressList:(id)arg5 filters:(id)arg6 customParams:(id)arg7 viewHierarchy:(id)arg8 asyncTimes:(int)arg9 aggregationKey:(id)arg10 appID:(id)arg11 callback:(id /* block */)arg12;
- (BOOL)checkException:(id)arg0 callback:(id /* block */)arg1;
- (void)didCollectOneExceptionRecordIfAvailable:(id)arg0 log:(id)arg1 title:(id)arg2 subTitle:(id)arg3 symbol:(BOOL)arg4 addressList:(id)arg5 filters:(id)arg6 customParams:(id)arg7 viewHierarchy:(id)arg8 asyncTimes:(int)arg9 aggregationKey:(id)arg10 callback:(id /* block */)arg11;
- (void)_internalTrackExceptionWithType:(id)arg0 skippedDepth:(unsigned long long)arg1 keyThread:(unsigned int)arg2 needAllThreads:(BOOL)arg3 customParams:(id)arg4 filters:(id)arg5 callback:(id /* block */)arg6;
- (void)trackUserExceptionWithExceptionType:(id)arg0 title:(id)arg1 subTitle:(id)arg2 addressList:(id)arg3 customParams:(id)arg4 filters:(id)arg5 callback:(id /* block */)arg6;
- (void)uploadUserExceptionLogIfNeeded;
- (void)setAddNetScheduleNoti:(BOOL)arg0;
- (void)recieveNetworkScheduleNotification:(id)arg0;
- (id)getUserExceptionDataWithRecords:(id)arg0;
- (id)checkIfAvailableForType:(id)arg0;
- (void)trackAllThreadsLogExceptionType:(id)arg0 keyThread:(unsigned int)arg1 skippedDepth:(unsigned long long)arg2 customParams:(id)arg3 filters:(id)arg4 callback:(id /* block */)arg5;
- (void)trackCurrentThreadLogExceptionType:(id)arg0 skippedDepth:(unsigned long long)arg1 customParams:(id)arg2 filters:(id)arg3 callback:(id /* block */)arg4;
- (void)trackMainThreadLogExceptionType:(id)arg0 skippedDepth:(unsigned long long)arg1 customParams:(id)arg2 filters:(id)arg3 callback:(id /* block */)arg4;
- (void)trackThreadLogExceptionType:(id)arg0 thread:(unsigned int)arg1 skippedDepth:(unsigned long long)arg2 customParams:(id)arg3 filters:(id)arg4 callback:(id /* block */)arg5;
- (id)getUserExceptionLogWithType:(id)arg0 skippedDepth:(unsigned long long)arg1 keyThread:(unsigned int)arg2 needAllThreads:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)trackUserExceptionWithType:(id)arg0 Log:(id)arg1 CustomParams:(id)arg2 filters:(id)arg3 callback:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;
- (id)instance;
- (unsigned long long)exceptionType;
- (void)start;
- (void)dealloc;
- (void)setInstance:(id)arg0;
- (Class)storeClass;

@end