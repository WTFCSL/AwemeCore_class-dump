//
//     Generated by private class-dump
//

@interface BDWebContentPreloadManager : NSObject

+ (void)saveResponse:(id)arg0 forURLString:(id)arg1;
+ (BOOL)existPageCacheForURLString:(id)arg0;
+ (void)preloadPageWithURLs:(id)arg0 userAgent:(id)arg1 useHttpCaches:(BOOL)arg2;
+ (void)preloadPageWithURLs:(id)arg0 userAgent:(id)arg1;
+ (id)fetchWebResourceSync:(id)arg0;
+ (void)cancelTasks:(id)arg0;

@end