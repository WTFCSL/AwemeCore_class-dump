//
//     Generated by private class-dump
//

@class NSArray, NSString, NLEResourceNode_OC;

@interface NLEStyleText_OC : NLENode_OC {
    BOOL _useFlowerDefaultColor;
    NSString *_truncatedPostfix;
    NLEResourceNode_OC *_flower;
    NLEResourceNode_OC *_shape;
    NLEResourceNode_OC *_fallbackFont;
    NLEResourceNode_OC *_font;
    NSArray *_animations;
}

@property (nonatomic) struct shared_ptr<cut::model::NLEStyText> { struct NLEStyText *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned int fontSize;
@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) BOOL backgroundRoundCorner;
@property (nonatomic) float backgroundRoundRadius;
@property (nonatomic) float backgroundRoundScale;
@property (retain, nonatomic) NSArray *animations;
@property (nonatomic) unsigned int outlineColor;
@property (nonatomic) unsigned int textColor;
@property (nonatomic) int alignType;
@property (nonatomic) int typeSettingKind;
@property (nonatomic) unsigned int shadowColor;
@property (nonatomic) float shadowSmoothing;
@property (nonatomic) float shadowOffsetX;
@property (nonatomic) float shadowOffsetY;
@property (nonatomic) BOOL bold;
@property (nonatomic) float boldWidth;
@property (nonatomic) unsigned int italicDegree;
@property (nonatomic) BOOL underline;
@property (nonatomic) float underlineWidth;
@property (nonatomic) float underlineOffset;
@property (nonatomic) float lineGap;
@property (nonatomic) float charSpacing;
@property (nonatomic) float innerPadding;
@property (nonatomic) BOOL outline;
@property (nonatomic) float outlineWidth;
@property (nonatomic) BOOL shapeFlipX;
@property (nonatomic) BOOL shapeFlipY;
@property (nonatomic) unsigned int KTVColor;
@property (nonatomic) unsigned int KTVOutlineColor;
@property (nonatomic) unsigned int KTVShadowColor;
@property (nonatomic) BOOL oneLineTruncated;
@property (nonatomic) BOOL background;
@property (nonatomic) BOOL shadow;
@property (nonatomic) float lineMaxWidth;
@property (copy, nonatomic) NSString *truncatedPostfix;
@property (retain, nonatomic) NLEResourceNode_OC *font;
@property (retain, nonatomic) NLEResourceNode_OC *fallbackFont;
@property (retain, nonatomic) NLEResourceNode_OC *shape;
@property (retain, nonatomic) NLEResourceNode_OC *flower;
@property (nonatomic) BOOL useFlowerDefaultColor;

+ (id)textStyleWithJSONString:(id)arg0;

- (void)setAlignType:(int)arg0;
- (int)alignType;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEStyText> { struct NLEStyText *x0; struct __shared_weak_count *x1; })arg0;
- (void)setShadowSmoothing:(float)arg0;
- (float)shadowSmoothing;
- (void)setBoldWidth:(float)arg0;
- (float)boldWidth;
- (void)setUnderlineWidth:(float)arg0;
- (float)underlineWidth;
- (void)setUnderlineOffset:(float)arg0;
- (float)underlineOffset;
- (void)setLineGap:(float)arg0;
- (void)setCharSpacing:(float)arg0;
- (float)charSpacing;
- (void)setInnerPadding:(float)arg0;
- (float)innerPadding;
- (void)setLineMaxWidth:(float)arg0;
- (float)lineMaxWidth;
- (void)setShapeFlipX:(BOOL)arg0;
- (BOOL)shapeFlipX;
- (void)setShapeFlipY:(BOOL)arg0;
- (BOOL)shapeFlipY;
- (void)setKTVColor:(unsigned int)arg0;
- (unsigned int)KTVColor;
- (void)setKTVShadowColor:(unsigned int)arg0;
- (unsigned int)KTVOutlineColor;
- (void)setKTVOutlineColor:(unsigned int)arg0;
- (unsigned int)KTVShadowColor;
- (void)setOneLineTruncated:(BOOL)arg0;
- (BOOL)oneLineTruncated;
- (void)setItalicDegree:(unsigned int)arg0;
- (unsigned int)italicDegree;
- (void)setTypeSettingKind:(int)arg0;
- (int)typeSettingKind;
- (BOOL)backgroundRoundCorner;
- (void)setBackgroundRoundCorner:(BOOL)arg0;
- (float)backgroundRoundRadius;
- (void)setBackgroundRoundRadius:(float)arg0;
- (id)getFallbackFontList;
- (void)clearFallbackFontList;
- (void)removeFallbackFontList:(id)arg0;
- (void)addFallbackFontList:(id)arg0;
- (id)getOutlineColors;
- (void)setOutlineColors:(id)arg0;
- (id)getBackgourndColors;
- (id)getTextColors;
- (id)getShadowColors;
- (id)getKTVColors;
- (void)setKTVColors:(id)arg0;
- (id)getKTVOutlineColors;
- (void)setKTVOutlineColors:(id)arg0;
- (id)getKTVShadowColors;
- (void)setKTVShadowColors:(id)arg0;
- (BOOL)useFlowerDefaultColor;
- (void)setUseFlowerDefaultColor:(BOOL)arg0;
- (id)truncatedPostfix;
- (void)setTruncatedPostfix:(id)arg0;
- (void)setFallbackFont:(id)arg0;
- (id)fallbackFont;
- (void)setFlower:(id)arg0;
- (id)flower;
- (void)setBackgroundRoundScale:(float)arg0;
- (float)backgroundRoundScale;
- (void)clearAnimation;
- (void)setShape:(id)arg0;
- (id)init;
- (BOOL)background;
- (void).cxx_destruct;
- (void)setFontSize:(unsigned int)arg0;
- (id)animations;
- (unsigned int)shadowColor;
- (void)setAnimations:(id)arg0;
- (unsigned int)fontSize;
- (BOOL)shadow;
- (void)setShadowColor:(unsigned int)arg0;
- (void)setBackground:(BOOL)arg0;
- (BOOL)outline;
- (id)font;
- (void)addAnimation:(id)arg0;
- (void)setFont:(id)arg0;
- (id)shape;
- (unsigned int)backgroundColor;
- (void)setTextColor:(unsigned int)arg0;
- (void)setBackgroundColor:(unsigned int)arg0;
- (unsigned int)textColor;
- (void)removeAnimation:(id)arg0;
- (void)setShadow:(BOOL)arg0;
- (void)setOutline:(BOOL)arg0;
- (void)setBold:(BOOL)arg0;
- (BOOL)bold;
- (void)setUnderline:(BOOL)arg0;
- (BOOL)underline;
- (void)setBackgroundColors:(id)arg0;
- (void)setTextColors:(id)arg0;
- (void)setShadowColors:(id)arg0;
- (float)shadowOffsetX;
- (float)shadowOffsetY;
- (void)setShadowOffsetX:(float)arg0;
- (void)setShadowOffsetY:(float)arg0;
- (void)setOutlineColor:(unsigned int)arg0;
- (unsigned int)outlineColor;
- (float)outlineWidth;
- (void)setOutlineWidth:(float)arg0;
- (float)lineGap;

@end
