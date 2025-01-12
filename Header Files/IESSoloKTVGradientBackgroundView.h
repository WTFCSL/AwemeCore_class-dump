//
//     Generated by private class-dump
//

@class IESSoloKTVImageMetalView, IESSCMetalImage, IESLiveKtvAtmosphereVideoFrameColorData, IESSoloKTVGradientBackgroundRender;

@interface IESSoloKTVGradientBackgroundView : UIView {
    IESSoloKTVImageMetalView *_mtkView;
    IESSoloKTVGradientBackgroundRender *_render;
    IESLiveKtvAtmosphereVideoFrameColorData *_firstFrameColor;
    IESSCMetalImage *_firstFrameImage;
}

@property (retain, nonatomic) IESSoloKTVImageMetalView *mtkView;
@property (retain, nonatomic) IESSoloKTVGradientBackgroundRender *render;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoFrameColorData *firstFrameColor;
@property (retain, nonatomic) IESSCMetalImage *firstFrameImage;

- (void)setRender:(id)arg0;
- (void)stopAnimate;
- (void)startAnimate;
- (double)currentFps;
- (void)setFirstFrameImage:(id)arg0;
- (id)firstFrameImage;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getImageTexture;
- (void)setFirstFrameColor:(id)arg0;
- (id)firstFrameColor;
- (void)updateWithColors:(id)arg0;
- (void)resumeAnimate;
- (void)pauseAnimate;
- (void)showFirstFrame:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)render;
- (id)mtkView;
- (void)setMtkView:(id)arg0;

@end
