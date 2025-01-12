//
//     Generated by private class-dump
//

@class IESGCPSKCombined, IESGCPSKReserve, IESGCPSKStoreProduct, IESGCPSKCommercialAttribution, NSString, IESGCPSKDataConnection;

@interface IESGCPStoreKit : NSObject <IESGCPStoreKitInterface> {
    IESGCPSKStoreProduct *_storeProduct;
    IESGCPSKCommercialAttribution *_commercialAttribution;
    IESGCPSKCombined *_combined;
    IESGCPSKDataConnection *_dataConnection;
    IESGCPSKReserve *_reserve;
}

@property (retain, nonatomic) IESGCPSKStoreProduct *storeProduct;
@property (retain, nonatomic) IESGCPSKCommercialAttribution *commercialAttribution;
@property (retain, nonatomic) IESGCPSKCombined *combined;
@property (retain, nonatomic) IESGCPSKDataConnection *dataConnection;
@property (retain, nonatomic) IESGCPSKReserve *reserve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)attributionInterface;
- (id)dataConnectionInterface;
- (id)combinedInterface;
- (id)storeProductInterface;
- (id)reserveInterface;
- (id)storeProduct;
- (void)setStoreProduct:(id)arg0;
- (id)commercialAttribution;
- (void)setCommercialAttribution:(id)arg0;
- (void)setCombined:(id)arg0;
- (id)dataConnection;
- (void)setDataConnection:(id)arg0;
- (void).cxx_destruct;
- (void)setReserve:(id)arg0;
- (id)reserve;
- (id)combined;

@end
