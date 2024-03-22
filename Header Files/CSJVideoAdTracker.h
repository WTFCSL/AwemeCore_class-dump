//
//     Generated by private class-dump
//

@class CSJAdSlot, NSString, NSDictionary, NSNumber, CSJMaterialMeta;

@interface CSJVideoAdTracker : NSObject {
    BOOL _customPlayer;
    BOOL _pause;
    unsigned long long _video_play_type;
    NSString *_video_play_url;
    NSString *_video_resolution;
    unsigned long long _video_size;
    unsigned long long _video_duration;
    unsigned long long _holdPlayerCount;
    id /* block */ _tagBlcok;
    id /* block */ _timeBlock;
    id /* block */ _metaBlock;
    id /* block */ _slotBlock;
    NSString *_video_session_id;
    double _video_startLoad_timestamp;
    unsigned long long _video_buffer_duration;
    unsigned long long _video_buffer_times;
    double _video_buffer_begin_timestamp;
    unsigned long long _state;
}

@property (copy, nonatomic) id /* block */ tagBlcok;
@property (copy, nonatomic) id /* block */ timeBlock;
@property (copy, nonatomic) id /* block */ metaBlock;
@property (copy, nonatomic) id /* block */ slotBlock;
@property (nonatomic) BOOL customPlayer;
@property (readonly, nonatomic) unsigned long long video_current_time;
@property (readonly, copy, nonatomic) NSNumber *video_play_percent;
@property (readonly, copy, nonatomic) NSString *video_track_tag;
@property (readonly, nonatomic) NSDictionary *video_public_parameters;
@property (readonly, nonatomic) NSDictionary *video_public_extra_parameters;
@property (readonly, nonatomic) NSDictionary *video_buffer_duration_parameters;
@property (readonly, nonatomic) CSJMaterialMeta *meta;
@property (readonly, nonatomic) CSJAdSlot *adSlot;
@property (readonly, nonatomic) unsigned long long video_cache_size;
@property (copy, nonatomic) NSString *video_session_id;
@property (nonatomic) double video_startLoad_timestamp;
@property (nonatomic) unsigned long long video_buffer_duration;
@property (nonatomic) unsigned long long video_buffer_times;
@property (nonatomic) double video_buffer_begin_timestamp;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL pause;
@property (readonly, nonatomic) unsigned long long video_play_type;
@property (readonly, copy, nonatomic) NSString *video_play_url;
@property (readonly, copy, nonatomic) NSString *video_resolution;
@property (readonly, nonatomic) unsigned long long video_size;
@property (readonly, nonatomic) unsigned long long video_duration;
@property (nonatomic) unsigned long long holdPlayerCount;

+ (id)rewardVideoTagBySlotType:(long long)arg0;
+ (void)reportVideoPreloadBeginWithTag:(id)arg0 videoAdMeta:(id)arg1;
+ (void)reportVideoPreloadSuccessWithTag:(id)arg0 videoAdMeta:(id)arg1;
+ (void)reportVideoPreloadFaildWithTag:(id)arg0 videoAdMeta:(id)arg1;
+ (id)videoPreloadPublicParameters:(id)arg0;
+ (void)reportPreloadVideoCancelWithTag:(id)arg0 videoAdMeta:(id)arg1;

- (void)reportVideoReset;
- (void)setHoldPlayerCount:(unsigned long long)arg0;
- (id)initWithVideoTagBlock:(id /* block */)arg0 playTimeBlock:(id /* block */)arg1 metaBlock:(id /* block */)arg2 slotBlock:(id /* block */)arg3;
- (void)reportLiveCoverImageRender:(BOOL)arg0 duration:(long long)arg1;
- (void)reportLiveStartPlay;
- (void)reportVideoStartPlay;
- (void)reportVideoFirstRender:(BOOL)arg0;
- (void)reportVideoPause;
- (void)reportVideoResume;
- (void)recordEndBuffer;
- (void)recordBeginBuffer;
- (void)reportVideoPlayOver;
- (void)reportVideoError:(id)arg0;
- (void)configVideoInfoWithDecodeMode:(unsigned long long)arg0 h265VideoInfo:(id)arg1 h264VideoInfo:(id)arg2;
- (void)reportLiveFirstRender;
- (void)reportLivePlayResume;
- (void)reportLivePlayPause;
- (void)reportLivePlayClose:(unsigned long long)arg0;
- (void)reportLivePlayError:(id)arg0;
- (void)reportVideoAutoReplay;
- (void)reportVideoWithPlayerBreakType:(unsigned long long)arg0;
- (void)reportVideoEndCard:(long long)arg0 hasPlayed:(BOOL)arg1;
- (id)adSlot;
- (id /* block */)timeBlock;
- (id /* block */)tagBlcok;
- (unsigned long long)video_duration;
- (unsigned long long)video_current_time;
- (id)video_play_percent;
- (id)video_session_id;
- (unsigned long long)video_play_type;
- (id)video_resolution;
- (unsigned long long)video_size;
- (id)video_play_url;
- (BOOL)customPlayer;
- (unsigned long long)video_buffer_duration;
- (id /* block */)metaBlock;
- (id /* block */)slotBlock;
- (void)setTagBlcok:(id /* block */)arg0;
- (void)setTimeBlock:(id /* block */)arg0;
- (void)setMetaBlock:(id /* block */)arg0;
- (void)setSlotBlock:(id /* block */)arg0;
- (void)setVideo_buffer_begin_timestamp:(double)arg0;
- (void)configVideoInfoWithDecodeMode:(unsigned long long)arg0 h265VideoInfo:(id)arg1 h264VideoInfo:(id)arg2 customPlayer:(BOOL)arg3;
- (void)setVideo_session_id:(id)arg0;
- (void)setVideo_startLoad_timestamp:(double)arg0;
- (id)video_public_extra_parameters;
- (id)video_track_tag;
- (id)p_customPalyerLabel:(id)arg0;
- (void)setVideo_buffer_duration:(unsigned long long)arg0;
- (void)setVideo_buffer_times:(unsigned long long)arg0;
- (double)video_startLoad_timestamp;
- (unsigned long long)video_cache_size;
- (id)video_buffer_duration_parameters;
- (id)video_public_parameters;
- (double)video_buffer_begin_timestamp;
- (unsigned long long)video_buffer_times;
- (unsigned long long)holdPlayerCount;
- (void)reportVideoWithPlayerBreakType:(unsigned long long)arg0 tag:(id)arg1 meta:(id)arg2;
- (void)reportVideoPlayBuffer;
- (void)reportVideoReplay;
- (void)setCustomPlayer:(BOOL)arg0;
- (id)meta;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (void)setPause:(BOOL)arg0;
- (BOOL)pause;

@end