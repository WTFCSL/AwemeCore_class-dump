//
//     Generated by private class-dump
//

@protocol AWENaviCategoryChangeObserver <NSObject>

@optional

- (BOOL)category:(id)arg0 didChangeEffect:(id)arg1 viewModel:(id)arg2 targetCategory:(id)arg3;
- (BOOL)category:(id)arg0 didChangeInspiration:(id)arg1 viewModel:(id)arg2 targetCategory:(id)arg3;
- (void)category:(id)arg0 didChangeColor:(id)arg1 viewModel:(id)arg2 targetCategory:(id)arg3;
- (void)category:(id)arg0 willApplyCollection:(id)arg1;
- (void)category:(id)arg0 didApplyCollection:(id)arg1;
- (void)category:(id)arg0 applyOrphanEffect:(id)arg1;
- (void)category:(id)arg0 applyOrphanInspiration:(id)arg1;
- (void)didClickCategory:(id)arg0 data:(id)arg1;

@end
