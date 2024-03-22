//
//     Generated by private class-dump
//

@class NSMapTable, NSDictionary, NSString, NSLock;

@interface PTYTTNetManager : NSObject <PTYNetworkProtocol> {
    BOOL _reportFilterDur;
    NSLock *_taskLock;
    NSMapTable *_downloadTasks;
    NSDictionary *_rsHostPathMap;
}

@property (nonatomic) BOOL reportFilterDur;
@property (retain, nonatomic) NSLock *taskLock;
@property (retain, nonatomic) NSMapTable *downloadTasks;
@property (retain, nonatomic) NSDictionary *rsHostPathMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)setup:(id)arg0;

- (id)responseWithTTResponse:(id)arg0;
- (void)setTaskLock:(id)arg0;
- (void)request:(id)arg0 method:(id)arg1 headers:(id)arg2 body:(id)arg3 timeout:(double)arg4 callback:(id /* block */)arg5;
- (void)download:(id)arg0 headers:(id)arg1 destPath:(id)arg2 callback:(id /* block */)arg3;
- (void)cancelAllDownload;
- (void)setReportFilterDur:(BOOL)arg0;
- (void)initRequestSmugglingWithSetupInfo:(id)arg0;
- (void)storeTask:(id)arg0 task:(id)arg1;
- (void)reportRSWithCode:(int)arg0;
- (void)setRsHostPathMap:(id)arg0;
- (id)rsHostPathMap;
- (void)smuggleParamsWithBusiness:(id)arg0 Aid:(id)arg1 Result:(id *)arg2;
- (BOOL)reportFilterDur;
- (void)reportRSWithCode:(int)arg0 AndBusiness:(id)arg1 AndDuration:(double)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)taskLock;
- (id)downloadTasks;
- (void)setDownloadTasks:(id)arg0;
- (void)removeTaskForKey:(id)arg0;

@end
