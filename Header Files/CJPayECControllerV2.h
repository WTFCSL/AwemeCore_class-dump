//
//     Generated by private class-dump
//

@class CJPayDouPayProcessController;

@interface CJPayECControllerV2 : NSObject {
    long long _cashierScene;
    id /* block */ _completion;
    CJPayDouPayProcessController *_douPayController;
}

@property (nonatomic) long long cashierScene;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayDouPayProcessController *douPayController;

- (id)checkTypeName;
- (id)getPerformanceInfo;
- (void)p_setCashierScene:(id)arg0;
- (void)p_handleParams:(id)arg0 response:(id)arg1;
- (void)setCashierScene:(long long)arg0;
- (long long)cashierScene;
- (void)startPaymentWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)p_getDefaultShowConfigWithResponse:(id)arg0;
- (id)douPayController;
- (void)p_handleDouPayResultWithResultModel:(id)arg0;
- (void)setDouPayController:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;

@end
