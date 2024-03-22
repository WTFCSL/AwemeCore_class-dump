//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEIMPolymerizationDiggDataController : AWEListDataController {
    BOOL _hasMore;
    NSNumber *_noticeID;
    long long _noticeType;
    long long _diggType;
    long long _maxCursor;
    long long _minCursor;
    long long _total;
}

@property (retain, nonatomic) NSNumber *noticeID;
@property (nonatomic) long long noticeType;
@property (nonatomic) long long diggType;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long total;
@property (nonatomic) BOOL hasMore;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:(long long)arg0;
- (void)setMinCursor:(long long)arg0;
- (void)setNoticeID:(id)arg0;
- (long long)diggType;
- (id)noticeID;
- (void)setNoticeType:(long long)arg0;
- (id)getParams;
- (id)initWithNoticeID:(id)arg0 noticeType:(long long)arg1 diggType:(long long)arg2;
- (void)setDiggType:(long long)arg0;
- (long long)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (long long)noticeType;
- (void)setTotal:(long long)arg0;

@end