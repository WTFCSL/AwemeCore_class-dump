//
//     Generated by private class-dump
//

@class IESSoloKTVScrollLyricRender;

@interface IESSoloKTVLyricMedia : IESSCImageMedia {
    IESSoloKTVScrollLyricRender *_lyricRender;
}

@property (retain, nonatomic) IESSoloKTVScrollLyricRender *lyricRender;

- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 renderSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setLyricRender:(id)arg0;
- (id)lyricRender;
- (id)initWithLyric:(id)arg0 drawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 fps:(double)arg2 sourceTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg3;
- (void).cxx_destruct;

@end