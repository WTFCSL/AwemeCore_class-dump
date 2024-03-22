//
//     Generated by private class-dump
//

@protocol ALMVideoPreloadSpeedProtocol;

@protocol ALMVideoPreloadProtocol <IESVideoPreloadProtocol>

+ (void)setEnableMonitorPlayNetwork:(BOOL)arg0;
+ (void)setNetWorkType:(unsigned long long)arg0;
+ (id)sharedPreloader;
+ (void)startVideoLocalServer;
+ (void)startVideoLocalServer:(id)arg0;
+ (void)enableIOManager:(BOOL)arg0;
+ (void)disableSameTask:(BOOL)arg0;

@property (weak, nonatomic) id<ALMVideoPreloadSpeedProtocol> delegate;

- (void)setMaxConcurrentCount:(long long)arg0;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 fileCs:(id)arg4 urlKey:(id)arg5 videoModelString:(id)arg6 tag:(id)arg7;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 fileCs:(id)arg4 urlKey:(id)arg5 videoModelString:(id)arg6 videoModelResolution:(unsigned long long)arg7 tag:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10 cancelBlock:(id /* block */)arg11;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 fileCs:(id)arg4 urlKey:(id)arg5 tag:(id)arg6;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 fileCs:(id)arg4 urlKey:(id)arg5 videoModelString:(id)arg6 videoModelResolution:(unsigned long long)arg7 tag:(id)arg8;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 fileCs:(id)arg4 urlKey:(id)arg5 videoModelString:(id)arg6 videoModelResolution:(unsigned long long)arg7 tag:(id)arg8 priorityLevel:(long long)arg9 successBlock:(id /* block */)arg10 failureBlock:(id /* block */)arg11 cancelBlock:(id /* block */)arg12;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 fileCs:(id)arg4 urlKey:(id)arg5 videoModelString:(id)arg6 videoModelResolution:(unsigned long long)arg7 tag:(id)arg8 priorityLevel:(long long)arg9 successBlock:(id /* block */)arg10 failureBlock:(id /* block */)arg11 cancelBlock:(id /* block */)arg12 customHeaderDic:(id)arg13;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 fileCs:(id)arg4 urlKey:(id)arg5 tag:(id)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8 cancelBlock:(id /* block */)arg9;
- (void)cancelTaskForVideoID:(id)arg0 andVideoURL:(id)arg1;
- (void)cancelTaskForVideoID:(id)arg0 andVideoURL:(id)arg1 urlKey:(id)arg2;
- (void)cancelGroup:(id)arg0;
- (void)getTaskCacheVideoID:(id)arg0 andVideoURL:(id)arg1 urlKey:(id)arg2 block:(id /* block */)arg3;
- (long long)cacheSizeForVideoID:(id)arg0 andVideoURL:(id)arg1 urlKey:(id)arg2;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 tag:(id)arg3;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 tag:(id)arg4;
- (void)preloadVideoID:(id)arg0 andVideoURL:(id)arg1 preloadSize:(unsigned long long)arg2 group:(id)arg3 completion:(id /* block */)arg4 tag:(id)arg5;
- (void)setItemID:(id)arg0;
- (id)delegate;
- (void)cancel;
- (void)clear;
- (void)setDelegate:(id)arg0;

@optional

- (void)setPreloadTaskDidFinishBlock:(id /* block */)arg0;

@end