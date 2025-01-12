//
//     Generated by private class-dump
//

@class IESECSKUDetailContext, IESECSKUModel, NSArray, NSString, NSMutableArray;

@interface IESECSKUCouponViewModel : NSObject <IESECSKUViewModelProtocol> {
    NSArray *_couponTags;
    IESECSKUModel *_skuModel;
    IESECSKUDetailContext *_detailContext;
    NSMutableArray *_defaultCouponTags;
}

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) NSMutableArray *defaultCouponTags;
@property (copy, nonatomic) NSArray *couponTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (id)couponTags;
- (void)setCouponTags:(id)arg0;
- (id)skuModel;
- (void)setSkuModel:(id)arg0;
- (id)initWithSKUModel:(id)arg0 detailContext:(id)arg1;
- (id)defaultCouponTags;
- (void)setDefaultCouponTags:(id)arg0;
- (void).cxx_destruct;

@end
