//
//     Generated by private class-dump
//

@class IESCategoryEffectsModel, NSArray, NSString, IESPlatformPanelModel, NSMutableDictionary;

@interface IESMergePanelInfoResponse : MTLModel <MTLJSONSerializing> {
    BOOL _updated;
    IESCategoryEffectsModel *_categoryEffects;
    NSArray *_categories;
    NSString *_recId;
    IESPlatformPanelModel *_panel;
    NSArray *_urlPrefix;
    NSString *_version;
    NSString *_defaultFrontFilterID;
    NSString *_defaultRearFilterID;
    NSMutableDictionary *_effectsMap;
}

@property (readonly, copy, nonatomic) IESCategoryEffectsModel *categoryEffects;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) NSString *recId;
@property (readonly, copy, nonatomic) IESPlatformPanelModel *panel;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *defaultFrontFilterID;
@property (readonly, copy, nonatomic) NSString *defaultRearFilterID;
@property (readonly, nonatomic) NSMutableDictionary *effectsMap;
@property (readonly, nonatomic) BOOL updated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)recId;
- (id)categoryEffects;
- (id)effectsMap;
- (void)preProcessEffects;
- (id)defaultFrontFilterID;
- (id)defaultRearFilterID;
- (id)categories;
- (void).cxx_destruct;
- (BOOL)updated;
- (id)version;
- (id)panel;
- (void)setPanelName:(id)arg0;
- (id)urlPrefix;

@end
