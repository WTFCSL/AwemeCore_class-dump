//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEDTOInteractionViewStickerModel : MTLModel <MTLJSONSerializing> {
    NSArray *_stickerList;
    NSString *_iosPoiImage;
    long long _continueWritingCount;
    NSArray *_globalStickerList;
    long long _instanceStickerCount;
}

@property (copy, nonatomic) NSArray *stickerList;
@property (copy, nonatomic) NSString *iosPoiImage;
@property (nonatomic) long long continueWritingCount;
@property (copy, nonatomic) NSArray *globalStickerList;
@property (nonatomic) long long instanceStickerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerListJSONTransformer;
+ (id)globalStickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)stickerList;
- (void)setStickerList:(id)arg0;
- (id)iosPoiImage;
- (void)setIosPoiImage:(id)arg0;
- (long long)continueWritingCount;
- (void)setContinueWritingCount:(long long)arg0;
- (id)globalStickerList;
- (void)setGlobalStickerList:(id)arg0;
- (long long)instanceStickerCount;
- (void)setInstanceStickerCount:(long long)arg0;
- (void).cxx_destruct;

@end