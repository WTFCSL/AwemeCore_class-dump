//
//     Generated by private class-dump
//

@protocol AWEUserRecommendTableDataSourceDelegate <NSObject>

@optional

- (void)dataSourceWillRefresh:(id)arg0;
- (void)dataSourceDidRefresh:(id)arg0 models:(id)arg1 error:(id)arg2;
- (void)dataSourceWillLoadMore:(id)arg0;
- (void)dataSourceDidLoadMore:(id)arg0 models:(id)arg1 error:(id)arg2;
- (void)dataSource:(id)arg0 didFilterModels:(id)arg1;

@end
