//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWENearbySkyLightPOICollectionModel : MTLModel <MTLJSONSerializing> {
    BOOL _isRecommend;
    NSString *_poiID;
    NSString *_poiItemID;
    NSString *_poiName;
    NSString *_distance;
    AWEURLModel *_coverUrl;
}

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiItemID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *distance;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (nonatomic) BOOL isRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)poiName;
- (id)poiID;
- (id)coverUrl;
- (void)setPoiName:(id)arg0;
- (void)setPoiID:(id)arg0;
- (BOOL)isRecommend;
- (void)setIsRecommend:(BOOL)arg0;
- (id)poiItemID;
- (void)setPoiItemID:(id)arg0;
- (id)distance;
- (void)setDistance:(id)arg0;
- (void).cxx_destruct;

@end