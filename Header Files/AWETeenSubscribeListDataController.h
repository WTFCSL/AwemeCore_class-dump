//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary;
@protocol AWEHttpTask;

@interface AWETeenSubscribeListDataController : AWEListDataController {
    NSDictionary *_logPassback;
    NSNumber *_cursor;
    NSNumber *_count;
    id<AWEHttpTask> _task;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *count;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSDictionary *logPassback;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)reloadWithPullType:(long long)arg0 Completion:(id /* block */)arg1;
- (void)setCount:(id)arg0;
- (id)cursor;
- (id)init;
- (void).cxx_destruct;
- (id)count;
- (void)setTask:(id)arg0;
- (id)task;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end