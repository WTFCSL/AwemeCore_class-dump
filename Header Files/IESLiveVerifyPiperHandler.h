//
//     Generated by private class-dump
//

@class NSString, IESLiveVerify;

@interface IESLiveVerifyPiperHandler : NSObject <IESLivePiperHandlerProtocol> {
    IESLiveVerify *_verify;
}

@property (retain, nonatomic) IESLiveVerify *verify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (void)setVerify:(id)arg0;
- (void)registerVerifyWithBridge:(id)arg0;
- (void).cxx_destruct;
- (id)verify;

@end