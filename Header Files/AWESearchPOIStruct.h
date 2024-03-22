//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEURLModel;

@interface AWESearchPOIStruct : AWEBaseApiModel {
    NSString *_poiName;
    NSString *_poiDescription;
    NSString *_schema;
    NSArray *_iconList;
    NSArray *_iconListLight;
    AWEURLModel *_cover;
}

@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiDescription;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *iconList;
@property (copy, nonatomic) NSArray *iconListLight;
@property (copy, nonatomic) AWEURLModel *cover;

+ (id)coverJSONTransformer;
+ (id)iconListJSONTransformer;
+ (id)iconListLightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)poiName;
- (void)setPoiName:(id)arg0;
- (id)iconList;
- (void)setIconList:(id)arg0;
- (id)poiDescription;
- (void)setPoiDescription:(id)arg0;
- (id)iconListLight;
- (void)setIconListLight:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)schema;

@end
