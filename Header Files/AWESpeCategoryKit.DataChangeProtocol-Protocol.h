//
//     Generated by private class-dump
//

@protocol AWESpeCategoryKit.DataChangeProtocol

@optional

- (void)onLoadPlaceholderDataEndWithSuccess:(BOOL)arg0 response:(id)arg1 error:(id)arg2;
- (void)onFetchListDataEndWithReason:(long long)arg0 success:(BOOL)arg1 response:(id)arg2 error:(id)arg3;
- (void)onLoadMoreListDataEndWithReason:(long long)arg0 success:(BOOL)arg1 response:(id)arg2 error:(id)arg3;
- (void)onListDidReloadData;
- (void)onLoadPlaceholderDataStart;
- (void)onFetchListDataStartWithReason:(long long)arg0;
- (void)onLoadMoreListDataStartWithReason:(long long)arg0;

@end