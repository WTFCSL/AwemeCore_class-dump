//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWELogDataManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_logData;
}

@property (retain, nonatomic) NSMutableArray *logData;

+ (id)shareManager;

- (void)appendLogData:(id)arg0;
- (void)appendLogArray:(id)arg0;
- (id)needSendLogData;
- (void)clearPendingLogData;
- (id)init;
- (void).cxx_destruct;
- (id)logData;
- (void)setLogData:(id)arg0;
- (void)dealloc;

@end