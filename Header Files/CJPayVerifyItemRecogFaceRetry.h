//
//     Generated by private class-dump
//

@class CJPayGetTicketResponse, UIViewController;

@interface CJPayVerifyItemRecogFaceRetry : CJPayVerifyItem {
    CJPayGetTicketResponse *_getTicketResponse;
    UIViewController *_referVC;
}

@property (retain, nonatomic) CJPayGetTicketResponse *getTicketResponse;
@property (weak, nonatomic) UIViewController *referVC;

- (void)event:(id)arg0 params:(id)arg1;
- (void)showLoading:(BOOL)arg0;
- (void)requestVerifyWithCreateOrderResponse:(id)arg0 event:(id)arg1;
- (BOOL)shouldHandleVerifyResponse:(id)arg0;
- (id)checkTypeName;
- (void)setReferVC:(id)arg0;
- (id)referVC;
- (BOOL)p_lynxRetain:(id)arg0;
- (BOOL)shouldShowRetainVC;
- (void)setGetTicketResponse:(id)arg0;
- (id)getTicketResponse;
- (id)p_topVC;
- (id)getCreateOrderResponse;
- (void)submitFaceDataWithResponse:(id)arg0 getTicketResponse:(id)arg1 sdkData:(id)arg2;
- (id)getSourceStr;
- (void)alertNeedRetryFaceRecogWith:(id)arg0;
- (void)failRetryRecogFace;
- (void)pushWithVC:(id)arg0;
- (void)p_doFaceLivenessWith:(id)arg0 getTicketResponse:(id)arg1 baseParam:(id)arg2;
- (void)p_doFacePlusLivenessWith:(id)arg0 getTicketResponse:(id)arg1;
- (void)p_showRetryFaceRecogAlertWithConfirmResponse:(id)arg0 getTicketResponse:(id)arg1;
- (id)wakeVerifySource;
- (void)p_startFaceRecogWithConfirmResponse:(id)arg0 getTicketResponse:(id)arg1;
- (void).cxx_destruct;

@end
