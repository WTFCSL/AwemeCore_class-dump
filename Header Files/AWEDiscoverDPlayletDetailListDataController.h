//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiscoverDPlayletDetailListDataController : AWEListDataController {
    NSString *_playletID;
}

@property (copy, nonatomic) NSString *playletID;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)playletID;
- (void)setPlayletID:(id)arg0;
- (void)reloadWithPullType:(long long)arg0 Completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
