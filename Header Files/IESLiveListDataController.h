//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESLiveListDataController : NSObject <NSCopying> {
    BOOL _hasMore;
    BOOL _isRequestOnAir;
    NSMutableArray *_dataSource;
    unsigned long long _totalCount;
    long long _cursor;
}

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isRequestOnAir;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (long long)cursor;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)clear;
- (unsigned long long)totalCount;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)setTotalCount:(unsigned long long)arg0;

@end
