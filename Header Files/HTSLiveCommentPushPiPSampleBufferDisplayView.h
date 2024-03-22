//
//     Generated by private class-dump
//

@class AVSampleBufferDisplayLayer;

@interface HTSLiveCommentPushPiPSampleBufferDisplayView : UIView {
    AVSampleBufferDisplayLayer *_sampleBufferLayer;
}

@property (retain, nonatomic) AVSampleBufferDisplayLayer *sampleBufferLayer;

+ (Class)layerClass;

- (id)sampleBufferLayer;
- (void)updateWithVideoSize:(struct CGSize { double x0; double x1; })arg0;
- (struct opaqueCMSampleBuffer { } *)makeSampleBufferWithVideoSize:(struct CGSize { double x0; double x1; })arg0 time:(double)arg1;
- (struct opaqueCMSampleBuffer { } *)makeSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)arg0 time:(double)arg1;
- (void)setSampleBufferLayer:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
