//
//     Generated by private class-dump
//

@interface AWEPreloadActionHandler : NSObject

+ (void)preloadDataWithModel:(id)arg0 group:(id)arg1 preloadSize:(long long)arg2 banPreload:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)cancelPreloadWithGroup:(id)arg0;
+ (id)preloaderForModel:(id)arg0;
+ (void)cancelAllPreload;
+ (void)__preloadActionWithModel:(id)arg0 bsModel:(id)arg1 group:(id)arg2 urlModel:(id)arg3 preloadSize:(long long)arg4 completion:(id /* block */)arg5;

@end
