//
//     Generated by private class-dump
//

@protocol DTFRPCProxyProtocol <NSObject>

- (void)zimInit:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)zimValidate:(id)arg0 completionBlock:(id /* block */)arg1;

@optional

- (void)zimNFCValidate:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)requestSMSVerifyCode:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)checkSMSCode:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)zimOCRIdentify:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)zimEKYCOCRIdentify:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)zimEKYCOCRConfirmIdentify:(id)arg0 completionBlock:(id /* block */)arg1;

@end
