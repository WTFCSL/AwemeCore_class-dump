//
//     Generated by private class-dump
//

@protocol LynxResourceFetcher <NSObject>

- (id /* block */)loadResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;

@optional

- (id /* block */)fetchResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (id)translatedResourceWithId:(id)arg0 theme:(id)arg1 themeKey:(id)arg2 view:(id)arg3;
- (id)redirectURL:(id)arg0;
- (void)resolveResourceURL:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchResourceDataWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLocalFileWithURLString:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)loadResourceWithURL:(id)arg0 delegate:(id)arg1;
- (void)loadResourceWithURLString:(id)arg0 completion:(id /* block */)arg1;

@end
