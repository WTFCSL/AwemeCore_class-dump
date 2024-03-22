//
//     Generated by private class-dump
//

@class IESSoloKTVDrawCGImpl, IESSCMetalImage;

@interface IESSoloKTVTitleMedia : IESSCImageMedia {
    IESSoloKTVDrawCGImpl *_asyncDraw;
    IESSCMetalImage *_titleImage;
}

@property (retain, nonatomic) IESSoloKTVDrawCGImpl *asyncDraw;
@property (retain, nonatomic) IESSCMetalImage *titleImage;

- (void)setAsyncDraw:(id)arg0;
- (id)asyncDraw;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 renderSize:(struct CGSize { double x0; double x1; })arg1;
- (void)drawTitleImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 attribute:(id)arg2;
- (id)initWithTitle:(id)arg0 attribute:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void).cxx_destruct;
- (void)setTitleImage:(id)arg0;
- (id)titleImage;

@end
