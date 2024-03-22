//
//     Generated by private class-dump
//

@class NSString;

@interface BigAVRTCI420Buffer : NSObject <RTCI420Buffer> {
    struct scoped_refptr<avframework::I420BufferInterface> { struct I420BufferInterface *ptr_; } _i420Buffer;
    struct __CVBuffer { } *_pixelBuffer;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) int chromaWidth;
@property (readonly, nonatomic) int chromaHeight;
@property (readonly, nonatomic) const char *dataY;
@property (readonly, nonatomic) const char *dataU;
@property (readonly, nonatomic) const char *dataV;
@property (readonly, nonatomic) int strideY;
@property (readonly, nonatomic) int strideU;
@property (readonly, nonatomic) int strideV;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(int)arg0 height:(int)arg1;
- (void).cxx_destruct;
- (int)height;
- (struct __CVBuffer { } *)pixelBuffer;
- (void)dealloc;
- (int)width;
- (id).cxx_construct;
- (id)toI420;
- (id)initWithWidth:(int)arg0 height:(int)arg1 strideY:(int)arg2 strideU:(int)arg3 strideV:(int)arg4;
- (int)chromaWidth;
- (int)chromaHeight;
- (const char *)dataY;
- (const char *)dataU;
- (const char *)dataV;
- (int)strideY;
- (int)strideU;
- (int)strideV;
- (id)initWithFrameBuffer:(struct scoped_refptr<avframework::I420BufferInterface> { struct I420BufferInterface *x0; })arg0;

@end