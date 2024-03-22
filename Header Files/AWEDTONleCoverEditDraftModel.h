//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEDTONewCoverMobParams, AWEDTOCoverClipParams;

@interface AWEDTONleCoverEditDraftModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasShowedForceDialog;
    NSString *_draftFilePath;
    NSString *_draftCoverTemplateResFilePath;
    NSString *_draftCoverTemplateFilePath;
    NSString *_draftCoverTemplateId;
    NSString *_editCoverPath;
    NSString *_videoCoverSource;
    AWEDTOCoverClipParams *_coverClipParams;
    NSArray *_textStickerReview;
    NSArray *_draftNleMobLayers;
    AWEDTONewCoverMobParams *_reserved_kw_newCoverMobParams;
}

@property (copy, nonatomic) NSString *draftFilePath;
@property (copy, nonatomic) NSString *draftCoverTemplateResFilePath;
@property (copy, nonatomic) NSString *draftCoverTemplateFilePath;
@property (copy, nonatomic) NSString *draftCoverTemplateId;
@property (copy, nonatomic) NSString *editCoverPath;
@property (copy, nonatomic) NSString *videoCoverSource;
@property (retain, nonatomic) AWEDTOCoverClipParams *coverClipParams;
@property (copy, nonatomic) NSArray *textStickerReview;
@property (copy, nonatomic) NSArray *draftNleMobLayers;
@property (nonatomic) BOOL hasShowedForceDialog;
@property (retain, nonatomic) AWEDTONewCoverMobParams *reserved_kw_newCoverMobParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverClipParamsJSONTransformer;
+ (id)draftNleMobLayersJSONTransformer;
+ (id)reserved_kw_newCoverMobParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setHasShowedForceDialog:(BOOL)arg0;
- (id)draftFilePath;
- (void)setDraftFilePath:(id)arg0;
- (id)draftCoverTemplateResFilePath;
- (void)setDraftCoverTemplateResFilePath:(id)arg0;
- (id)draftCoverTemplateFilePath;
- (void)setDraftCoverTemplateFilePath:(id)arg0;
- (id)draftCoverTemplateId;
- (void)setDraftCoverTemplateId:(id)arg0;
- (id)editCoverPath;
- (void)setEditCoverPath:(id)arg0;
- (id)videoCoverSource;
- (void)setVideoCoverSource:(id)arg0;
- (id)coverClipParams;
- (void)setCoverClipParams:(id)arg0;
- (id)textStickerReview;
- (void)setTextStickerReview:(id)arg0;
- (id)draftNleMobLayers;
- (void)setDraftNleMobLayers:(id)arg0;
- (BOOL)hasShowedForceDialog;
- (id)reserved_kw_newCoverMobParams;
- (void)setReserved_kw_newCoverMobParams:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
