//
//     Generated by private class-dump
//

@interface IESGCPColumnListPageInfo : NSObject {
    BOOL _hasMore;
    BOOL _preloadNextPage;
    long long _offset;
    long long _size;
}

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (nonatomic) long long size;
@property (nonatomic) BOOL preloadNextPage;

- (BOOL)preloadNextPage;
- (void)setPreloadNextPage:(BOOL)arg0;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)size;
- (void)setSize:(long long)arg0;

@end
