//
//     Generated by private class-dump
//

@class PuzzleContext, NSMutableDictionary, PuzzleGeckoResourceLoader, NSString;

@interface PuzzleLynxResourceProvider : NSObject <LynxTemplateProvider, LynxResourceFetcher, LynxDynamicComponentFetcher, LynxResourceProvider, LynxImageFetcher> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _operationLock;
    BOOL _enableForest;
    BOOL _enableMemoryCache;
    NSMutableDictionary *_runningRequests;
    PuzzleGeckoResourceLoader *_geckoResourceLoader;
    PuzzleContext *_context;
    NSMutableDictionary *_operationsMap;
}

@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (retain, nonatomic) PuzzleGeckoResourceLoader *geckoResourceLoader;
@property (retain, nonatomic) PuzzleContext *context;
@property (nonatomic) BOOL enableForest;
@property (nonatomic) BOOL enableMemoryCache;
@property (retain, nonatomic) NSMutableDictionary *operationsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forestRequestParamsWithContext:(id)arg0;
+ (void)unzipFile:(id)arg0 completionHandler:(id /* block */)arg1;
+ (id)unzipCachePathForURL:(id)arg0;
+ (id)zipTempCachePathForURL:(id)arg0;

- (void)loadTemplateWithUrl:(id)arg0 onComplete:(id /* block */)arg1;
- (void)loadDynamicComponent:(id)arg0 withLoadedBlock:(id /* block */)arg1;
- (id /* block */)loadImageWithURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 contextInfo:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)loadResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (id /* block */)fetchResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (id)redirectURL:(id)arg0;
- (void)resolveResourceURL:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchResourceDataWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLocalFileWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)request:(id)arg0 onComplete:(id /* block */)arg1;
- (void)setEnableMemoryCache:(BOOL)arg0;
- (BOOL)enableMemoryCache;
- (id)runningRequests;
- (void)setRunningRequests:(id)arg0;
- (id)requestParams:(id)arg0;
- (void)setEnableForest:(BOOL)arg0;
- (BOOL)enableForest;
- (void)startResourceRequest:(id)arg0 completion:(id /* block */)arg1;
- (id)initWithTemplateUrl:(id)arg0 context:(id)arg1;
- (BOOL)checkValidateURL:(id)arg0 error:(id *)arg1;
- (id)geckoResourceLoader;
- (void)fallbackResourceRequest:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)_fetchResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (void)__fetchResourceDataWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__fetchLocalFileWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOperation:(id)arg0 forKey:(id)arg1;
- (id)operationsMap;
- (id /* block */)__asyncLoadImageWithURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 contextInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)reportForestTrackData:(id)arg0;
- (id)puzzleLynxResourceError:(long long)arg0 errorMsg:(id)arg1;
- (void)setGeckoResourceLoader:(id)arg0;
- (void)setOperationsMap:(id)arg0;
- (void)cancel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)removeOperationForKey:(id)arg0;

@end