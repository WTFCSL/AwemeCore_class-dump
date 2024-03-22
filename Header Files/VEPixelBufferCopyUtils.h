//
//     Generated by private class-dump
//

@interface VEPixelBufferCopyUtils : NSObject {
    int _pixelBufferPoolWidth;
    int _pixelBufferPoolHeight;
    unsigned int _pixelFormat;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
}

@property (nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (nonatomic) int pixelBufferPoolWidth;
@property (nonatomic) int pixelBufferPoolHeight;
@property (nonatomic) unsigned int pixelFormat;

- (struct __CVBuffer { } *)copyPixelBuffer:(struct __CVBuffer { } *)arg0;
- (struct __CVBuffer { } *)copyAndRetainYUV420vPixelBuffer:(struct __CVBuffer { } *)arg0;
- (struct __CFDictionary { } *)buffer_attributes_create:(int)arg0 height:(int)arg1 pix_fmt:(unsigned int)arg2;
- (struct __CVBuffer { } *)genPixelbufferWithCGImage:(struct CGImage { } *)arg0;
- (int)pixelBufferPoolWidth;
- (void)setPixelBufferPoolWidth:(int)arg0;
- (int)pixelBufferPoolHeight;
- (void)setPixelBufferPoolHeight:(int)arg0;
- (struct __CVBuffer { } *)copyBGRAPixelBuffer:(struct __CVBuffer { } *)arg0;
- (id)init;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (void)setPixelFormat:(unsigned int)arg0;
- (unsigned int)pixelFormat;
- (void)dealloc;
- (void)setPixelBufferPool:(struct __CVPixelBufferPool { } *)arg0;

@end