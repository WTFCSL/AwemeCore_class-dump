//
//     Generated by private class-dump
//

@protocol CJPayUnionBindCardPlugin <NSObject>

- (void)bindCardWithCommonModel:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)createUnionOrderWithBindCardModel:(id)arg0 fromVC:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)authAdditionalVerifyType:(id)arg0 loadingStart:(id /* block */)arg1 loadingStopBlock:(id /* block */)arg2;
- (void)createPromotionOrder:(id)arg0;

@end
