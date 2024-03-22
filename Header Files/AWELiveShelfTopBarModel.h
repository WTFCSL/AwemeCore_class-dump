//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface AWELiveShelfTopBarModel : MTLModel <MTLJSONSerializing> {
    NSString *_orderCenterUrl;
    NSDictionary *_originData;
    NSString *_poiDetailAddress;
    NSString *_poiTag;
    NSString *_poiProvince;
    NSString *_poiDistance;
    unsigned long long _poiTopbarVersion;
    NSArray *_tabList;
    unsigned long long _barType;
}

@property (copy, nonatomic) NSString *orderCenterUrl;
@property (copy, nonatomic) NSDictionary *originData;
@property (copy, nonatomic) NSString *poiDetailAddress;
@property (copy, nonatomic) NSString *poiTag;
@property (copy, nonatomic) NSString *poiProvince;
@property (copy, nonatomic) NSString *poiDistance;
@property (nonatomic) unsigned long long poiTopbarVersion;
@property (copy, nonatomic) NSArray *tabList;
@property (nonatomic) unsigned long long barType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiTag;
- (id)tabList;
- (void)setPoiTag:(id)arg0;
- (void)setBarType:(unsigned long long)arg0;
- (void)setTabList:(id)arg0;
- (id)originData;
- (void)setOriginData:(id)arg0;
- (id)poiDistance;
- (void)setPoiDistance:(id)arg0;
- (unsigned long long)poiTopbarVersion;
- (id)poiDetailAddress;
- (id)poiProvince;
- (id)orderCenterUrl;
- (void)setOrderCenterUrl:(id)arg0;
- (void)setPoiDetailAddress:(id)arg0;
- (void)setPoiProvince:(id)arg0;
- (void)setPoiTopbarVersion:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)barType;

@end
