//
//     Generated by private class-dump
//

@protocol DYPhoneBindManagerProtocol <NSObject>

- (void)finishBindPhoneWithPlatform:(unsigned long long)arg0;
- (id)initWithEnterFrom:(id)arg0 platform:(unsigned long long)arg1;
- (id)initWithEnterFrom:(id)arg0 platform:(unsigned long long)arg1 routerModel:(id)arg2;
- (long long)getVerifyCodeType;
- (void)authLoginSuccess;
- (void)authLoginFail;
- (void)requestBindPhoneNumber:(id)arg0 code:(id)arg1 ticket:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSendCodeWithPhoneNumber:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (void)requestSendVoiceCodeWithPhoneNumber:(id)arg0 ticket:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setFinishBlock:(id /* block */)arg0;

@optional

- (void)cancelBindPhoneWithPlatform:(unsigned long long)arg0 skipBlock:(id /* block */)arg1;
- (void)requestSendCodeWithPhoneNumber:(id)arg0 ticket:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)requestBindSafePhoneNumber:(id)arg0 code:(id)arg1 ticket:(id)arg2 needUpdateUser:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)requestSendCodeWithSafePhoneNumber:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;

@end