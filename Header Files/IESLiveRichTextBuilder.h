//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@interface IESLiveRichTextBuilder : NSObject {
    NSDictionary *_attributes;
    NSArray *_richTextModels;
}

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSArray *richTextModels;

- (void)setRichTextModels:(id)arg0;
- (id)buildFromCache;
- (id)richTextModels;
- (id)p_build;
- (void)p_loadAllImagesIfNeeded:(id /* block */)arg0;
- (id)p_buildAttributesFrom:(id)arg0;
- (void)buildAttributedString:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)attributes;
- (void)setAttributes:(id)arg0;

@end