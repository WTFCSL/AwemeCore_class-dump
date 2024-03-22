//
//     Generated by private class-dump
//

@class AVAssetImageGenerator, AVAsset;

@interface LVAssetImageGenerator : NSObject {
    AVAssetImageGenerator *_generator;
    AVAsset *_asset;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
}

@property (retain, nonatomic) AVAssetImageGenerator *generator;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (id)initWithAsset:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)generaImageWithEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void).cxx_destruct;
- (id)generator;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)asset;
- (void)setAsset:(id)arg0;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setGenerator:(id)arg0;

@end
