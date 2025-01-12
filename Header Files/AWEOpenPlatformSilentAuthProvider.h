//
//     Generated by private class-dump
//

@class NSString, AWEOpenPlatformAuthFlowManager;

@interface AWEOpenPlatformSilentAuthProvider : NSObject <AWEOpenPlatformBridgeAuthViewController, AWEOpenPlatformAuthFlowManagerDelegate> {
    id /* block */ _bridgeAuthCompletionBlock;
    AWEOpenPlatformAuthFlowManager *_flowManager;
}

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (copy, nonatomic) id /* block */ bridgeAuthCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorizeComplated:(id)arg0 error:(id)arg1;
- (void)fetchAuthUserInfoCompleted:(id)arg0;
- (id /* block */)bridgeAuthCompletionBlock;
- (void)setBridgeAuthCompletionBlock:(id /* block */)arg0;
- (id)initWithJSBridgeParams:(id)arg0;
- (void)updateOauthData:(id)arg0;
- (void).cxx_destruct;
- (void)start;
- (id)flowManager;
- (void)setFlowManager:(id)arg0;

@end
