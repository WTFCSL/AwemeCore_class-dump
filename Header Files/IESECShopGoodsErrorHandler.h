//
//     Generated by private class-dump
//

@class IESECShopContext, NSString, IESECShopGoodsState;

@interface IESECShopGoodsErrorHandler : NSObject <IESECShopGoodsStateAttachable> {
    IESECShopGoodsState *_state;
}

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportWithError:(id)arg0;
- (id)legacyShopContext;
- (void)attachState:(id)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;

@end
