//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDSecondaryDiggListDataController : AWEListDataController <AWESecondaryDiggListDataControllerProtocol> {
    BOOL _hasMore;
    long long _total;
    NSString *_vcdText;
    NSString *_noticeID;
    long long _noticeType;
    long long _maxCursor;
    long long _minCursor;
}

@property (copy, nonatomic) NSString *noticeID;
@property (nonatomic) long long noticeType;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (copy, nonatomic) NSString *vcdText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:(long long)arg0;
- (void)setMinCursor:(long long)arg0;
- (void)setNoticeID:(id)arg0;
- (id)noticeID;
- (void)setNoticeType:(long long)arg0;
- (id)getParams;
- (id)vcdText;
- (void)setVcdText:(id)arg0;
- (id)initWithNoticeID:(id)arg0 noticeType:(long long)arg1;
- (long long)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (long long)noticeType;
- (void)setTotal:(long long)arg0;

@end
