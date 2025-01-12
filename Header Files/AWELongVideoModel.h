//
//     Generated by private class-dump
//

@class AWELongVideoControlModel, AWEVideoModel;

@interface AWELongVideoModel : AWEBaseApiModel {
    AWEVideoModel *_video;
    long long _type;
    double _trailerStartTime;
    AWELongVideoControlModel *_videoControl;
}

@property (retain, nonatomic) AWEVideoModel *video;
@property (nonatomic) long long type;
@property (nonatomic) double trailerStartTime;
@property (retain, nonatomic) AWELongVideoControlModel *videoControl;

+ (id)videoJSONTransformer;
+ (id)videoControlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)videoControl;
- (double)trailerStartTime;
- (void)setTrailerStartTime:(double)arg0;
- (void)setVideoControl:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setVideo:(id)arg0;
- (void)setType:(long long)arg0;
- (id)video;

@end
