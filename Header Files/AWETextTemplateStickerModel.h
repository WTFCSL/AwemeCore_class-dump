//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWETextTemplateStickerModel : MTLModel <MTLJSONSerializing> {
    double _rotation;
    double _startTime;
    double _duration;
    long long _orderInLayer;
    NSArray *_position;
    NSArray *_scale;
    NSString *_filepath;
    NSArray *_textList;
    NSArray *_FallbackFontList;
    NSArray *_dependList;
    NSString *_templateId;
    struct CGPoint { double x; double y; } _translation;
    struct CGSize { double width; double height; } _normalizSize;
}

@property (nonatomic) double rotation;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) long long orderInLayer;
@property (copy, nonatomic) NSArray *position;
@property (copy, nonatomic) NSArray *scale;
@property (copy, nonatomic) NSString *filepath;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (copy, nonatomic) NSArray *textList;
@property (copy, nonatomic) NSArray *FallbackFontList;
@property (copy, nonatomic) NSArray *dependList;
@property (copy, nonatomic) NSString *templateId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textListJSONTransformer;
+ (id)dependListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (struct CGSize { double x0; double x1; })normalizSize;
- (void)setNormalizSize:(struct CGSize { double x0; double x1; })arg0;
- (long long)orderInLayer;
- (void)setOrderInLayer:(long long)arg0;
- (void)setTextList:(id)arg0;
- (void)setDependList:(id)arg0;
- (id)initWithExtraPrama:(id)arg0;
- (void)setFilepath:(id)arg0;
- (void)setupDependListWithParams:(id)arg0;
- (id)getExtraPrama;
- (struct CGPoint { double x0; double x1; })positionToCGPoint;
- (id)FallbackFontList;
- (id)dependList;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void)setRotation:(double)arg0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })translation;
- (id)position;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setPosition:(id)arg0;
- (id)scale;
- (double)duration;
- (double)rotation;
- (double)startTime;
- (void)setScale:(id)arg0;
- (id)textList;
- (void)setDuration:(double)arg0;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (id)filepath;
- (void)setFallbackFontList:(id)arg0;

@end
