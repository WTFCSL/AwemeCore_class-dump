//
//     Generated by private class-dump
//

@protocol IESLiveChargeAPI <NSObject>

- (void)fetchLiveChargeDataWithEntrance:(long long)arg0 fetchMoment:(long long)arg1 chargeContext:(id)arg2 tintTags:(id)arg3 isNotCNY:(BOOL)arg4 loadAllProducts:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)cj_fetchOrderInfoWithParams:(id)arg0 source:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)checkFinalResultWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchLiveWalletInfoFromSituation:(long long)arg0 secUserID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchWalletRechargePageWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchPrivilegeTouchWithRoomId:(id)arg0 completion:(id /* block */)arg1;

@end