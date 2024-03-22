//
//     Generated by private class-dump
//

@class NSString, NSArray, ACCMultiSegmentPropExtra, NSDictionary, AWEDTOEditInsertPropParam;

@interface AWEDTOPropModel : MTLModel <MTLJSONSerializing> {
    NSString *_fromPropId;
    NSString *_isDefaultProp;
    long long _totalStickerSavePhotos;
    NSArray *_propBindMusicId;
    long long _propCardPosition;
    NSString *_editPropId;
    NSDictionary *_editPropExtraInfo;
    NSString *_fromCustomizedId;
    NSString *_isDefaultContent;
    NSString *_fromTemplateId;
    NSString *_storyGuidePlusIconType;
    NSArray *_bringInStickerIds;
    NSDictionary *_asyncAiPropChallengeDict;
    NSString *_isAigcSyncPropMode;
    NSString *_aigcSyncPropPhotoPath;
    NSString *_propProvider;
    NSString *_propZipSize;
    AWEDTOEditInsertPropParam *_editInsertPropParam;
    NSString *_propType;
}

@property (retain, nonatomic) ACCMultiSegmentPropExtra *multiSegmentPropClipsInfo;
@property (copy, nonatomic) NSString *fromPropId;
@property (copy, nonatomic) NSString *isDefaultProp;
@property (nonatomic) long long totalStickerSavePhotos;
@property (copy, nonatomic) NSArray *propBindMusicId;
@property (nonatomic) long long propCardPosition;
@property (copy, nonatomic) NSString *editPropId;
@property (copy, nonatomic) NSDictionary *editPropExtraInfo;
@property (copy, nonatomic) NSString *fromCustomizedId;
@property (copy, nonatomic) NSString *isDefaultContent;
@property (copy, nonatomic) NSString *fromTemplateId;
@property (copy, nonatomic) NSString *storyGuidePlusIconType;
@property (copy, nonatomic) NSArray *bringInStickerIds;
@property (copy, nonatomic) NSDictionary *asyncAiPropChallengeDict;
@property (copy, nonatomic) NSString *isAigcSyncPropMode;
@property (copy, nonatomic) NSString *aigcSyncPropPhotoPath;
@property (copy, nonatomic) NSString *propProvider;
@property (copy, nonatomic) NSString *propZipSize;
@property (retain, nonatomic) AWEDTOEditInsertPropParam *editInsertPropParam;
@property (copy, nonatomic) NSString *propType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editInsertPropParamJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)multiSegmentPropClipsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)fromPropId;
- (void)setFromPropId:(id)arg0;
- (id)isDefaultProp;
- (void)setIsDefaultProp:(id)arg0;
- (long long)totalStickerSavePhotos;
- (void)setTotalStickerSavePhotos:(long long)arg0;
- (id)propBindMusicId;
- (void)setPropBindMusicId:(id)arg0;
- (long long)propCardPosition;
- (void)setPropCardPosition:(long long)arg0;
- (id)editPropId;
- (void)setEditPropId:(id)arg0;
- (id)editPropExtraInfo;
- (void)setEditPropExtraInfo:(id)arg0;
- (id)fromCustomizedId;
- (void)setFromCustomizedId:(id)arg0;
- (id)isDefaultContent;
- (void)setIsDefaultContent:(id)arg0;
- (id)fromTemplateId;
- (void)setFromTemplateId:(id)arg0;
- (id)storyGuidePlusIconType;
- (void)setStoryGuidePlusIconType:(id)arg0;
- (id)bringInStickerIds;
- (void)setBringInStickerIds:(id)arg0;
- (id)asyncAiPropChallengeDict;
- (void)setAsyncAiPropChallengeDict:(id)arg0;
- (id)isAigcSyncPropMode;
- (void)setIsAigcSyncPropMode:(id)arg0;
- (id)aigcSyncPropPhotoPath;
- (void)setAigcSyncPropPhotoPath:(id)arg0;
- (id)propProvider;
- (void)setPropProvider:(id)arg0;
- (id)propZipSize;
- (void)setPropZipSize:(id)arg0;
- (id)editInsertPropParam;
- (void)setEditInsertPropParam:(id)arg0;
- (id)propType;
- (void)setPropType:(id)arg0;
- (void)setMultiSegmentPropClipsInfo:(id)arg0;
- (id)multiSegmentPropClipsInfo;
- (void).cxx_destruct;

@end