//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveAuthorizationControllerProvider;

@interface IESLiveAuthorizationPiperHandler : NSObject <IESLivePiperHandlerProtocol> {
    id<IESLiveAuthorizationControllerProvider> _authorizationService;
}

@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (void)setAuthorizationService:(id)arg0;
- (void).cxx_destruct;
- (id)authorizationService;

@end
