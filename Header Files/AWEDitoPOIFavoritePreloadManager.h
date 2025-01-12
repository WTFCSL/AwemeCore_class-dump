//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEDitoPOIFavoritePreloadManager : NSObject {
    NSMutableDictionary *_modelDict;
}

@property (retain, nonatomic) NSMutableDictionary *modelDict;

+ (id)preloadConfig;
+ (id)cacheConfig;
+ (id)collectFMPOptConfig;
+ (BOOL)isFMPOptEnable;
+ (BOOL)isSubTabPrefetchEnable;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;
+ (long long)requestCount;

- (BOOL)isCacheExist:(id)arg0;
- (id)modelDict;
- (void)setModelDict:(id)arg0;
- (void)registerMessage;
- (void)handleLynxBroadcastNotification:(id)arg0;
- (void)didReceivePOICollectionStatusChanged:(id)arg0;
- (BOOL)cacheResponseData:(id)arg0 withKey:(id)arg1;
- (id)fetchResponseDataWithKey:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
