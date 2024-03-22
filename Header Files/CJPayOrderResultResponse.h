//
//     Generated by private class-dump
//

@class NSArray, CJPayResultPageInfoModel, CJPayTradeInfo, NSString;
@protocol CJPayPaymentInfo;

@interface CJPayOrderResultResponse : CJPayIntergratedBaseResponse {
    CJPayTradeInfo *_tradeInfo;
    long long _remainTime;
    NSArray<CJPayPaymentInfo> *_paymentInfo;
    CJPayResultPageInfoModel *_resultPageInfo;
    NSString *_openSchema;
    NSString *_openUrl;
}

@property (retain, nonatomic) CJPayTradeInfo *tradeInfo;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSArray<CJPayPaymentInfo> *paymentInfo;
@property (retain, nonatomic) CJPayResultPageInfoModel *resultPageInfo;
@property (copy, nonatomic) NSString *openSchema;
@property (copy, nonatomic) NSString *openUrl;

+ (id)keyMapper;

- (void)setOpenUrl:(id)arg0;
- (id)openUrl;
- (void)setOpenSchema:(id)arg0;
- (id)openSchema;
- (id)tradeInfo;
- (void)setTradeInfo:(id)arg0;
- (id)paymentInfo;
- (void)setPaymentInfo:(id)arg0;
- (long long)remainTime;
- (void)setRemainTime:(long long)arg0;
- (id)resultPageInfo;
- (void)setResultPageInfo:(id)arg0;
- (void).cxx_destruct;

@end
