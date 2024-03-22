//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLivePiperProtocol;

@interface IESLiveStartLiveJSBHandler : NSObject <IESLivePiperHandlerProtocol> {
    id<IESLivePiperProtocol> _piper;
}

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)piper;
- (void)registerHandlerWithBridge:(id)arg0;
- (void)setPiper:(id)arg0;
- (void)registerBindSourceParams;
- (void).cxx_destruct;

@end