//
//     Generated by private class-dump
//

@class NSString, IESECShopProductsHybridContext;

@interface IESECShopProductsProductInsertionTarget : NSObject <IESECShopProductsProductInsertionAction> {
    IESECShopProductsHybridContext *_context;
    NSString *_anchor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHybridContext:(id)arg0;
- (void)insertProductsWithAnimation:(id)arg0;
- (void)updateAnchorProductID:(id)arg0;
- (long long)targetInsertIndex;
- (void).cxx_destruct;

@end
