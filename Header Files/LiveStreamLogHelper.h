//
//     Generated by private class-dump
//

@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface LiveStreamLogHelper : NSObject {
    id /* block */ _defaultLogCallback;
    BOOL _enableCommonLog;
    id /* block */ _liveStreamLogCallback;
    long long _liveStreamLogFlag;
    NSDictionary *_basicTraceInfo;
    NSObject<OS_dispatch_queue> *_queue;
    void *_LSLogQueueKey;
}

@property (nonatomic) long long liveStreamLogFlag;
@property (copy, nonatomic) id /* block */ liveStreamLogCallback;
@property (copy, nonatomic) NSDictionary *basicTraceInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) void *LSLogQueueKey;
@property (nonatomic) BOOL enableCommonLog;

+ (id)getDictionaryFromString:(id)arg0;
+ (id)sharedInstance;

- (void)setLiveStreamLogFlag:(long long)arg0;
- (void)runSyncOnQueue:(id /* block */)arg0;
- (long long)liveStreamLogFlag;
- (id)basicTraceInfo;
- (void)logKibanaWithKey:(id)arg0 dic:(id)arg1;
- (void)setLiveStreamLogCallback:(id /* block */)arg0;
- (id /* block */)liveStreamLogCallback;
- (BOOL)enableCommonLog;
- (void)logKibanaWithlogLevel:(int)arg0 event:(id)arg1 log:(id)arg2;
- (void)logKibanaWithBasicInfoWithLogLevel:(int)arg0 event:(id)arg1 log:(id)arg2;
- (void)logAlogKibana:(int)arg0 dicLog:(id)arg1;
- (void *)LSLogQueueKey;
- (void)setLSLogQueueKey:(void *)arg0;
- (void)setBasicTraceInfo:(id)arg0;
- (void)setEnableCommonLog:(BOOL)arg0;
- (void)logKibanaWithlogLevel:(int)arg0 log:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)queue;
- (void)setQueue:(id)arg0;
- (id)currentTimestamp;

@end
