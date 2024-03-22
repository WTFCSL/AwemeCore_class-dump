//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEDataLayerNetworkCacheManager : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)sharedManager;

- (id)storageWithConfig:(id)arg0;
- (void)getNetworkCacheWithIdentifier:(id)arg0 config:(id)arg1 completion:(id /* block */)arg2;
- (void)setNetworkCache:(id)arg0 cacheIdentifier:(id)arg1 config:(id)arg2;
- (void)clearNetworkCacheWithIdentifier:(id)arg0 config:(id)arg1;
- (void).cxx_destruct;
- (void)setCacheQueue:(id)arg0;
- (id)cacheQueue;

@end