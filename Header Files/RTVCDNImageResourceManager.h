//
//     Generated by private class-dump
//

@class NSDictionary, NSString;
@protocol RxInjector, RTVURLFetcher;

@interface RTVCDNImageResourceManager : NSObject <RTVCDNImageResourceManager> {
    id<RxInjector> _injector;
    id<RTVURLFetcher> _urlFetcher;
    NSDictionary *_imageSizeDic;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVURLFetcher> urlFetcher;
@property (readonly, nonatomic) NSDictionary *imageSizeDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)preloadImage;
- (id)imageSizeDic;
- (id)urlFetcher;
- (id)URLsWithKey:(id)arg0;
- (void).cxx_destruct;
- (id)injector;

@end