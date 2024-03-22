//
//     Generated by private class-dump
//

@protocol AWEFeedAdClientAICacheV2Protocol <HTSService>

+ (id)sharedInstance;

- (void)saveFeedWithScene:(id)arg0 feed:(id)arg1 src:(id)arg2 cost:(unsigned long long)arg3;
- (id)feedWithScene:(id)arg0 itemId:(id)arg1;
- (BOOL)containsFeedWithScene:(id)arg0 itemId:(id)arg1;
- (void)removeAll:(id)arg0;
- (void)updateCacheInfoWithScene:(id)arg0 itemId:(id)arg1 src:(id)arg2 updateSaveTime:(BOOL)arg3;
- (void)removeFeedWithScene:(id)arg0 itemId:(id)arg1;
- (id)allFeeds:(id)arg0;
- (long long)cacheTotalCount:(id)arg0;
- (long long)cacheTotalCountForAllScene;

@end
