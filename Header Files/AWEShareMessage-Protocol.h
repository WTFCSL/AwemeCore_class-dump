//
//     Generated by private class-dump
//

@protocol AWEShareMessage <NSObject>

@optional

- (void)shareWithType:(long long)arg0 context:(id)arg1 targetType:(unsigned long long)arg2 targetID:(id)arg3;
- (void)willExecuteShareTask:(id)arg0;
- (void)didConfigureShareView:(id)arg0 withContext:(id)arg1;
- (void)viewExtensionUpdateHeight:(double)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dismissShareListPanelWithCompletion:(id /* block */)arg0;
- (void)sharePanelDisplayStatus:(BOOL)arg0;
- (void)shareFinishedWithType:(long long)arg0 succeed:(BOOL)arg1;
- (void)sharePanelClickIMItemWithModel:(id)arg0;

@end
