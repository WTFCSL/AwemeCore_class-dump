//
//     Generated by private class-dump
//

@protocol IESECGoodsFeedResourceCardDelegate <NSObject>

- (void)resourceCard:(id)arg0 didClickCard:(id)arg1;
- (void)resourceCard:(id)arg0 didClickProductCellWithProduct:(id)arg1;
- (void)resourceCard:(id)arg0 didClickCellBuyButtonWithProduct:(id)arg1;
- (void)resourceCard:(id)arg0 didClickCouponViewWithSchema:(id)arg1 hasCoupon:(BOOL)arg2;
- (void)resourceCard:(id)arg0 didClickMoreProductWithSchema:(id)arg1;
- (void)resourceCard:(id)arg0 didSelectProductWithModel:(id)arg1;
- (void)resourceCard:(id)arg0 didClickWindowCardWithClickArea:(id)arg1 schema:(id)arg2;
- (void)resourceCard:(id)arg0 didClickStoreEntranceWithSchema:(id)arg1;
- (void)resourceCard:(id)arg0 didClickButtonNodeWithSchema:(id)arg1;

@optional

- (void)trackClickResourceCard:(id)arg0;
- (void)resourceCarddidClickPanelNodeChangeProduct:(id)arg0 completionBlock:(id /* block */)arg1;

@end
