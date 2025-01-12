//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface RTVXREngineAudioContextContainer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableDictionary *_nodesMap;
    unsigned long long _contentCreateIndex;
}

@property (readonly, nonatomic) NSMutableDictionary *nodesMap;
@property (nonatomic) unsigned long long contentCreateIndex;

+ (id)shareInstance;

- (id)createNodeWithContext:(id)arg0;
- (unsigned long long)getNextCreateIndex;
- (unsigned long long)contentCreateIndex;
- (void)setContentCreateIndex:(unsigned long long)arg0;
- (id)nodesMap;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
