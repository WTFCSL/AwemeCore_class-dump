//
//     Generated by private class-dump
//

@class NSString;

@interface BUADServiceImage : NSObject <BUADServiceImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cloneInstance:(id /* block */)arg0;
- (id)adServiceVersion;
- (void)setImageViewTarget:(id)arg0 imageWithURL:(id)arg1 completed:(id /* block */)arg2;
- (void)setImageViewTarget:(id)arg0 imageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(id /* block */)arg3;
- (void)downloadImageWithURL:(id)arg0 options:(unsigned long long)arg1 completed:(id /* block */)arg2;
- (void)prefetchURLs:(id)arg0 completed:(id /* block */)arg1;
- (id)imageFromCacheForURL:(id)arg0;
- (id)imageFromCacheForKey:(id)arg0;
- (id)cacheKeyForURL:(id)arg0;
- (void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(long long)arg3 completion:(id /* block */)arg4;
- (void)setMaxMemoryCount:(unsigned long long)arg0;
- (void)setMaxMemoryCost:(unsigned long long)arg0;
- (id)loadImageWithURL:(id)arg0 completed:(id /* block */)arg1;
- (void)storeImageData:(id)arg0 forKey:(id)arg1;
- (id)imageDataForKey:(id)arg0;

@end
