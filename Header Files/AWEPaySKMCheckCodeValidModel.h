//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPaySKMCheckCodeValidModel : CJPayBaseResponse <AWEPayPaymentCodeRequestProtocol> {
    NSString *_errCode;
    NSString *_errMsg;
    NSString *_codeStatus;
    NSString *_codeAddressInfo;
    NSString *_msgHint;
}

@property (copy, nonatomic) NSString *errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *codeStatus;
@property (copy, nonatomic) NSString *codeAddressInfo;
@property (copy, nonatomic) NSString *msgHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)errCode;
- (id)errMsg;
- (void)setErrCode:(id)arg0;
- (void)setErrMsg:(id)arg0;
- (id)msgHint;
- (void)setMsgHint:(id)arg0;
- (id)codeAddressInfo;
- (id)codeStatus;
- (void)setCodeStatus:(id)arg0;
- (void)setCodeAddressInfo:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
