//
//     Generated by private class-dump
//

@class FeedResponse;

@protocol AWELiveEntrancePreloaderProtocol <HTSService>

+ (id)defaulePreloader;

@property (readonly, nonatomic) FeedResponse *preloadFeedList;
@property (copy, nonatomic) id /* block */ fetchFeedListBlock;
@property (readonly, nonatomic) BOOL isFetchingFeedList;

- (BOOL)isFetchingFeedList;
- (void)entranceDisappear;
- (id)preloadFeedList;
- (id /* block */)fetchFeedListBlock;
- (void)entranceAppear;
- (void)clickedEntrance;
- (void)setFetchFeedListBlock:(id /* block */)arg0;

@end
