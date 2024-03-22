//
//     Generated by private class-dump
//

@class NSString, AWESearchADPendantOriginAdModel, AWESearchFullScreenAdEggPreloadModel;

@interface AWEAdSearchMiddlePageDataModel : MTLModel <MTLJSONSerializing> {
    NSString *_type;
    AWESearchADPendantOriginAdModel *_originADModel;
    AWESearchFullScreenAdEggPreloadModel *_adEggPreloadModel;
}

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWESearchADPendantOriginAdModel *originADModel;
@property (retain, nonatomic) AWESearchFullScreenAdEggPreloadModel *adEggPreloadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originADModelJSONTransformer;
+ (id)adEggPreloadModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)adEggPreloadModel;
- (id)originADModel;
- (void)setOriginADModel:(id)arg0;
- (void)setAdEggPreloadModel:(id)arg0;
- (unsigned long long)modelType;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;

@end