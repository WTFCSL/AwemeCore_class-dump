//
//     Generated by private class-dump
//

@class NSString;

@interface AWETaoBaoGoodsCouponModel : MTLModel <MTLJSONSerializing> {
    NSString *_couponPrice;
    NSString *_webUrlStr;
    NSString *_openUrlStr;
}

@property (copy, nonatomic) NSString *couponPrice;
@property (copy, nonatomic) NSString *webUrlStr;
@property (copy, nonatomic) NSString *openUrlStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)couponPrice;
- (id)webUrlStr;
- (id)openUrlStr;
- (void)setCouponPrice:(id)arg0;
- (void)setWebUrlStr:(id)arg0;
- (void)setOpenUrlStr:(id)arg0;
- (void).cxx_destruct;

@end
