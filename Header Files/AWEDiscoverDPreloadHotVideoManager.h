//
//     Generated by private class-dump
//

@interface AWEDiscoverDPreloadHotVideoManager : NSObject

+ (void)removeAllCachesForType:(long long)arg0;
+ (void)cacheVideos:(id)arg0 forKeyword:(id)arg1 type:(long long)arg2;
+ (id)feedTipSharedCache;
+ (id)generalSearchSharedCache;
+ (id)cacheForType:(long long)arg0;
+ (BOOL)containsVideoForKeyword:(id)arg0 type:(long long)arg1;
+ (id)videoArrayForKeyword:(id)arg0 type:(long long)arg1;

@end
