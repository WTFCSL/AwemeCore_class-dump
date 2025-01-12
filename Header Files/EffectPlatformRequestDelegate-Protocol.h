//
//     Generated by private class-dump
//

@protocol EffectPlatformRequestDelegate <NSObject>

@property (nonatomic) long long requestOptimizeAbKey;
@property (nonatomic) double requestTimeout;

- (void)downloadFileWithURLString:(id)arg0 downloadPath:(id)arg1 downloadProgress:(id *)arg2 completion:(id /* block */)arg3;
- (void)requestWithURLString:(id)arg0 parameters:(id)arg1 headerFields:(id)arg2 httpMethod:(id)arg3 completion:(id /* block */)arg4;

@optional

- (void)downloadFileWithURLString:(id)arg0 downloadParameters:(id)arg1 downloadPath:(id)arg2 downloadProgress:(id *)arg3 completion:(id /* block */)arg4;
- (id)downloadFileWithPath:(id)arg0 urlList:(id)arg1 downloadParameters:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)pauseTaskWithKey:(id)arg0;
- (void)cancelTaskWithKey:(id)arg0;
- (void)resumeTaskWithKey:(id)arg0 filePath:(id)arg1 urlList:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (long long)requestOptimizeAbKey;
- (void)setRequestOptimizeAbKey:(long long)arg0;
- (double)requestTimeout;
- (void)setRequestTimeout:(double)arg0;

@end
