//
//     Generated by private class-dump
//

@interface IESLivePaidLinkmicAPI : HTSLiveApi

- (void)paidLinkmicAddPriceWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)paidLinkmicGetAlertInfoWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)updatePaidQueueSettingWithRoomID:(id)arg0 open:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getPlayCardInfoWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)getPaidLinkMicBenefitInfoWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)getPlayModeInfoBeforeApplyWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (id)paidLinkMicApiRequestByPath:(id)arg0 callback:(id /* block */)arg1;

@end
