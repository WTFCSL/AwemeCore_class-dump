//
//     Generated by private class-dump
//

@class CJPayBizResultController, CJPayBDCreateOrderResponse, NSString, CJPayBDOrderResultResponse, CJPayBizDYPayModel, NSMutableArray;

@interface CJPayBizDYPayControllerV2 : NSObject <CJPayBizDYPayPluginV2> {
    CJPayBizDYPayModel *_dypayModel;
    id /* block */ _completionBlock;
    NSMutableArray *_mutableControllers;
    CJPayBDCreateOrderResponse *_bdPayCreateOrderResponse;
    CJPayBDOrderResultResponse *_bdPayResultResponse;
    CJPayBizResultController *_bizResultController;
    NSString *_bdProcessInfoStr;
}

@property (retain, nonatomic) CJPayBizDYPayModel *dypayModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSMutableArray *mutableControllers;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *bdPayCreateOrderResponse;
@property (retain, nonatomic) CJPayBDOrderResultResponse *bdPayResultResponse;
@property (retain, nonatomic) CJPayBizResultController *bizResultController;
@property (copy, nonatomic) NSString *bdProcessInfoStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (void)dyPayWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setDypayModel:(id)arg0;
- (void)p_gotoCardListWithTipsMsg:(id)arg0 disableMsg:(id)arg1;
- (id)dypayModel;
- (void)p_queryBizOrderResult;
- (void)p_queryBizOrder:(long long)arg0 completion:(id /* block */)arg1;
- (id)mutableControllers;
- (void)p_handleWithResultModel:(id)arg0;
- (void)setBdPayResultResponse:(id)arg0;
- (void)setBdProcessInfoStr:(id)arg0;
- (void)p_callBackBiz;
- (id)bdPayResultResponse;
- (id)bizResultController;
- (id)bdPayCreateOrderResponse;
- (id)bdProcessInfoStr;
- (void)setMutableControllers:(id)arg0;
- (void)setBdPayCreateOrderResponse:(id)arg0;
- (void)setBizResultController:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;

@end
