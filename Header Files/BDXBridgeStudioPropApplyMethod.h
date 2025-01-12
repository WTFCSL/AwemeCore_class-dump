//
//     Generated by private class-dump
//

@class ACCPropLoadedView;

@interface BDXBridgeStudioPropApplyMethod : BDXBridgeMethod

@property (retain, nonatomic) ACCPropLoadedView *loadingView;
@property (nonatomic) BOOL hasCanceled;

+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (id)repoTrack;
- (id)repoMusic;
- (void)p_handleCancelDownload;
- (void)downLoadForceBindMusicWithProp:(id)arg0 progress:(id /* block */)arg1 originMusicFailed:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)p_showToastWithFetchPropError:(id)arg0;
- (long long)authType;
- (BOOL)hasCanceled;
- (void)setHasCanceled:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)methodName;

@end
