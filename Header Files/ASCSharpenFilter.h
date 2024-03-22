//
//     Generated by private class-dump
//

@class VFImageFilter, VFMetalContext;
@protocol MTLTexture;

@interface ASCSharpenFilter : NSObject {
    BOOL _bProcessYuv;
    float _enhance;
    int _width;
    int _height;
    VFImageFilter *_rgb2y_yyFilter;
    VFImageFilter *_boxfilter3x3;
    VFImageFilter *_yy2rgbSharpenFilter;
    VFImageFilter *_ySharpenFilter;
    VFImageFilter *_yCopyFilter;
    id<MTLTexture> _y_yyTexture;
    id<MTLTexture> _y_yyBlurTexture;
    id<MTLTexture> _inUVTexture;
    id<MTLTexture> _yCopyTexture;
    VFMetalContext *_context;
}

@property (retain, nonatomic) VFImageFilter *rgb2y_yyFilter;
@property (retain, nonatomic) VFImageFilter *boxfilter3x3;
@property (retain, nonatomic) VFImageFilter *yy2rgbSharpenFilter;
@property (retain, nonatomic) VFImageFilter *ySharpenFilter;
@property (retain, nonatomic) VFImageFilter *yCopyFilter;
@property (retain, nonatomic) id<MTLTexture> y_yyTexture;
@property (retain, nonatomic) id<MTLTexture> y_yyBlurTexture;
@property (retain, nonatomic) id<MTLTexture> inUVTexture;
@property (retain, nonatomic) id<MTLTexture> yCopyTexture;
@property (retain, nonatomic) VFMetalContext *context;
@property (nonatomic) float enhance;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) BOOL bProcessYuv;

- (void)setInUVTexture:(id)arg0;
- (id)inUVTexture;
- (id)createTexWithWidth:(int)arg0 andHeight:(int)arg1 withPixelFormat:(unsigned long long)arg2 storageMode:(unsigned long long)arg3;
- (void)setBProcessYuv:(BOOL)arg0;
- (BOOL)bProcessYuv;
- (void)setYSharpenFilter:(id)arg0;
- (void)setYCopyFilter:(id)arg0;
- (void)setRgb2y_yyFilter:(id)arg0;
- (void)setBoxfilter3x3:(id)arg0;
- (void)setYy2rgbSharpenFilter:(id)arg0;
- (id)createTexWithWidth:(int)arg0 andHeight:(int)arg1 withPixelFormat:(unsigned long long)arg2;
- (void)setYCopyTexture:(id)arg0;
- (void)setY_yyTexture:(id)arg0;
- (void)setY_yyBlurTexture:(id)arg0;
- (id)ySharpenFilter;
- (id)rgb2y_yyFilter;
- (id)y_yyTexture;
- (id)boxfilter3x3;
- (id)y_yyBlurTexture;
- (id)yy2rgbSharpenFilter;
- (id)create:(id)arg0 bProcessYuv:(BOOL)arg1;
- (void)configureArgumentTableWithCommandEncoder:(id)arg0;
- (void)initWithWidth:(int)arg0 height:(int)arg1 enhRatio:(float)arg2;
- (void)process:(id)arg0 outTexture:(id)arg1;
- (id)yCopyFilter;
- (id)yCopyTexture;
- (void)Release;
- (void).cxx_destruct;
- (int)height;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setWidth:(int)arg0;
- (void)setHeight:(int)arg0;
- (int)width;
- (float)enhance;
- (void)setEnhance:(float)arg0;

@end
