//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayVerifyItemForgetPwdRecogFace : CJPayVerifyItemRecogFace {
    BOOL _isOpenVerifyType;
    NSString *_verifyTypeStr;
}

@property (nonatomic) BOOL isOpenVerifyType;
@property (copy, nonatomic) NSString *verifyTypeStr;

- (void)requestVerifyWithCreateOrderResponse:(id)arg0 event:(id)arg1;
- (BOOL)shouldHandleVerifyResponse:(id)arg0;
- (void)p_setupBlock;
- (void)alertNeedFaceRecogWith:(id)arg0 getTicketResponse:(id)arg1;
- (void)failRecogFace;
- (void)setIsOpenVerifyType:(BOOL)arg0;
- (void)setVerifyTypeStr:(id)arg0;
- (id)p_findTopHalfViewController;
- (id)confirmRequestParasmWithResponse:(id)arg0 getTicketResponse:(id)arg1 sdkData:(id)arg2;
- (id)p_getFaceRecogScene;
- (id)verifyTypeStr;
- (BOOL)isOpenVerifyType;
- (void)p_dismissPopUpViewControllerWithCompletion:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)receiveEvent:(id)arg0;

@end
