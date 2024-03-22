//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEDanmakuEggMaterial : AWEBaseApiModel {
    NSNumber *_activityID;
    NSNumber *_materialID;
    NSString *_materialPath;
    long long _materialType;
    double _materialRatio;
    NSNumber *_probability;
    NSString *_materialMd5;
}

@property (retain, nonatomic) NSNumber *activityID;
@property (retain, nonatomic) NSNumber *materialID;
@property (readonly, copy, nonatomic) NSString *materialPath;
@property (readonly, nonatomic) long long materialType;
@property (readonly, nonatomic) double materialRatio;
@property (readonly, nonatomic) NSNumber *probability;
@property (readonly, copy, nonatomic) NSString *materialMd5;

+ (id)JSONKeyPathsByPropertyKey;

- (id)materialID;
- (void)setMaterialID:(id)arg0;
- (id)materialPath;
- (id)materialMd5;
- (double)materialRatio;
- (void).cxx_destruct;
- (id)description;
- (long long)materialType;
- (id)probability;
- (id)activityID;
- (void)setActivityID:(id)arg0;

@end
