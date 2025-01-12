//
//     Generated by private class-dump
//

@class AMapCacheFileManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AMapAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_logDispatchQueue;
    NSObject<OS_dispatch_queue> *_uploadDispatchQueue;
    NSMutableDictionary *_componentMapping;
    NSMutableDictionary *_regularExpressionMapping;
    NSMutableDictionary *_logServerStateException;
    NSMutableDictionary *_logServerStateCommon;
    AMapCacheFileManager *_fileManager;
    NSObject<OS_dispatch_group> *_group;
    BOOL _logEnabled;
    BOOL _upLoading;
    NSMutableDictionary *_cacheDataPool;
    long long _currentCacheSize;
}

@property (getter=isUpLoading) BOOL upLoading;
@property (retain, nonatomic) NSMutableDictionary *cacheDataPool;
@property long long currentCacheSize;
@property (nonatomic, getter=isLogEnabled) BOOL logEnabled;

+ (id)errorWithURLError:(id)arg0;
+ (id)sharedInstance;

- (void)setLogEnabled:(BOOL)arg0;
- (void)setUpLoading:(BOOL)arg0;
- (id)waitingUploadDirectorys;
- (BOOL)isUpLoading;
- (void)reportCrash:(id)arg0 withName:(id)arg1 withComponent:(id)arg2;
- (void)logError:(id)arg0 errorInfo:(id)arg1 component:(id)arg2;
- (void)appWillTerminte;
- (void)logEvent:(id)arg0 params:(id)arg1 component:(id)arg2;
- (void)syncWritToFileFromMemory;
- (void)writToFileFromMemory;
- (void)writToFileFromMemoryDataFileName:(id)arg0;
- (void)registerProductCrashInfoFilterWithComponent:(id)arg0 forKey:(id)arg1;
- (void)requestManifestWithComponent:(id)arg0;
- (void)clearLogsWithType:(long long)arg0 subDirectoryName:(id)arg1 complete:(id /* block */)arg2;
- (id)nameWithLogType:(long long)arg0;
- (void)logEvent:(id)arg0 params:(id)arg1 component:(id)arg2 customFileName:(id)arg3;
- (BOOL)isLogServerEnableWithComponent:(id)arg0 type:(long long)arg1;
- (id)uploadDataWithType:(long long)arg0 logArray:(id)arg1;
- (BOOL)isUploadSucceededWithResponseData:(id)arg0;
- (void)clearFileOrDirectoryWithPath:(id)arg0 complete:(id /* block */)arg1;
- (void)logsWithType:(long long)arg0 subDirectoryName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadLogWithType:(long long)arg0 subDirectoryName:(id)arg1 complete:(id /* block */)arg2;
- (void)saveLogServerStateWithResponseData:(id)arg0 component:(id)arg1;
- (void)logCrash:(id)arg0 crashInfo:(id)arg1 component:(id)arg2;
- (BOOL)canAppendLogDataWithLength:(unsigned long long)arg0 queueLength:(unsigned long long)arg1;
- (void)registerProductWithComponent:(id)arg0;
- (void)registerProductWithComponentWithoutManifestRequest:(id)arg0;
- (void)clearLogWithType:(long long)arg0 complete:(id /* block */)arg1;
- (void)clearLogsWithType:(long long)arg0 component:(id)arg1 complete:(id /* block */)arg2;
- (void)clearAllLogsComplete:(id /* block */)arg0;
- (void)removeLogWithType:(long long)arg0 component:(id)arg1 fileName:(id)arg2 complete:(id /* block */)arg3;
- (id)getCacheItemDataWithLogType:(long long)arg0 component:(id)arg1 fileName:(id)arg2;
- (unsigned long long)getCacheItemCountWithLogType:(long long)arg0 component:(id)arg1;
- (void)logURLError:(id)arg0 forURL:(id)arg1 component:(id)arg2;
- (void)logRESTError:(id)arg0 forURL:(id)arg1 component:(id)arg2;
- (void)uploadLogWithType:(long long)arg0;
- (void)uploadLogWithType:(long long)arg0 component:(id)arg1 complete:(id /* block */)arg2;
- (void)saveExceptionStateWithFlag:(BOOL)arg0 component:(id)arg1;
- (void)saveEventStateWithFlag:(BOOL)arg0 component:(id)arg1;
- (id)crashComponentWithCrashInfo:(id)arg0;
- (void)logsWithType:(long long)arg0 completionHandler:(id /* block */)arg1;
- (id)cacheDataPool;
- (void)setCacheDataPool:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)appDidEnterBackground;
- (BOOL)isLogEnabled;
- (long long)currentCacheSize;
- (void)setCurrentCacheSize:(long long)arg0;

@end
