//
//     Generated by private class-dump
//

@interface IESVideoPlayer : NSObject

+ (id)playerWithType:(unsigned long long)arg0;
+ (BOOL)IESVideoPlayerErrorIsVideoAuditWorkFlowError:(id)arg0;
+ (id)playerWithType:(unsigned long long)arg0 videoID:(id)arg1 andPlayURLs:(id)arg2 videoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg3 audioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg4;
+ (id)playerWithType:(unsigned long long)arg0 videoID:(id)arg1 andPlayURLs:(id)arg2 videoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg3 audioWrapperV2:(id)arg4;
+ (void)setPlayerAudioWrapperFixEnable:(unsigned long long)arg0 flag:(BOOL)arg1;
+ (void)getCacheFileByKey:(unsigned long long)arg0 key:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)playerWithType:(unsigned long long)arg0 videoID:(id)arg1 andPlayURLs:(id)arg2;
+ (long long)getDownloadCountByVid:(unsigned long long)arg0 vid:(id)arg1;
+ (id)ownPlayerUrlWithVid:(id)arg0;
+ (id)urlWithVideoId:(unsigned long long)arg0 vid:(id)arg1;

@end
