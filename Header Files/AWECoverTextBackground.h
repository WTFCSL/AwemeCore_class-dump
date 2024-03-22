//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWECoverTextBackground : MTLModel <MTLJSONSerializing> {
    BOOL _isNinePatch;
    NSString *_imageName;
    NSDictionary *_ninePatchInfo;
    unsigned long long _alignment;
    unsigned long long _widthMode;
    unsigned long long _heightMode;
    double _marginStart;
    double _marginEnd;
    double _marginTop;
    double _marginBottom;
    double _width;
    double _height;
}

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL isNinePatch;
@property (copy, nonatomic) NSDictionary *ninePatchInfo;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) unsigned long long widthMode;
@property (nonatomic) unsigned long long heightMode;
@property (nonatomic) double marginStart;
@property (nonatomic) double marginEnd;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setWidthMode:(unsigned long long)arg0;
- (void)setHeightMode:(unsigned long long)arg0;
- (void)setMarginEnd:(double)arg0;
- (void)setMarginStart:(double)arg0;
- (unsigned long long)widthMode;
- (unsigned long long)heightMode;
- (id)ninePatchInfo;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capInsetsWithImage:(id)arg0 scale:(double)arg1;
- (BOOL)isNinePatch;
- (void)setIsNinePatch:(BOOL)arg0;
- (void)setNinePatchInfo:(id)arg0;
- (double)marginStart;
- (double)marginEnd;
- (void).cxx_destruct;
- (id)imageName;
- (void)setAlignment:(unsigned long long)arg0;
- (void)setImageName:(id)arg0;
- (double)height;
- (unsigned long long)alignment;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (double)marginTop;
- (void)setMarginTop:(double)arg0;
- (double)marginBottom;
- (void)setMarginBottom:(double)arg0;

@end
