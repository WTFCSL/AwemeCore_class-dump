//
//     Generated by private class-dump
//

@interface CJPayBioPaymentCheckResponse : CJPayBaseResponse {
    BOOL _fingerPrintPay;
    BOOL _faceIdPay;
}

@property (nonatomic) BOOL fingerPrintPay;
@property (nonatomic) BOOL faceIdPay;

+ (id)keyMapper;

- (BOOL)fingerPrintPay;
- (BOOL)faceIdPay;
- (void)setFingerPrintPay:(BOOL)arg0;
- (void)setFaceIdPay:(BOOL)arg0;

@end
