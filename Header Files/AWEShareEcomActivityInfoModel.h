//
//     Generated by private class-dump
//

@class NSString, AWEShareSpikeGoodsIMInfoModel;

@interface AWEShareEcomActivityInfoModel : MTLModel <MTLJSONSerializing> {
    AWEShareSpikeGoodsIMInfoModel *_imInfo;
}

@property (retain, nonatomic) AWEShareSpikeGoodsIMInfoModel *imInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)imInfo;
- (void)setImInfo:(id)arg0;
- (void).cxx_destruct;

@end