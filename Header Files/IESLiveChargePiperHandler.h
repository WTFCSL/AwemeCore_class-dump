//
//     Generated by private class-dump
//

@class HTSLiveApi, NSString;

@interface IESLiveChargePiperHandler : NSObject <IESLivePiperHandlerProtocol> {
    HTSLiveApi *_api;
}

@property (retain, nonatomic) HTSLiveApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (void)registerFetchRechargeStatus:(id)arg0;
- (void)registerFetchOrderIdWithBridge:(id)arg0;
- (void)registerOpenLiveCertJSB:(id)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
