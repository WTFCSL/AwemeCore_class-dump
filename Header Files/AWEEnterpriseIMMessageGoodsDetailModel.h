//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEEnterpriseIMMessageGoodsDetailModel : MTLModel <MTLJSONSerializing> {
    NSString *_pushDetail;
    NSArray *_goodsArray;
}

@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSArray *goodsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)goodsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)pushDetail;
- (void)setPushDetail:(id)arg0;
- (id)goodsArray;
- (void)setGoodsArray:(id)arg0;
- (void).cxx_destruct;

@end