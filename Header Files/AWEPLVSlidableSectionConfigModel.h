//
//     Generated by private class-dump
//

@class NSString, AWEPLVSectionPaddingModel, AWEPLVSectionBackgrounColorModel;

@interface AWEPLVSlidableSectionConfigModel : AWEBaseApiModel {
    BOOL _dynamicSpacing;
    NSString *_sectionName;
    AWEPLVSectionPaddingModel *_sectionPadding;
    AWEPLVSectionPaddingModel *_contentPadding;
    AWEPLVSectionPaddingModel *_headerPadding;
    AWEPLVSectionPaddingModel *_scrollViewPadding;
    AWEPLVSectionBackgrounColorModel *_backgroundColor;
}

@property (copy, nonatomic) NSString *sectionName;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *sectionPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *contentPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *headerPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *scrollViewPadding;
@property (retain, nonatomic) AWEPLVSectionBackgrounColorModel *backgroundColor;
@property (nonatomic) BOOL dynamicSpacing;

+ (id)backgroundColorJSONTransformer;
+ (id)sectionPaddingJSONTransformer;
+ (id)contentPaddingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)dynamicSpacing;
- (id)sectionPadding;
- (id)scrollViewPadding;
- (void)setSectionPadding:(id)arg0;
- (void)setScrollViewPadding:(id)arg0;
- (void)setDynamicSpacing:(BOOL)arg0;
- (void).cxx_destruct;
- (id)contentPadding;
- (id)backgroundColor;
- (void)setContentPadding:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)headerPadding;
- (id)sectionName;
- (void)setSectionName:(id)arg0;
- (void)setHeaderPadding:(id)arg0;

@end
