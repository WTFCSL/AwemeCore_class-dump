//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSNumber, AWEURLModel;
@protocol AWEAdPreloadComponentContext;

@interface AWEOriginalAdLynxComponentModel : MTLModel <MTLJSONSerializing, AWEAdPreloadComponentProtocol> {
    NSMutableDictionary *_componentStages;
    id<AWEAdPreloadComponentContext> _componentContext;
    unsigned long long _lynxType;
    unsigned long long _sceneType;
    NSString *_lynxButtonTemplateSchema;
    NSDictionary *_lynxRawData;
    long long _buttonStyle;
    NSString *_buttonText;
    NSString *_learnMoreBgColor;
    NSNumber *_changeButtonColorTime;
    long long _showLearnMoreAfterSeconds;
    NSArray *_geckoInfoList;
    AWEURLModel *_webIconURL;
    long long _cnyPendantPreloadType;
    long long _cnyCompassPreloadType;
    unsigned long long _zIndexType;
}

@property (nonatomic) unsigned long long lynxType;
@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *lynxButtonTemplateSchema;
@property (copy, nonatomic) NSDictionary *lynxRawData;
@property (nonatomic) long long buttonStyle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *learnMoreBgColor;
@property (retain, nonatomic) NSNumber *changeButtonColorTime;
@property (nonatomic) long long showLearnMoreAfterSeconds;
@property (readonly, nonatomic) BOOL isValidLynxComponent;
@property (copy, nonatomic) NSArray *geckoInfoList;
@property (retain, nonatomic) AWEURLModel *webIconURL;
@property (nonatomic) long long cnyPendantPreloadType;
@property (nonatomic) long long cnyCompassPreloadType;
@property (nonatomic) unsigned long long zIndexType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)geckoInfoListJSONTransformer;
+ (id)webIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg0;

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (id)learnMoreBgColor;
- (void)setLearnMoreBgColor:(id)arg0;
- (unsigned long long)lynxType;
- (void)setLynxType:(unsigned long long)arg0;
- (id)lynxRawData;
- (void)setLynxRawData:(id)arg0;
- (id)changeButtonColorTime;
- (void)setChangeButtonColorTime:(id)arg0;
- (long long)showLearnMoreAfterSeconds;
- (void)setShowLearnMoreAfterSeconds:(long long)arg0;
- (id)lynxButtonTemplateSchema;
- (void)setLynxButtonTemplateSchema:(id)arg0;
- (void)setCnyCompassPreloadType:(long long)arg0;
- (id)geckoInfoList;
- (unsigned long long)zIndexType;
- (BOOL)isValidLynxComponent;
- (id)webIconURL;
- (void)setCnyPendantPreloadType:(long long)arg0;
- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (id)componentStages;
- (void)setComponentStages:(id)arg0;
- (long long)cnyPendantPreloadType;
- (long long)cnyCompassPreloadType;
- (void)setGeckoInfoList:(id)arg0;
- (void)setWebIconURL:(id)arg0;
- (void)setZIndexType:(unsigned long long)arg0;
- (id)init;
- (long long)buttonStyle;
- (void).cxx_destruct;
- (id)buttonText;
- (id)componentType;
- (void)setButtonStyle:(long long)arg0;
- (void)setButtonText:(id)arg0;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg0;

@end
