//
//     Generated by private class-dump
//

@class NSMutableArray;

@protocol AWEUserLikesDataManagerProtocol <NSObject>

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL filterDeleteItems;

- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)arg0;
- (BOOL)canLoadMore;
- (void)setFilterDeleteItems:(BOOL)arg0;
- (BOOL)filterDeleteItems;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (long long)pageSize;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)setPageSize:(long long)arg0;

@end