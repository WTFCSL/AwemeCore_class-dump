//
//     Generated by private class-dump
//

@class NSString, IESECShopProductsHybridContext;

@interface IESECShopProductsLigoSubscriberTarget : NSObject <IESECShopProductsLigoSubscriber> {
    IESECShopProductsHybridContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProductsInfo:(id)arg0;
- (void)messageReceived_IESECOpenProductRefreshMessage:(id)arg0;
- (id)initWithHybridContext:(id)arg0;
- (void)updateCellsWithProductsMap:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end
