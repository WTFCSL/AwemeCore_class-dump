//
//     Generated by private class-dump
//

@class NSDictionary;

@interface PTYMobileCVMat : PTYCls {
    BOOL _autoDeleteMat;
    void *_mat;
    NSDictionary *_customInfo;
    void *_pixelBufferData;
}

@property (nonatomic) void *pixelBufferData;
@property (nonatomic) void *mat;
@property (nonatomic) BOOL autoDeleteMat;
@property (copy, nonatomic) NSDictionary *customInfo;

- (void *)pixelBufferData;
- (void)setPixelBufferData:(void *)arg0;
- (id)initWithCoreObject:(const void *)arg0;
- (struct shared_ptr<pitaya::PTYClass> { struct PTYClass *x0; struct __shared_weak_count *x1; })coreObject;
- (id)initWithImage:(id)arg0 hasAlpha:(BOOL)arg1;
- (void *)mat;
- (id)imageFromMat;
- (void)setMat:(void *)arg0;
- (BOOL)autoDeleteMat;
- (void)setAutoDeleteMat:(BOOL)arg0;
- (id)customInfo;
- (id)init;
- (id)initWithImage:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCustomInfo:(id)arg0;
- (id)initWithCVPixelBufferRef:(struct __CVBuffer { } *)arg0;

@end
