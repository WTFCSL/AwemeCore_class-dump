//
//     Generated by private class-dump
//

@class NSString, AWEInteractionEditTagStickerInfoModel;

@interface AWEInteractionEditTagStickerModel : AWEInteractionStickerModel {
    NSString *_actualSize;
    AWEInteractionEditTagStickerInfoModel *_editTagInfo;
}

@property (copy, nonatomic) NSString *actualSize;
@property (retain, nonatomic) AWEInteractionEditTagStickerInfoModel *editTagInfo;

+ (id)editTagInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)actualSize;
- (void)setActualSize:(id)arg0;
- (id)editTagInfo;
- (void)setEditTagInfo:(id)arg0;
- (BOOL)nativeSticker;
- (void).cxx_destruct;

@end
