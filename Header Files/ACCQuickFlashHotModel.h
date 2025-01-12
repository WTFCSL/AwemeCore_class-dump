//
//     Generated by private class-dump
//

@class NSString;

@interface ACCQuickFlashHotModel : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    long long _type;
    NSString *_flashMobId;
    NSString *_recommendSourceList;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *flashMobId;
@property (copy, nonatomic) NSString *recommendSourceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)flashMobId;
- (void)setFlashMobId:(id)arg0;
- (id)recommendSourceList;
- (void)setRecommendSourceList:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)text;

@end
