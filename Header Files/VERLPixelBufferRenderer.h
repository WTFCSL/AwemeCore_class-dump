//
//     Generated by private class-dump
//

@interface VERLPixelBufferRenderer : VERLBaseRenderer {
    BOOL _isFullRange;
}

@property (readonly, nonatomic) void *renderer;
@property (nonatomic) BOOL isFullRange;

- (void)deInit;
- (void)setIsFullRange:(BOOL)arg0;
- (void)render:(id)arg0 config:(id)arg1;
- (void)syncTransformValues;
- (id)initWithContext:(id)arg0;
- (void)dealloc;
- (void *)renderer;
- (BOOL)isFullRange;

@end