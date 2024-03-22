//
//     Generated by private class-dump
//

@interface HmpPixelInfo : NSObject {
    void *_impl;
    BOOL _own;
}

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

- (void)setOwn:(BOOL)arg0;
- (BOOL)own;
- (id)initFromPtr:(void *)arg0 :(BOOL)arg1;
- (int)primaries;
- (int)transfer_characteristic;
- (id)initEx:(int)arg0 :(id)arg1;
- (int)infer_space;
- (BOOL)is_rgbx;
- (void)setImpl:(struct PixelInfo { int x0; struct ColorModel { unsigned int x0; } x1; } *)arg0;
- (struct PixelInfo { int x0; struct ColorModel { unsigned int x0; } x1; } *)impl;
- (int)range;
- (id)init:(int)arg0;
- (void)dealloc;
- (void *)ptr;
- (int)format;
- (int)space;

@end
