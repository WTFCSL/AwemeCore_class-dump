//
//     Generated by private class-dump
//

@class NSString, AWEPOIInfoModel;

@interface AWEPOINearbyMapEntryModel : MTLModel <MTLJSONSerializing> {
    AWEPOIInfoModel *_poiInfo;
    NSString *_nearbyRecommend;
}

@property (retain, nonatomic) AWEPOIInfoModel *poiInfo;
@property (copy, nonatomic) NSString *nearbyRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiInfo;
- (void)setPoiInfo:(id)arg0;
- (id)nearbyRecommend;
- (void)setNearbyRecommend:(id)arg0;
- (void).cxx_destruct;

@end
