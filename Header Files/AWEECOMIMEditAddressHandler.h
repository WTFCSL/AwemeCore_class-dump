//
//     Generated by private class-dump
//

@class BDXBridgeEventSubscriber, NSString, NSNumber;

@interface AWEECOMIMEditAddressHandler : NSObject {
    NSString *_chooseAddressUrl;
    NSNumber *_shopId;
    NSString *_orderId;
    id /* block */ _completion;
    BDXBridgeEventSubscriber *_editAddressSubscriber;
}

@property (retain, nonatomic) BDXBridgeEventSubscriber *editAddressSubscriber;
@property (copy, nonatomic) NSString *chooseAddressUrl;
@property (retain, nonatomic) NSNumber *shopId;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) id /* block */ completion;

- (id)shopId;
- (void)setShopId:(id)arg0;
- (id)orderId;
- (void)setOrderId:(id)arg0;
- (void)setChooseAddressUrl:(id)arg0;
- (id)editAddressSubscriber;
- (void)setEditAddressSubscriber:(id)arg0;
- (void)innerEditAddress;
- (void)checkUpdateAddressWithCompletion:(id /* block */)arg0;
- (id)chooseAddressUrl;
- (void)onChooseAddress:(id)arg0;
- (void)run;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;

@end