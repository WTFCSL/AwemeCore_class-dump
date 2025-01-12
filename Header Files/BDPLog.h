//
//     Generated by private class-dump
//

@class BDPThreadSafeArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDPLog : NSObject {
    BOOL _logOnAloneQueue;
    unsigned long long _maxLength;
    BDPThreadSafeArray *_pendingModels;
    BDPThreadSafeArray *_listeners;
    NSObject<OS_dispatch_queue> *_logQueue;
}

@property (retain, nonatomic) BDPThreadSafeArray *pendingModels;
@property (retain, nonatomic) BDPThreadSafeArray *listeners;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic) BOOL logOnAloneQueue;
@property (nonatomic) unsigned long long maxLength;

+ (id)sharedInstance;

- (void)logWithLevel:(unsigned long long)arg0 tag:(id)arg1 fileName:(const char *)arg2 funcName:(const char *)arg3 line:(int)arg4 content:(id)arg5;
- (void)logWithLevel:(unsigned long long)arg0 tag:(id)arg1 fileName:(const char *)arg2 funcName:(const char *)arg3 line:(int)arg4 shortContent:(id)arg5 content:(id)arg6;
- (void)disposeLogWithLevel:(unsigned long long)arg0 tag:(id)arg1 fileName:(const char *)arg2 funcName:(const char *)arg3 line:(int)arg4 content:(id)arg5;
- (BOOL)shouldChangeQueue;
- (id)pendingModels;
- (BOOL)logOnAloneQueue;
- (void)setLogOnAloneQueue:(BOOL)arg0;
- (void)setPendingModels:(id)arg0;
- (id)init;
- (void)removeListener:(id)arg0;
- (void).cxx_destruct;
- (id)listeners;
- (void)setMaxLength:(unsigned long long)arg0;
- (void)addListener:(id)arg0;
- (void)setLogQueue:(id)arg0;
- (void)setListeners:(id)arg0;
- (id)logQueue;
- (unsigned long long)maxLength;

@end
