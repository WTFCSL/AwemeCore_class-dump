//
//     Generated by private class-dump
//

@protocol IBmfSdr2Hdr <NSObject>

- (int)process:(struct BmfSdr2HdrData { id x0[3]; id x1[3]; int x2; } *)arg0 :(void *)arg1;
- (int)processYUV:(id)arg0 :(id)arg1 :(id)arg2;
- (int)processRGBA:(id)arg0 :(id)arg1;
- (id)init:(id)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(float)arg4 :(BOOL)arg5;
- (int)setMatrix:(float *)arg0 :(float *)arg1;
- (int)setYUV2RGBMatrix:(float *)arg0 AndOffset:(float *)arg1 SetRGB2YUVMatrix:(float *)arg2 AndOffset:(float *)arg3;
- (void)dealloc;

@end
