//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSNumber;
@protocol AWEHttpTask;

@interface AWELiveAcqCastVideoSearchDataManager : AWEListDataController {
    BOOL _hitLimit;
    NSString *_keyword;
    long long _loadmoreCount;
    long long _refreshCount;
    NSDictionary *_logPassback;
    NSString *_backtrace;
    NSNumber *_offset;
    id<AWEHttpTask> _task;
    long long _hotSpotCount;
}

@property (nonatomic) BOOL hitLimit;
@property (nonatomic) long long loadmoreCount;
@property (nonatomic) long long refreshCount;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *backtrace;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) long long hotSpotCount;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)initWithKeyword:(id)arg0;
- (id)getExpectedSizeInfo;
- (long long)hotSpotCount;
- (void)setHotSpotCount:(long long)arg0;
- (void)reloadWithPullType:(long long)arg0 Completion:(id /* block */)arg1;
- (long long)loadmoreCount;
- (void)setLoadmoreCount:(long long)arg0;
- (BOOL)hitLimit;
- (void)p_filterRichAwemeIfNeed:(id)arg0;
- (void)setHitLimit:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)offset;
- (void)setTask:(id)arg0;
- (id)backtrace;
- (id)task;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (void)setBacktrace:(id)arg0;
- (long long)refreshCount;
- (void)setRefreshCount:(long long)arg0;

@end
