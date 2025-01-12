//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary;

@interface BUDownloadSpeedServer : NSObject {
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _shared_mutexattr_t;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_speeds;
    NSMutableDictionary *_modelCache;
}

@property (retain, nonatomic) NSMutableArray *speeds;
@property (retain, nonatomic) NSMutableDictionary *modelCache;

+ (id)server;

- (id)getSpeedModelWithUrl:(id)arg0;
- (id)downloadSpeedServerCreateSpeedModelWithUrl:(id)arg0;
- (double)downloadSpeeds;
- (void)setModelCache:(id)arg0;
- (void)startDownloadWithUrl:(id)arg0;
- (id)downloadingWithUrl:(id)arg0;
- (void)finishDownloadWithUrl:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSpeeds:(id)arg0;
- (id)speeds;
- (id)modelCache;

@end
