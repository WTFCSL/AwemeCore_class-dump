//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPayJsBridgeService : HTSService <WXApiDelegate, HTSService, AWEPayJsBridgeServiceInterface> {
    id /* block */ _alipayCallback;
    id /* block */ _wxpayCallback;
}

@property (copy, nonatomic) id /* block */ alipayCallback;
@property (copy, nonatomic) id /* block */ wxpayCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECommerceModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEECommerceModuleServiceDOUYINHTSAdaperClass;

- (void)payWithAlipay:(id)arg0 completion:(id /* block */)arg1;
- (void)payWithWeChatPay:(id)arg0 completion:(id /* block */)arg1;
- (void)launchMiniProgramWithWechat:(id)arg0 completion:(id /* block */)arg1;
- (void)preparePayWithOrderID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)handleAppOpenUrl:(id)arg0;
- (BOOL)handleAppContinueUserActivity:(id)arg0;
- (id)aAWEECommerceModuleServiceDOUYINLiteAdaper;
- (id)aAWEECommerceModuleServiceDOUYINHTSAdaper;
- (void)weChatOnResponse:(id)arg0;
- (void)setWxpayCallback:(id /* block */)arg0;
- (id /* block */)wxpayCallback;
- (id /* block */)alipayCallback;
- (void)setAlipayCallback:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end