//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEPlaylistVideoStatusResponse : AWEBaseApiModel {
    long long _schedule;
    AWEURLModel *_videoUrl;
    NSString *_musicId;
    NSString *_clipMusicId;
    long long _startTime;
}

@property (nonatomic) long long schedule;
@property (retain, nonatomic) AWEURLModel *videoUrl;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *clipMusicId;
@property (nonatomic) long long startTime;

+ (id)videoUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setMusicId:(id)arg0;
- (id)musicId;
- (id)clipMusicId;
- (void)setClipMusicId:(id)arg0;
- (long long)schedule;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (void)setSchedule:(long long)arg0;
- (long long)startTime;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg0;

@end