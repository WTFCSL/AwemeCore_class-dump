//
//     Generated by private class-dump
//

@class NSArray, ACCTemplateDetailModel, NSString, ACCMusicEditInfo;

@interface ACCRecommendTemplateInfo : MTLModel <MTLJSONSerializing, NSCopying> {
    ACCTemplateDetailModel *_templateBaseInfo;
    ACCMusicEditInfo *_musicEditInfo;
    NSArray *_segmentInfos;
    NSString *_meta;
}

@property (retain, nonatomic) ACCTemplateDetailModel *templateBaseInfo;
@property (retain, nonatomic) ACCMusicEditInfo *musicEditInfo;
@property (retain, nonatomic) NSArray *segmentInfos;
@property (copy, nonatomic) NSString *meta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentInfosJSONTransformer;
+ (id)musicEditInfoJSONTransformer;
+ (id)templateBaseInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)templateBaseInfo;
- (id)musicEditInfo;
- (void)setTemplateBaseInfo:(id)arg0;
- (void)setMusicEditInfo:(id)arg0;
- (void)setMeta:(id)arg0;
- (id)meta;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)segmentInfos;
- (void)setSegmentInfos:(id)arg0;

@end
