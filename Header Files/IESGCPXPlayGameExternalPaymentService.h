//
//     Generated by private class-dump
//

@class IESGCPXPlayGameModel, IESGCPXPlayGameAPI, IESGCPXPlayGamePaymentManager;

@interface IESGCPXPlayGameExternalPaymentService : NSObject {
    IESGCPXPlayGameModel *_gameModel;
    long long _interfaceOrientation;
    IESGCPXPlayGameAPI *_api;
    IESGCPXPlayGamePaymentManager *_paymentManager;
}

@property (retain, nonatomic) IESGCPXPlayGameModel *gameModel;
@property (nonatomic) long long interfaceOrientation;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (retain, nonatomic) IESGCPXPlayGamePaymentManager *paymentManager;

- (void)initXPlayGamePayForGameId:(id)arg0 gameName:(id)arg1 orientation:(long long)arg2;
- (void)xplayGamePayWithOutOrderId:(id)arg0 completion:(id /* block */)arg1;
- (id)paymentManager;
- (void)setPaymentManager:(id)arg0;
- (id)init;
- (long long)interfaceOrientation;
- (void).cxx_destruct;
- (void)setInterfaceOrientation:(long long)arg0;
- (id)api;
- (void)setApi:(id)arg0;
- (id)gameModel;
- (void)setGameModel:(id)arg0;

@end
