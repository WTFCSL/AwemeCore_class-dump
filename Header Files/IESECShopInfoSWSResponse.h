//
//     Generated by private class-dump
//

@class NSDictionary;

@interface IESECShopInfoSWSResponse : IESECShopInfoResponse {
    NSDictionary *_blockData;
}

@property (retain, nonatomic) NSDictionary *blockData;

+ (id)blockDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setBlockData:(id)arg0;
- (id)blockData;
- (void)parseModuleListObjects;
- (void).cxx_destruct;

@end