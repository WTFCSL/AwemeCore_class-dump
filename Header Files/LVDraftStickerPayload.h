//
//     Generated by private class-dump
//

@class _LVDraftStickerPayloadPackage, NSString;

@interface LVDraftStickerPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVDraftStickerPayloadPackage *package;
@property (copy, nonatomic) NSString *relativePath;
@property (nonatomic) double initialScale;
@property (copy, nonatomic) NSString *resourceMD5;
@property (copy, nonatomic) NSString *emojiUnicode;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long checkFlag;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *previewCoverUrl;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) long long sourcePlatform;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *unicode;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })defaultDuration;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)stickerID;
- (void)setStickerID:(id)arg0;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *x0; struct __shared_weak_count *x1; })arg0;
- (id)initWithType:(unsigned long long)arg0 payloadID:(id)arg1;
- (id)copyToAnother;
- (id)resourceMD5;
- (void)setResourceMD5:(id)arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *x0; struct __shared_weak_count *x1; })arg0;
- (long long)checkFlag;
- (void)setCheckFlag:(long long)arg0;
- (long long)sourcePlatform;
- (void)setSourcePlatform:(long long)arg0;
- (id)previewCoverUrl;
- (void)setPreviewCoverUrl:(id)arg0;
- (void)setUnicode:(id)arg0;
- (id)emojiUnicode;
- (void)setEmojiUnicode:(id)arg0;
- (void)convertImageIfNeededWithRootPath:(id)arg0;
- (void)setPath:(id)arg0;
- (void)setResourceID:(id)arg0;
- (id)relativePath;
- (void)setRelativePath:(id)arg0;
- (void).cxx_destruct;
- (id)categoryID;
- (id)resourceID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)path;
- (id)package;
- (void)setName:(id)arg0;
- (void)setCategoryID:(id)arg0;
- (double)initialScale;
- (void)setInitialScale:(double)arg0;
- (id).cxx_construct;
- (id)name;
- (void)setPackage:(id)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (id)unicode;

@end
