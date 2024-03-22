//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEShareSpikeGoodsDataModel;

@interface AWEShareSpikeGoodsResponseModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_st;
    NSString *_msg;
    AWEShareSpikeGoodsDataModel *_data;
    NSString *_dataJson;
}

@property (retain, nonatomic) NSNumber *st;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) AWEShareSpikeGoodsDataModel *data;
@property (copy, nonatomic) NSString *dataJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSt:(id)arg0;
- (id)dataJson;
- (void)setDataJson:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)st;
- (id)msg;
- (void)setMsg:(id)arg0;

@end