//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEDCFeedPlaceholderConfig, NSString, NSLock, NSMutableArray;

@interface AWEDCFeedPlaceholderManager : NSObject <AWEUserMessage> {
    long long _recordStartIndex;
    AWEDCFeedPlaceholderConfig *_config;
    NSMutableDictionary *_placeholderCacheDic;
    NSMutableArray *_cacheModelArray;
    NSString *_placeholderImageCacheKey;
}

@property (class, readonly, nonatomic) NSLock *preloadedPlaceholderDataDictLock;
@property (class, readonly, nonatomic) NSMutableDictionary *preloadedPlaceholderDataDict;

@property (retain, nonatomic) AWEDCFeedPlaceholderConfig *config;
@property (retain, nonatomic) NSMutableDictionary *placeholderCacheDic;
@property (retain, nonatomic) NSMutableArray *cacheModelArray;
@property (copy, nonatomic) NSString *placeholderImageCacheKey;
@property (nonatomic) long long recordStartIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCurrentImageCacheKeyWithBusinessID:(id)arg0 distinguishUser:(BOOL)arg1;
+ (void)preloadPlaceholderDataWithPayload:(id)arg0 completion:(id /* block */)arg1;
+ (void)setPreloadedHistoryData:(id)arg0 payload:(id)arg1;
+ (void)registerPlaceholderImageCacheWithBusinessID:(id)arg0 distinguishUser:(BOOL)arg1 cacheCount:(long long)arg2;
+ (id)preloadedPlaceholderDataDict;
+ (id)getPlaceholderModelCacheKeyWithBusinessID:(id)arg0 distinguishUser:(BOOL)arg1;
+ (id)preloadedPlaceholderDataDictLock;
+ (void)preloadPlaceholderImageWithCacheModels:(id)arg0 businessID:(id)arg1 distinguishUser:(BOOL)arg2;
+ (void)readPlaceholderDataFromDiskWithBusinessID:(id)arg0 distinguishUser:(BOOL)arg1 completion:(id /* block */)arg2;
+ (id)getPlaceholderImageCacheConfigWithCacheCount:(long long)arg0;
+ (id)generateCacheKeyWithPrefix:(id)arg0 businessID:(id)arg1 distinguishUser:(BOOL)arg2;
+ (id)getCurrentUserID;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)loadPlaceholderDataCompletion:(id /* block */)arg0;
- (void)cachePlaceholderData:(id)arg0;
- (void)setRecordStartIndex:(long long)arg0;
- (long long)recordStartIndex;
- (id)cacheModelArray;
- (id)placeholderModelCacheKey;
- (void)storePlaceholderImageToDiskForModels:(id)arg0;
- (id)placeholderImageCacheKey;
- (id)receiveOuterPlaceholderCache;
- (id)placeholderCacheDic;
- (void)setPlaceholderCacheDic:(id)arg0;
- (void)setCacheModelArray:(id)arg0;
- (void)setPlaceholderImageCacheKey:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (long long)placeholderCount;
- (id)config;
- (id)initWithConfig:(id)arg0;

@end
