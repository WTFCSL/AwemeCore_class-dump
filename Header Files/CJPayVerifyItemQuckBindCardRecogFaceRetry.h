//
//     Generated by private class-dump
//

@class NSString, CJPayBDCreateOrderResponse, CJPayOrderConfirmResponse;

@interface CJPayVerifyItemQuckBindCardRecogFaceRetry : CJPayVerifyItemRecogFaceRetry {
    CJPayBDCreateOrderResponse *_orderResponse;
    CJPayOrderConfirmResponse *_confirmResponse;
    NSString *_memberBizOrderNo;
    id /* block */ _loadingBlock;
    id /* block */ _faceRecogCompletion;
}

@property (copy, nonatomic) id /* block */ faceRecogCompletion;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) id /* block */ loadingBlock;

- (void)event:(id)arg0 params:(id)arg1;
- (void)showLoading:(BOOL)arg0;
- (id)memberBizOrderNo;
- (id)orderResponse;
- (void)setOrderResponse:(id)arg0;
- (id)checkTypeName;
- (void)setConfirmResponse:(id)arg0;
- (void)setMemberBizOrderNo:(id)arg0;
- (void)setFaceRecogCompletion:(id /* block */)arg0;
- (id /* block */)faceRecogCompletion;
- (id)getCreateOrderResponse;
- (void)startFaceRecogRetryWithResponse:(id)arg0 completion:(id /* block */)arg1;
- (void)submitFaceDataWithResponse:(id)arg0 getTicketResponse:(id)arg1 sdkData:(id)arg2;
- (id)getSourceStr;
- (void)failRetryRecogFace;
- (void).cxx_destruct;
- (id)confirmResponse;
- (id /* block */)loadingBlock;
- (void)setLoadingBlock:(id /* block */)arg0;

@end
