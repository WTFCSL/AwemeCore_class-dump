//
//     Generated by private class-dump
//

@class AWEHotSearchCommentFeedParamsModel;

@interface AWEHotSearchCommentFeedDataController : AWEListDataController {
    id /* block */ _contextUpdateBlock;
    AWEHotSearchCommentFeedParamsModel *_paramsModel;
}

@property (retain, nonatomic) AWEHotSearchCommentFeedParamsModel *paramsModel;
@property (copy, nonatomic) id /* block */ contextUpdateBlock;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id /* block */)isEqualBlock;
- (id)requestURLString;
- (id)paramsModel;
- (void)setParamsModel:(id)arg0;
- (void)reloadListWithPullType:(long long)arg0 completion:(id /* block */)arg1;
- (void)loadDataWithPullType:(long long)arg0 completion:(id /* block */)arg1;
- (id)paramsForRefresh:(BOOL)arg0;
- (id)filterDuplicatedDatasourceWithArray:(id)arg0 requestId:(id)arg1;
- (id /* block */)contextUpdateBlock;
- (id)itemIDForCardModel:(id)arg0;
- (void)updateWithContext:(id)arg0 tabType:(long long)arg1;
- (void)setContextUpdateBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end