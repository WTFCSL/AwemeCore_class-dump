//
//     Generated by private class-dump
//

@class NSString;

@interface BDInstallIDFA : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _idfaMutex;
    NSString *_idfa;
}

@property (copy, nonatomic) NSString *idfa;

+ (id)sharedInstance;

- (void)setIdfa:(id)arg0;
- (id)idfa;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end