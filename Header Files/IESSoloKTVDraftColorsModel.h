//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESSoloKTVDraftColorsModel : NSObject {
    float _fps;
    NSMutableArray *_colors;
    NSMutableArray *_colorFrames;
}

@property (retain, nonatomic) NSMutableArray *colors;
@property (retain, nonatomic) NSMutableArray *colorFrames;
@property (nonatomic) float fps;

- (void)calcColorFrames:(float)arg0 duration:(double)arg1 completion:(id /* block */)arg2;
- (void)setColorFrames:(id)arg0;
- (id)createColorData;
- (void)calcColorFrames:(float)arg0 videoPath:(id)arg1 completion:(id /* block */)arg2;
- (id)colorFrames;
- (id)init;
- (void)setColors:(id)arg0;
- (void).cxx_destruct;
- (id)colors;
- (float)fps;
- (void)setFps:(float)arg0;

@end
