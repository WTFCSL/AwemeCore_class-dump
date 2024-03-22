//
//     Generated by private class-dump
//

@class NSString;

@interface FICImageDescription : NSObject {
    unsigned int _bitmapInfo;
    double _imageScale;
    unsigned long long _bitsPerPixel;
    unsigned long long _bitsPerComponent;
    struct CGColorSpace { } *_colorSpace;
    unsigned long long _bytesPerRow;
    unsigned long long _imageByteLength;
    unsigned long long _imageOriginByteLength;
    NSString *_colorSpaceName;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _pixelSize;
}

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (nonatomic) double imageScale;
@property (nonatomic) unsigned int bitmapInfo;
@property (nonatomic) unsigned long long bitsPerPixel;
@property (nonatomic) unsigned long long bitsPerComponent;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) unsigned long long imageByteLength;
@property (readonly, nonatomic) unsigned long long imageOriginByteLength;
@property (retain, nonatomic) NSString *colorSpaceName;

- (unsigned long long)imageOriginByteLength;
- (id)initWithDescriptionDict:(id)arg0;
- (unsigned long long)imageByteLength;
- (void)setImageScale:(double)arg0;
- (double)imageScale;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)initWithImage:(id)arg0;
- (void).cxx_destruct;
- (void)setColorSpace:(struct CGColorSpace { } *)arg0;
- (struct CGSize { double x0; double x1; })pixelSize;
- (id)colorSpaceName;
- (struct CGColorSpace { } *)colorSpace;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)bitsPerComponent;
- (void)setBitsPerComponent:(unsigned long long)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)bytesPerRow;
- (void)setBytesPerRow:(unsigned long long)arg0;
- (void)setColorSpaceName:(id)arg0;
- (unsigned int)bitmapInfo;
- (id)toDict;
- (unsigned long long)bitsPerPixel;
- (void)setBitsPerPixel:(unsigned long long)arg0;
- (void)setBitmapInfo:(unsigned int)arg0;

@end
