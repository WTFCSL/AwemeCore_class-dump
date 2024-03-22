//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@protocol AWEUserPostsDataManagerProtocol <NSObject>

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *justWatchedItemId;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL showDraft;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL hasLocateItem;
@property (readonly, nonatomic) BOOL locateMode;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)arg0;
- (BOOL)canLoadMore;
- (void)loadMoreWithCompletion:(id /* block */)arg0 shouldLocatedJustWatched:(BOOL)arg1;
- (void)loadLocateWithCompletion:(id /* block */)arg0;
- (void)loadPreviousMoreWithCompletion:(id /* block */)arg0;
- (void)switchLocateMode:(BOOL)arg0;
- (id)justWatchedItemId;
- (void)setJustWatchedItemId:(id)arg0;
- (BOOL)showDraft;
- (void)setShowDraft:(BOOL)arg0;
- (BOOL)hasLocateItem;
- (void)setHasLocateItem:(BOOL)arg0;
- (id)userID;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setUserID:(id)arg0;
- (long long)pageSize;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)setPageSize:(long long)arg0;
- (BOOL)locateMode;

@optional

- (void)setCursorBeforeLoadWithMinCursor:(id)arg0;
- (void)setCursorBeforeLoadWithMaxCursor:(id)arg0;
- (void)loadLocateForLandscapeWithModel:(id)arg0 switchLocateMode:(BOOL)arg1;

@end