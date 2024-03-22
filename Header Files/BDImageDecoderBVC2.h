//
//     Generated by private class-dump
//

@class NSData, NSString, BDImageDecoderConfig;

@interface BDImageDecoderBVC2 : NSObject <BDImageDecoder> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _isAnimation;
    BOOL _hasIncrementalData;
    BOOL _finished;
    NSData *_data;
    long long _index;
    NSString *_filePath;
    unsigned long long _sizeType;
    BDImageDecoderConfig *_config;
    long long _orientation;
    struct CGSize { double width; double height; } _originSize;
    struct CGSize { double width; double height; } _canvasSize;
    struct HeifImageInfo { unsigned int exif_size; char *exif_data; unsigned int width; unsigned int height; unsigned long long duration; unsigned int rotation; unsigned int imir_axis; unsigned int irot_imir_status; unsigned int frame_nums; BOOL is_sequence; BOOL has_thum; unsigned int thum_offset; unsigned int thum_size; char *icc_data; unsigned int icc_size; BOOL has_alpha; unsigned char bit_depth; struct HeifColrInfo { unsigned int color_type; unsigned short color_primaries; unsigned short transfer_characteristics; unsigned short matrix_coefficients; unsigned char full_range_flag; } colr_info; unsigned char chroma_format; } _imageInfo;
}

@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL isAnimation;
@property (nonatomic) struct HeifImageInfo { unsigned int exif_size; char *exif_data; unsigned int width; unsigned int height; unsigned long long duration; unsigned int rotation; unsigned int imir_axis; unsigned int irot_imir_status; unsigned int frame_nums; BOOL is_sequence; BOOL has_thum; unsigned int thum_offset; unsigned int thum_size; char *icc_data; unsigned int icc_size; BOOL has_alpha; unsigned char bit_depth; struct HeifColrInfo { unsigned int color_type; unsigned short color_primaries; unsigned short transfer_characteristics; unsigned short matrix_coefficients; unsigned char full_range_flag; } colr_info; unsigned char chroma_format; } imageInfo;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) unsigned long long sizeType;
@property (retain, nonatomic) BDImageDecoderConfig *config;
@property BOOL hasIncrementalData;
@property BOOL finished;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) unsigned long long codeType;
@property (readonly, nonatomic) BOOL progressiveDownloading;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) unsigned long long imageCount;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDecode:(id)arg0;
+ (BOOL)supportProgressDecode:(id)arg0;
+ (BOOL)supportStaticProgressDecode:(unsigned long long)arg0;

- (struct CGSize { double x0; double x1; })originSize;
- (void)setOriginSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGImage { } *)copyImageAtIndex:(unsigned long long)arg0;
- (id)initWithData:(id)arg0 config:(id)arg1;
- (void)setHasIncrementalData:(BOOL)arg0;
- (BOOL)hasIncrementalData;
- (struct HeifOutputStream { unsigned int x0; char *x1; unsigned int x2; char *x3; unsigned long long *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned long long x9; unsigned char x10; char *x11; unsigned int x12; int x13; })decodeStaticImage;
- (struct CGColorSpace { } *)createColorSpaceFromICCData:(char *)arg0 length:(unsigned int)arg1;
- (struct CGImage { } *)bd_rawImageWithBitmap:(char *)arg0 rgbaSize:(unsigned int)arg1 alpha:(BOOL)arg2 imageSize:(struct CGSize { double x0; double x1; })arg3 profileColorSpace:(struct CGColorSpace { } *)arg4;
- (id)initWithContentOfFile:(id)arg0;
- (BOOL)progressiveDownloading;
- (id)initWithIncrementalData:(id)arg0 config:(id)arg1;
- (void)changeDecoderWithData:(id)arg0 finished:(BOOL)arg1;
- (void)setIsAnimation:(BOOL)arg0;
- (void)setFinished:(BOOL)arg0;
- (void)setIndex:(long long)arg0;
- (id)data;
- (void)setConfig:(id)arg0;
- (id)filePath;
- (void).cxx_destruct;
- (long long)imageOrientation;
- (void)setFilePath:(id)arg0;
- (id)config;
- (void)setData:(id)arg0;
- (long long)orientation;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (long long)index;
- (void)setOrientation:(long long)arg0;
- (unsigned long long)imageCount;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })canvasSize;
- (BOOL)finished;
- (id)initWithData:(id)arg0;
- (struct HeifImageInfo { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; BOOL x9; BOOL x10; unsigned int x11; unsigned int x12; char *x13; unsigned int x14; BOOL x15; unsigned char x16; struct HeifColrInfo { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; } x17; unsigned char x18; })imageInfo;
- (void)setImageInfo:(struct HeifImageInfo { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; BOOL x9; BOOL x10; unsigned int x11; unsigned int x12; char *x13; unsigned int x14; BOOL x15; unsigned char x16; struct HeifColrInfo { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; } x17; unsigned char x18; })arg0;
- (unsigned long long)loopCount;
- (BOOL)isAnimation;
- (double)frameDelayAtIndex:(unsigned long long)arg0;
- (unsigned long long)codeType;
- (unsigned long long)sizeType;
- (void)setSizeType:(unsigned long long)arg0;

@end
