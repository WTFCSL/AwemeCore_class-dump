//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveWalletPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (void)registerRedeemDialogWithBridge:(id)arg0;
- (long long)showRedeemAlertFromTypeFromTag:(id)arg0;

@end
