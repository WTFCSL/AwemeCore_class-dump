//
//     Generated by private class-dump
//

@interface AWESECAppJumpGatewayModule : NSObject

+ (long long)appJumpContext:(id)arg0 confirmAction:(id /* block */)arg1 cancelAction:(id /* block */)arg2 source:(id)arg3;
+ (id)findArbiterWithRiskLevel:(unsigned long long)arg0 source:(id)arg1;
+ (void)recordErrorToThreadWithArbiter:(id)arg0;
+ (long long)executeArbiter:(id)arg0 confirmAction:(id /* block */)arg1 cancelAction:(id /* block */)arg2;
+ (id)blockToastWithRulerResult:(id)arg0;
+ (id)createDialogBluePrintWithRulerResult:(id)arg0;
+ (void)executeSecLinkArbiterInMainThreadByForce:(id)arg0 confirmAction:(id /* block */)arg1 cancelAction:(id /* block */)arg2;
+ (void)executeSecLinkArbiter:(id)arg0 confirmAction:(id /* block */)arg1 cancelAction:(id /* block */)arg2;
+ (id)decisionMaker;

@end
