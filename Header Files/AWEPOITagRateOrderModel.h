//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOITagRateOrderModel : MTLModel <MTLJSONSerializing> {
    NSString *_orderId;
    NSString *_spuName;
}

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *spuName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)orderId;
- (void)setOrderId:(id)arg0;
- (id)spuName;
- (void)setSpuName:(id)arg0;
- (void).cxx_destruct;

@end
