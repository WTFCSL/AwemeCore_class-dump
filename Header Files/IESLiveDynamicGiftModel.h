//
//     Generated by private class-dump
//

@class HTSLiveAssetStruct, NSString, NSDictionary, HTSLiveImage, NSArray, NSNumber;

@interface IESLiveDynamicGiftModel : NSObject {
    BOOL _isSourceRoom;
    NSNumber *_giftId;
    HTSLiveAssetStruct *_lynxEffectModel;
    long long _type;
    NSString *_lynxSchema;
    NSDictionary *_extraParams;
    HTSLiveImage *_anchorDiyOriginImg;
    NSArray *_assetList;
}

@property (copy, nonatomic) NSString *itemListStr;
@property (copy, nonatomic) NSString *interactiveGiftInfo;
@property (nonatomic) BOOL isSentBySelf;
@property (nonatomic) long long path;
@property (retain, nonatomic) NSNumber *targetAssetId;
@property (retain, nonatomic) NSNumber *giftId;
@property (retain, nonatomic) HTSLiveAssetStruct *lynxEffectModel;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isSourceRoom;
@property (retain, nonatomic) HTSLiveImage *anchorDiyOriginImg;
@property (copy, nonatomic) NSArray *assetList;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)lynxSchema;
- (void)setLynxSchema:(id)arg0;
- (id)giftId;
- (void)setGiftId:(id)arg0;
- (id)anchorDiyOriginImg;
- (id)itemListStr;
- (void)setItemListStr:(id)arg0;
- (void)recordAssemblyGiftDynamicModel;
- (BOOL)isSentBySelf;
- (id)interactiveGiftInfo;
- (id)targetAssetId;
- (void)setIsSentBySelf:(BOOL)arg0;
- (void)setInteractiveGiftInfo:(id)arg0;
- (void)setTargetAssetId:(id)arg0;
- (id)interactiveGiftInfoWithPath;
- (id)interactiveGiftInfoStr;
- (id)lynxEffectModel;
- (id)assetLocalPathStr;
- (BOOL)isLynxSchemaReady;
- (BOOL)isAnimationPreposedForSender;
- (id)dynamicGiftInfo;
- (id)dynamicGiftInfoDict;
- (void)setLynxEffectModel:(id)arg0;
- (BOOL)isSourceRoom;
- (void)setIsSourceRoom:(BOOL)arg0;
- (void)setAnchorDiyOriginImg:(id)arg0;
- (void)setPath:(long long)arg0;
- (void).cxx_destruct;
- (long long)path;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)modelPath;
- (id)assetList;
- (void)setAssetList:(id)arg0;
- (BOOL)isModelReady;

@end
