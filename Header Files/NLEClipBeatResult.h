//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface NLEClipBeatResult : NSObject {
    NSArray *_audioAssets;
    NSDictionary *_audioTimeClipInfo;
    NSDictionary *_photoAssetsInfo;
    NSArray *_photoMovieAssets;
    NSDictionary *_assetTransformInfo;
    NSDictionary *_movieAnimationType;
    NSDictionary *_movieInputFillType;
    NSDictionary *_bingoVideoKeys;
    NSArray *_videoAssets;
    NSDictionary *_volumnInfo;
    NSDictionary *_videoTimeScaleInfo;
    NSDictionary *_videoTimeClipInfo;
    NSDictionary *_canvasInfo;
    NSDictionary *_canvasConfigsMap;
}

@property (readonly, copy, nonatomic) NSArray *audioAssets;
@property (readonly, copy, nonatomic) NSDictionary *audioTimeClipInfo;
@property (copy, nonatomic) NSDictionary *photoAssetsInfo;
@property (readonly, copy, nonatomic) NSArray *photoMovieAssets;
@property (readonly, copy, nonatomic) NSDictionary *assetTransformInfo;
@property (readonly, copy, nonatomic) NSDictionary *movieAnimationType;
@property (readonly, copy, nonatomic) NSDictionary *movieInputFillType;
@property (readonly, copy, nonatomic) NSDictionary *bingoVideoKeys;
@property (readonly, copy, nonatomic) NSArray *videoAssets;
@property (readonly, copy, nonatomic) NSDictionary *volumnInfo;
@property (readonly, copy, nonatomic) NSDictionary *videoTimeScaleInfo;
@property (readonly, copy, nonatomic) NSDictionary *videoTimeClipInfo;
@property (readonly, copy, nonatomic) NSDictionary *canvasInfo;
@property (readonly, copy, nonatomic) NSDictionary *canvasConfigsMap;

- (id)volumnInfo;
- (id)canvasConfigsMap;
- (id)videoAssets;
- (id)photoAssetsInfo;
- (id)videoTimeClipInfo;
- (id)assetTransformInfo;
- (id)canvasInfo;
- (id)videoTimeScaleInfo;
- (id)movieAnimationType;
- (id)movieInputFillType;
- (id)bingoVideoKeys;
- (id)photoMovieAssets;
- (id)p_fixedAudioClipRangeWithVideoData:(id)arg0 audioAsset:(id)arg1;
- (id)audioTimeClipInfo;
- (id)initWithVideoData:(id)arg0;
- (void)setPhotoAssetsInfo:(id)arg0;
- (void).cxx_destruct;
- (id)audioAssets;

@end
