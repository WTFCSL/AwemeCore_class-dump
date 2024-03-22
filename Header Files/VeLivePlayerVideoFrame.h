//
//     Generated by private class-dump
//

@class NSData;

@interface VeLivePlayerVideoFrame : NSObject {
    long long _bufferType;
    long long _pixelFormat;
    long long _width;
    long long _height;
    long long _pts;
    struct __CVBuffer { } *_originalPixelBuffer;
    struct __CVBuffer { } *_pixelBuffer;
    struct opaqueCMSampleBuffer { } *_sampleBuffer;
    NSData *_data;
}

@property (nonatomic) struct __CVBuffer { } *originalPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) long long bufferType;
@property (readonly, nonatomic) long long pixelFormat;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long pts;

- (void)setOriginalPixelBuffer:(struct __CVBuffer { } *)arg0;
- (id)getPixelBufferAttributes:(unsigned int)arg0 heigth:(int)arg1 width:(int)arg2;
- (id)createI420DataFromPixelBuffer;
- (id)createNV12DataFromPixelBuffer;
- (id)createNSDataFromeCVPixelBuffer;
- (void)initialVideoFrameParamter;
- (struct opaqueCMSampleBuffer { } *)createSampleBuffer;
- (id)createData;
- (unsigned int)targetPixelBufferPixelFormat;
- (struct __CVBuffer { } *)transformToTargetPixelformat:(unsigned int)arg0 targetPixlFormat:(unsigned int)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 bufferType:(long long)arg1 pixelFormat:(long long)arg2 pts:(long long)arg3;
- (long long)pts;
- (id)data;
- (void).cxx_destruct;
- (long long)height;
- (void)setData:(id)arg0;
- (struct __CVBuffer { } *)pixelBuffer;
- (struct opaqueCMSampleBuffer { } *)sampleBuffer;
- (struct __CVBuffer { } *)originalPixelBuffer;
- (long long)pixelFormat;
- (void)dealloc;
- (long long)width;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)setPixelBuffer:(struct __CVBuffer { } *)arg0;
- (long long)bufferType;

@end