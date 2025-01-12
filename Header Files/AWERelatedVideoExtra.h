//
//     Generated by private class-dump
//

@class NSString, AWEMatchingColorInfoModel;

@interface AWERelatedVideoExtra : AWEBaseApiModel {
    NSString *_labelName;
    NSString *_diversionSchema;
    NSString *_diversionSchemaUninstall;
    NSString *_labelType;
    NSString *_querys;
    NSString *_tags;
    long long _relatedItemDiversionType;
    AWEMatchingColorInfoModel *_coverBaseColorInfo;
    NSString *_sourceType;
    NSString *_desc;
}

@property (copy, nonatomic) NSString *labelName;
@property (copy, nonatomic) NSString *diversionSchema;
@property (copy, nonatomic) NSString *diversionSchemaUninstall;
@property (copy, nonatomic) NSString *labelType;
@property (copy, nonatomic) NSString *querys;
@property (copy, nonatomic) NSString *tags;
@property (nonatomic) long long relatedItemDiversionType;
@property (retain, nonatomic) AWEMatchingColorInfoModel *coverBaseColorInfo;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *desc;

+ (id)coverBaseColorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diversionSchema;
- (void)setDiversionSchema:(id)arg0;
- (id)diversionSchemaUninstall;
- (void)setDiversionSchemaUninstall:(id)arg0;
- (id)querys;
- (void)setQuerys:(id)arg0;
- (long long)relatedItemDiversionType;
- (void)setRelatedItemDiversionType:(long long)arg0;
- (id)coverBaseColorInfo;
- (void)setCoverBaseColorInfo:(id)arg0;
- (id)desc;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (id)labelType;
- (void).cxx_destruct;
- (id)tags;
- (void)setTags:(id)arg0;
- (void)setLabelType:(id)arg0;
- (void)setDesc:(id)arg0;
- (id)labelName;
- (void)setLabelName:(id)arg0;

@end
