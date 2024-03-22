//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSNumber;
@protocol Optional;

@interface BDARVADVideoInfo : JSONModel {
    NSString<Optional> *_video_id;
    NSString<Optional> *_video_group_id;
    double _effectivePlayTime;
    double _height;
    double _width;
    double _effectiveInspireTime;
    NSString<Optional> *_type;
    NSArray<Optional> *_playTrackUrls;
    NSArray<Optional> *_effectivePlayTrackUrls;
    NSArray<Optional> *_playOverTrackUrls;
    NSNumber<Optional> *_duration;
    NSString<Optional> *_videoModel;
    NSDictionary<Optional> *_videoCover;
}

@property (copy, nonatomic) NSString<Optional> *video_id;
@property (copy, nonatomic) NSString<Optional> *video_group_id;
@property (nonatomic) double effectivePlayTime;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double effectiveInspireTime;
@property (copy, nonatomic) NSString<Optional> *type;
@property (copy, nonatomic) NSArray<Optional> *playTrackUrls;
@property (copy, nonatomic) NSArray<Optional> *effectivePlayTrackUrls;
@property (copy, nonatomic) NSArray<Optional> *playOverTrackUrls;
@property (retain, nonatomic) NSNumber<Optional> *duration;
@property (copy, nonatomic) NSString<Optional> *videoModel;
@property (copy, nonatomic) NSDictionary<Optional> *videoCover;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (id)video_id;
- (void)setVideo_id:(id)arg0;
- (id)video_group_id;
- (void)setVideo_group_id:(id)arg0;
- (id)playTrackUrls;
- (void)setPlayTrackUrls:(id)arg0;
- (id)effectivePlayTrackUrls;
- (void)setEffectivePlayTrackUrls:(id)arg0;
- (id)playOverTrackUrls;
- (void)setPlayOverTrackUrls:(id)arg0;
- (id)videoCover;
- (void)setVideoCover:(id)arg0;
- (void)setEffectivePlayTime:(double)arg0;
- (double)effectivePlayTime;
- (void)setEffectiveInspireTime:(double)arg0;
- (double)effectiveInspireTime;
- (BOOL)isVertical;
- (void).cxx_destruct;
- (double)height;
- (id)type;
- (id)duration;
- (void)setType:(id)arg0;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setDuration:(id)arg0;

@end
