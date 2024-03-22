//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface ACCGrootDetailsStickerFilterModel : MTLModel <MTLJSONSerializing> {
    NSString *_speciesName;
    NSNumber *_prob;
    NSNumber *_baikeId;
    NSString *_baikeHeadImage;
    NSString *_baikeIcon;
    NSString *_categoryName;
    NSString *_engName;
}

@property (copy, nonatomic) NSString *speciesName;
@property (copy, nonatomic) NSNumber *prob;
@property (copy, nonatomic) NSNumber *baikeId;
@property (copy, nonatomic) NSString *baikeHeadImage;
@property (copy, nonatomic) NSString *baikeIcon;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *engName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)baikeId;
- (id)speciesName;
- (void)setSpeciesName:(id)arg0;
- (void)setBaikeId:(id)arg0;
- (id)baikeHeadImage;
- (void)setBaikeHeadImage:(id)arg0;
- (id)baikeIcon;
- (void)setBaikeIcon:(id)arg0;
- (id)engName;
- (void)setEngName:(id)arg0;
- (void).cxx_destruct;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (id)prob;
- (void)setProb:(id)arg0;

@end
