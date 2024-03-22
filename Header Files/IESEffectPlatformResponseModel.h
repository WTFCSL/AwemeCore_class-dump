//
//     Generated by private class-dump
//

@class IESPlatformPanelModel, NSString, NSArray, NSMutableDictionary;

@interface IESEffectPlatformResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _needReprocessEffects;
    NSString *_version;
    NSString *_defaultFrontFilterID;
    NSString *_defaultRearFilterID;
    NSArray *_collection;
    IESPlatformPanelModel *_panel;
    NSArray *_urlPrefix;
    NSString *_requestID;
    NSString *_recId;
    NSArray *_effects;
    NSArray *_categories;
    NSMutableDictionary *_effectsMap;
}

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *defaultFrontFilterID;
@property (copy, nonatomic) NSString *defaultRearFilterID;
@property (copy, nonatomic) NSArray *collection;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) IESPlatformPanelModel *panel;
@property (retain, nonatomic) NSMutableDictionary *effectsMap;
@property (nonatomic) BOOL needReprocessEffects;
@property (readonly, copy, nonatomic) NSArray *downloadedEffects;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *recId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)recId;
- (void)setRecId:(id)arg0;
- (id)effectsMap;
- (void)preProcessEffects;
- (id)defaultFrontFilterID;
- (void)setDefaultFrontFilterID:(id)arg0;
- (id)defaultRearFilterID;
- (void)setDefaultRearFilterID:(id)arg0;
- (void)setEffectsMap:(id)arg0;
- (BOOL)needReprocessEffects;
- (void)setNeedReprocessEffects:(BOOL)arg0;
- (id)downloadedEffects;
- (void)setCollection:(id)arg0;
- (id)categories;
- (void)setRequestID:(id)arg0;
- (void)setVersion:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)effects;
- (id)version;
- (id)collection;
- (void)setEffects:(id)arg0;
- (id)panel;
- (void)setPanelName:(id)arg0;
- (void)setPanel:(id)arg0;
- (id)urlPrefix;

@end
