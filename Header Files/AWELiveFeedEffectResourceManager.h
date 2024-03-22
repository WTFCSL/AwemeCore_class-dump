//
//     Generated by private class-dump
//

@class TTHttpTask, NSMutableArray, NSString;

@interface AWELiveFeedEffectResourceManager : NSObject {
    TTHttpTask *_openCoinTask;
    NSMutableArray *_openCoinResourceRequests;
    NSString *_openCoinResourcePath;
}

@property (retain, nonatomic) TTHttpTask *openCoinTask;
@property (retain, nonatomic) NSMutableArray *openCoinResourceRequests;
@property (copy, nonatomic) NSString *openCoinResourcePath;

+ (id)defaultManager;

- (id)openCoinTask;
- (id)openCoinResourcePath;
- (id)openCoinDownloadCache;
- (void)setOpenCoinResourcePath:(id)arg0;
- (id)openCoinResourceRequests;
- (void)unzipResource:(id)arg0 toDestination:(id)arg1 completion:(id /* block */)arg2;
- (void)setOpenCoinTask:(id)arg0;
- (void)downloadOpenCoinResource;
- (void)getOpenCoinEffectResourcePathCompletion:(id /* block */)arg0;
- (void)setOpenCoinResourceRequests:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end