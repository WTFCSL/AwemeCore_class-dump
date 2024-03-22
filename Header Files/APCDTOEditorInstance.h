//
//     Generated by private class-dump
//

@class APCDTOFilterConfig, APCDTORichText, APCDTOEditorResource, NSString, APCDTOStickersConfig;

@interface APCDTOEditorInstance : MTLModel <MTLJSONSerializing> {
    APCDTOStickersConfig *_stickerConfig;
    APCDTORichText *_richText;
    APCDTOFilterConfig *_filterConfig;
    APCDTOEditorResource *_resource;
}

@property (retain, nonatomic) APCDTOStickersConfig *stickerConfig;
@property (retain, nonatomic) APCDTORichText *richText;
@property (retain, nonatomic) APCDTOFilterConfig *filterConfig;
@property (retain, nonatomic) APCDTOEditorResource *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerConfigJSONTransformer;
+ (id)filterConfigJSONTransformer;
+ (id)richTextJSONTransformer;
+ (id)resourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setFilterConfig:(id)arg0;
- (id)filterConfig;
- (void)setStickerConfig:(id)arg0;
- (id)stickerConfig;
- (void)setRichText:(id)arg0;
- (void).cxx_destruct;
- (id)richText;
- (void)setResource:(id)arg0;
- (id)resource;

@end