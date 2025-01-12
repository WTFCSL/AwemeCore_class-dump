//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSMutableDictionary;

@interface AWEFeedMixProfileTabDataController : AWEListDataController {
    long long _startEpisodeOffset;
    long long _awemeCount;
    NSNumber *_maxRequestCursor;
    long long _mixCount;
    NSString *_userID;
    NSString *_justWatchedMixID;
    NSNumber *_justWatchedMixEpisode;
    NSMutableDictionary *_listDataControllerDict;
}

@property (retain, nonatomic) NSNumber *maxRequestCursor;
@property (nonatomic) long long mixCount;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *justWatchedMixID;
@property (retain, nonatomic) NSNumber *justWatchedMixEpisode;
@property (retain, nonatomic) NSMutableDictionary *listDataControllerDict;
@property (nonatomic) long long startEpisodeOffset;
@property (nonatomic) long long awemeCount;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)setMaxRequestCursor:(id)arg0;
- (id)maxRequestCursor;
- (long long)awemeCount;
- (void)setAwemeCount:(long long)arg0;
- (BOOL)canLoadMore;
- (long long)mixCount;
- (void)setMixCount:(long long)arg0;
- (void)reloadWithPullType:(long long)arg0 Completion:(id /* block */)arg1;
- (id)listDataControllerDict;
- (id)justWatchedMixID;
- (id)justWatchedMixEpisode;
- (long long)startEpisodeOffset;
- (void)setListDataControllerDict:(id)arg0;
- (id)dataControlerWithModel:(id)arg0;
- (id)initWithUserID:(id)arg0 justWatchedMixID:(id)arg1 justWatchedMixEpisode:(id)arg2;
- (void)setStartEpisodeOffset:(long long)arg0;
- (void)setJustWatchedMixID:(id)arg0;
- (void)setJustWatchedMixEpisode:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
