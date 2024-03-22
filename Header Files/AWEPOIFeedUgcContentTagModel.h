//
//     Generated by private class-dump
//

@class NSString, NSValue, AWEPOIFeedUgcContentAttitudeTagModel;

@interface AWEPOIFeedUgcContentTagModel : MTLModel <AWEPOIDetailFeedUgcCommonTagSizeModelProtocol, MTLJSONSerializing> {
    unsigned long long _tagType;
    AWEPOIFeedUgcContentAttitudeTagModel *_attitudeTag;
    NSString *_consumerExperienceTag;
    NSString *_shortConsumerExperienceTag;
    NSString *_consumerExperienceTagType;
}

@property (copy, nonatomic) NSString *truncatedConsumedTag;
@property (retain, nonatomic) NSValue *tagSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long tagType;
@property (retain, nonatomic) AWEPOIFeedUgcContentAttitudeTagModel *attitudeTag;
@property (copy, nonatomic) NSString *consumerExperienceTag;
@property (copy, nonatomic) NSString *shortConsumerExperienceTag;
@property (copy, nonatomic) NSString *consumerExperienceTagType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tagSize;
- (void)setTagSize:(id)arg0;
- (id)truncatedConsumedTag;
- (void)setTruncatedConsumedTag:(id)arg0;
- (id)attitudeTag;
- (void)setAttitudeTag:(id)arg0;
- (id)consumerExperienceTag;
- (void)setConsumerExperienceTag:(id)arg0;
- (id)shortConsumerExperienceTag;
- (void)setShortConsumerExperienceTag:(id)arg0;
- (id)consumerExperienceTagType;
- (void)setConsumerExperienceTagType:(id)arg0;
- (unsigned long long)tagType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setTagType:(unsigned long long)arg0;

@end
