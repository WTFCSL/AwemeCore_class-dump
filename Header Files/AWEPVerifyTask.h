//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPVerifyTask : HTSService <AWEPassportVerifyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)verifyAccountPassword:(id)arg0 verifyTicket:(id)arg1;
+ (id)verifyBindThird:(id)arg0 verifyTicket:(id)arg1 platform:(unsigned long long)arg2;
+ (id)verifyUpstreamSMSWithVerifyTicket:(id)arg0;
+ (id)startUpstreamSMSQueryVerifyWithTicket:(id)arg0;

- (void)verifyAccountPassword:(id)arg0 verifyTicket:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyBindThird:(id)arg0 verifyTicket:(id)arg1 platform:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)verifyUpstreamSMSWithVerifyTicket:(id)arg0 completion:(id /* block */)arg1;

@end
