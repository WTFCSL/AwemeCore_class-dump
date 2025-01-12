//
//     Generated by private class-dump
//

@class NSURL, NSDictionary;

@interface AWEFileStreamDownloaderConfig : NSObject {
    NSURL *_url;
    NSURL *_cacheDir;
    NSDictionary *_headerParams;
    id /* block */ _processHandler;
    id /* block */ _completion;
    double _targetTime;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *cacheDir;
@property (copy, nonatomic) NSDictionary *headerParams;
@property (copy, nonatomic) id /* block */ processHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double targetTime;

- (void)setCacheDir:(id)arg0;
- (id)cacheDir;
- (id)headerParams;
- (void)setHeaderParams:(id)arg0;
- (id /* block */)processHandler;
- (void)setProcessHandler:(id /* block */)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setUrl:(id)arg0;
- (double)targetTime;
- (void)setTargetTime:(double)arg0;
- (id)url;

@end
