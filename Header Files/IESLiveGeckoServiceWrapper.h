//
//     Generated by private class-dump
//

@class NSSet, NSCountedSet, NSString;
@protocol IESLiveGeckoService;

@interface IESLiveGeckoServiceWrapper : NSObject <IESLiveGeckoService> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _optimizeGeckoSync;
    id<IESLiveGeckoService> _service;
    id /* block */ _resumeBlock;
    long long _autoResumeTime;
    NSSet *_whiteListChannels;
    NSCountedSet *_syncChannels;
}

@property (retain, nonatomic) id<IESLiveGeckoService> service;
@property (copy, nonatomic) id /* block */ resumeBlock;
@property (nonatomic) long long autoResumeTime;
@property (nonatomic) BOOL optimizeGeckoSync;
@property (retain, nonatomic) NSSet *whiteListChannels;
@property (retain, nonatomic) NSCountedSet *syncChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerAccessKey:(id)arg0;
- (void)registerAccessKey:(id)arg0 SDKVersion:(id)arg1;
- (unsigned long long)packageVersionForAccessKey:(id)arg0 channel:(id)arg1;
- (id)rootDirForAccessKey:(id)arg0 channel:(id)arg1;
- (id)appAccessKey;
- (void)syncResourceWithAccessKey:(id)arg0 channels:(id)arg1 resourceVersion:(id)arg2 isColdLaunch:(BOOL)arg3 completion:(id /* block */)arg4;
- (id /* block */)resumeBlock;
- (void)setResumeBlock:(id /* block */)arg0;
- (void)syncResourceWithAccessKey:(id)arg0 group:(id)arg1 resourceVersion:(id)arg2 isColdLaunch:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)syncResourceWithAccessKey:(id)arg0 channel:(id)arg1 resourceVersion:(id)arg2 progressBlock:(id /* block */)arg3 isColdLaunch:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)asyncResourceWithAccessKey:(id)arg0 channels:(id)arg1 resourceVersion:(id)arg2 isColdLaunch:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)syncLazyResourceWithAccessKey:(id)arg0 channel:(id)arg1 resourceVersion:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelLazyDownloadWithAccesskey:(id)arg0 channel:(id)arg1;
- (BOOL)hasCacheForFilename:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
- (id)dataForFilename:(id)arg0 accessKey:(id)arg1 channel:(id)arg2;
- (void)pauseSyncWithAutoResume:(BOOL)arg0;
- (BOOL)optimizeGeckoSync;
- (void)setOptimizeGeckoSync:(BOOL)arg0;
- (void)setAutoResumeTime:(long long)arg0;
- (void)setWhiteListChannels:(id)arg0;
- (id)syncChannels;
- (id)whiteListChannels;
- (void)ieslive_pauseSync:(BOOL)arg0;
- (void)ieslive_resumeSync;
- (long long)autoResumeTime;
- (void)setSyncChannels:(id)arg0;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)resumeSync;
- (id)initWithService:(id)arg0;
- (void)dealloc;
- (id)service;
- (void)setupConfig;

@end
