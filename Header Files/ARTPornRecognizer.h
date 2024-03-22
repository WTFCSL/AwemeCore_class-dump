//
//     Generated by private class-dump
//

@class ARTModel;

@interface ARTPornRecognizer : NSObject <ARTPornRecognizerProtocol> {
    void *_handle;
    struct PornClassifierRet { BOOL is_porn; float confidence; } _ret;
    int _errcode;
    int _modelType;
    unsigned long long _maxImgDecodeBytes;
    ARTModel *_model;
    struct CGSize { double width; double height; } _minImageSize;
}

@property (retain, nonatomic) ARTModel *model;
@property (nonatomic) int modelType;
@property (nonatomic) struct CGSize { double width; double height; } minImageSize;
@property (nonatomic) unsigned long long maxImgDecodeBytes;

- (id)getOutputWithStatus:(int)arg0;
- (id)getOutput;
- (unsigned long long)maxImgDecodeBytes;
- (struct CGSize { double x0; double x1; })minImageSize;
- (id)processWithCVMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })arg0;
- (void)setParam:(long long)arg0 value:(float)arg1;
- (id)processWithNSData:(id)arg0;
- (void)setMinImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMaxImgDecodeBytes:(unsigned long long)arg0;
- (id)initWithModel:(id)arg0 type:(int)arg1;
- (id)processWithBuffer:(struct __CVBuffer { } *)arg0;
- (void)setModelType:(int)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (int)modelType;
- (void).cxx_destruct;
- (id)model;
- (void)dealloc;

@end