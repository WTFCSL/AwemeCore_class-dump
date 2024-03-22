//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, TTVideoEngineMDLTrackInfo;
@protocol TTVideoEngineEventLoggerDelegate;

@interface TTVideoEngineEventBase : NSObject {
    BOOL _hw;
    BOOL _hw_user;
    BOOL _isEnableABR;
    BOOL _has_get_preload_traceid;
    BOOL _hasAudioTrackInfo;
    int _mdl_conc_count;
    id<TTVideoEngineEventLoggerDelegate> _delegate;
    NSMutableDictionary *_videoInfo;
    NSString *_session_id;
    NSString *_device_id;
    NSString *_sv;
    NSString *_pv;
    NSString *_pc;
    NSString *_sdk_version;
    NSString *_vid;
    NSString *_source_type;
    NSString *_tag;
    NSString *_subtag;
    NSString *_lastResolution;
    NSString *_currentResolution;
    long long _beginSwitchResolutionCurPos;
    unsigned long long _beginSwitchResolutionTime;
    NSString *_initialQualityDesc;
    NSString *_currentQualityDesc;
    NSString *_initial_ip;
    NSString *_initial_resolution;
    NSString *_curURL;
    NSString *_initialURL;
    NSString *_internal_ip;
    long long _drm_type;
    NSString *_drm_token_url;
    long long _play_type;
    long long _audio_codec_nameId;
    long long _video_codec_nameId;
    long long _format_type;
    double _playSpeed;
    long long _reuse_socket;
    NSDictionary *_abr_info;
    NSString *_vtype;
    long long _video_stream_duration;
    long long _audio_stream_duration;
    unsigned long long _lastForebackSwitchTime;
    unsigned long long _lastAVSwitchTime;
    unsigned long long _lastResSwitchTime;
    unsigned long long _lastHeadsetSwithTime;
    long long _isInBackground;
    long long _radioMode;
    long long _curHeadset;
    long long _blueTooth;
    NSDictionary *_r_stage_errcs;
    long long _mdl_cur_req_pos;
    long long _mdl_cur_end_pos;
    long long _mdl_cur_cache_pos;
    long long _mdl_cache_type;
    NSString *_mdl_cur_ip;
    NSString *_mdl_cur_host;
    NSString *_mdl_cur_url;
    long long _mdl_reply_size;
    long long _mdl_down_pos;
    long long _mdl_player_wait_time;
    long long _mdl_player_wait_num;
    long long _mdl_stage;
    long long _mdl_error_code;
    long long _mdl_sub_error_code;
    long long _mdl_cur_task_num;
    long long _mdl_speed;
    NSString *_mdl_file_key;
    long long _mdl_is_socrf;
    long long _mdl_req_num;
    long long _mdl_url_index;
    NSString *_mdl_re_url;
    long long _mdl_cur_soure;
    NSString *_mdl_extra_info;
    long long _mdl_http_code;
    long long _mdl_req_t;
    long long _mdl_end_t;
    long long _mdl_dns_t;
    long long _mdl_tcp_start_t;
    long long _mdl_tcp_end_t;
    long long _mdl_ttfp;
    long long _mdl_httpfb;
    long long _mdl_http_open_end_t;
    long long _mdl_fs;
    long long _mdl_pcdn_full_speed;
    long long _mdl_tbs;
    long long _mdl_lbs;
    long long _mdl_res_err;
    long long _mdl_read_src;
    long long _mdl_seek_num;
    NSString *_mdl_last_msg;
    NSString *_mdl_server_timing;
    long long _mdl_v_lt;
    long long _mdl_v_p2p_ier;
    NSString *_mdl_ip_list;
    NSString *_mdl_blocked_ips;
    NSString *_mdl_response_cinfo;
    NSString *_mdl_response_cache;
    NSString *_mdl_dns_type;
    long long _mdl_p2p_loader;
    NSDictionary *_mdl_features;
    TTVideoEngineMDLTrackInfo *_mdlAudioInfo;
    TTVideoEngineMDLTrackInfo *_mdlVideoInfo;
}

@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *videoInfo;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *device_id;
@property (copy, nonatomic) NSString *sv;
@property (copy, nonatomic) NSString *pv;
@property (copy, nonatomic) NSString *pc;
@property (copy, nonatomic) NSString *sdk_version;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *source_type;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subtag;
@property (copy, nonatomic) NSString *lastResolution;
@property (copy, nonatomic) NSString *currentResolution;
@property (nonatomic) long long beginSwitchResolutionCurPos;
@property (nonatomic) unsigned long long beginSwitchResolutionTime;
@property (copy, nonatomic) NSString *initialQualityDesc;
@property (copy, nonatomic) NSString *currentQualityDesc;
@property (copy, nonatomic) NSString *initial_ip;
@property (copy, nonatomic) NSString *initial_resolution;
@property (copy, nonatomic) NSString *curURL;
@property (copy, nonatomic) NSString *initialURL;
@property (copy, nonatomic) NSString *internal_ip;
@property (nonatomic) long long drm_type;
@property (copy, nonatomic) NSString *drm_token_url;
@property (nonatomic) long long play_type;
@property (nonatomic) long long audio_codec_nameId;
@property (nonatomic) long long video_codec_nameId;
@property (nonatomic) long long format_type;
@property (nonatomic) BOOL hw;
@property (nonatomic) BOOL hw_user;
@property (nonatomic) double playSpeed;
@property (nonatomic) long long reuse_socket;
@property (retain, nonatomic) NSDictionary *abr_info;
@property (nonatomic) BOOL isEnableABR;
@property (retain, nonatomic) NSString *vtype;
@property (nonatomic) long long video_stream_duration;
@property (nonatomic) long long audio_stream_duration;
@property (nonatomic) unsigned long long lastForebackSwitchTime;
@property (nonatomic) unsigned long long lastAVSwitchTime;
@property (nonatomic) unsigned long long lastResSwitchTime;
@property (nonatomic) unsigned long long lastHeadsetSwithTime;
@property (nonatomic) long long isInBackground;
@property (nonatomic) long long radioMode;
@property (nonatomic) long long curHeadset;
@property (nonatomic) long long blueTooth;
@property (copy, nonatomic) NSDictionary *r_stage_errcs;
@property (nonatomic) BOOL has_get_preload_traceid;
@property (nonatomic) BOOL hasAudioTrackInfo;
@property (nonatomic) long long mdl_cur_req_pos;
@property (nonatomic) long long mdl_cur_end_pos;
@property (nonatomic) long long mdl_cur_cache_pos;
@property (nonatomic) long long mdl_cache_type;
@property (copy, nonatomic) NSString *mdl_cur_ip;
@property (copy, nonatomic) NSString *mdl_cur_host;
@property (copy, nonatomic) NSString *mdl_cur_url;
@property (nonatomic) long long mdl_reply_size;
@property (nonatomic) long long mdl_down_pos;
@property (nonatomic) long long mdl_player_wait_time;
@property (nonatomic) long long mdl_player_wait_num;
@property (nonatomic) long long mdl_stage;
@property (nonatomic) long long mdl_error_code;
@property (nonatomic) long long mdl_sub_error_code;
@property (nonatomic) long long mdl_cur_task_num;
@property (nonatomic) int mdl_conc_count;
@property (nonatomic) long long mdl_speed;
@property (copy, nonatomic) NSString *mdl_file_key;
@property (nonatomic) long long mdl_is_socrf;
@property (nonatomic) long long mdl_req_num;
@property (nonatomic) long long mdl_url_index;
@property (copy, nonatomic) NSString *mdl_re_url;
@property (nonatomic) long long mdl_cur_soure;
@property (copy, nonatomic) NSString *mdl_extra_info;
@property (nonatomic) long long mdl_http_code;
@property (nonatomic) long long mdl_req_t;
@property (nonatomic) long long mdl_end_t;
@property (nonatomic) long long mdl_dns_t;
@property (nonatomic) long long mdl_tcp_start_t;
@property (nonatomic) long long mdl_tcp_end_t;
@property (nonatomic) long long mdl_ttfp;
@property (nonatomic) long long mdl_httpfb;
@property (nonatomic) long long mdl_http_open_end_t;
@property (nonatomic) long long mdl_fs;
@property (nonatomic) long long mdl_pcdn_full_speed;
@property (nonatomic) long long mdl_tbs;
@property (nonatomic) long long mdl_lbs;
@property (nonatomic) long long mdl_res_err;
@property (nonatomic) long long mdl_read_src;
@property (nonatomic) long long mdl_seek_num;
@property (copy, nonatomic) NSString *mdl_last_msg;
@property (copy, nonatomic) NSString *mdl_server_timing;
@property (nonatomic) long long mdl_v_lt;
@property (nonatomic) long long mdl_v_p2p_ier;
@property (copy, nonatomic) NSString *mdl_ip_list;
@property (copy, nonatomic) NSString *mdl_blocked_ips;
@property (copy, nonatomic) NSString *mdl_response_cinfo;
@property (copy, nonatomic) NSString *mdl_response_cache;
@property (copy, nonatomic) NSString *mdl_dns_type;
@property (nonatomic) long long mdl_p2p_loader;
@property (copy) NSDictionary *mdl_features;
@property (retain, nonatomic) TTVideoEngineMDLTrackInfo *mdlAudioInfo;
@property (retain, nonatomic) TTVideoEngineMDLTrackInfo *mdlVideoInfo;

+ (id)generateSessionID:(id)arg0;

- (id)vid;
- (void)setVid:(id)arg0;
- (void)setIsInBackground:(long long)arg0;
- (long long)radioMode;
- (void)setRadioMode:(long long)arg0;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg0;
- (id)pc;
- (void)setPc:(id)arg0;
- (id)getNetworkType;
- (void)setCurURL:(id)arg0;
- (id)curURL;
- (id)subtag;
- (void)setSubtag:(id)arg0;
- (void)setPlaySpeed:(double)arg0;
- (double)playSpeed;
- (BOOL)isEnableABR;
- (id)vtype;
- (void)setR_stage_errcs:(id)arg0;
- (id)r_stage_errcs;
- (id)drm_token_url;
- (int)mdl_conc_count;
- (id)mdlVideoInfo;
- (id)mdlAudioInfo;
- (id)mdl_cur_host;
- (long long)mdl_player_wait_time;
- (long long)mdl_player_wait_num;
- (long long)mdl_stage;
- (long long)mdl_cur_task_num;
- (id)mdl_file_key;
- (long long)mdl_is_socrf;
- (long long)mdl_req_num;
- (long long)mdl_url_index;
- (id)mdl_re_url;
- (long long)mdl_cur_soure;
- (id)mdl_extra_info;
- (long long)mdl_fs;
- (long long)mdl_pcdn_full_speed;
- (long long)mdl_tbs;
- (long long)mdl_lbs;
- (id)mdl_response_cache;
- (long long)reuse_socket;
- (long long)mdl_speed;
- (long long)mdl_req_t;
- (long long)mdl_end_t;
- (long long)mdl_dns_t;
- (long long)mdl_tcp_start_t;
- (long long)mdl_tcp_end_t;
- (long long)mdl_ttfp;
- (long long)mdl_httpfb;
- (long long)mdl_cur_req_pos;
- (long long)mdl_cur_end_pos;
- (long long)mdl_cur_cache_pos;
- (long long)mdl_cache_type;
- (id)mdl_cur_ip;
- (long long)mdl_reply_size;
- (long long)mdl_down_pos;
- (long long)mdl_error_code;
- (long long)mdl_http_code;
- (id)mdl_ip_list;
- (id)mdl_blocked_ips;
- (void)updateMDLInfo;
- (id)sdk_version;
- (id)pv;
- (id)sv;
- (id)internal_ip;
- (id)initial_ip;
- (id)source_type;
- (long long)drm_type;
- (long long)play_type;
- (long long)video_codec_nameId;
- (long long)audio_codec_nameId;
- (long long)format_type;
- (BOOL)hw;
- (BOOL)hw_user;
- (long long)video_stream_duration;
- (long long)audio_stream_duration;
- (id)abr_info;
- (id)currentQualityDesc;
- (unsigned long long)lastForebackSwitchTime;
- (unsigned long long)lastAVSwitchTime;
- (unsigned long long)lastResSwitchTime;
- (unsigned long long)lastHeadsetSwithTime;
- (long long)curHeadset;
- (long long)blueTooth;
- (void)setLastForebackSwitchTime:(unsigned long long)arg0;
- (void)setLastAVSwitchTime:(unsigned long long)arg0;
- (void)setLastResSwitchTime:(unsigned long long)arg0;
- (void)setLastHeadsetSwithTime:(unsigned long long)arg0;
- (void)setCurHeadset:(long long)arg0;
- (void)setBlueTooth:(long long)arg0;
- (id)generateTraceID:(id)arg0;
- (void)updateMdlFeatures:(id)arg0;
- (void)initPlay:(id)arg0 traceId:(id)arg1;
- (void)beginToPlay:(id)arg0;
- (void)updateVersionInfo;
- (void)setSv:(id)arg0;
- (void)setPv:(id)arg0;
- (void)setSdk_version:(id)arg0;
- (void)setSource_type:(id)arg0;
- (id)lastResolution;
- (void)setLastResolution:(id)arg0;
- (long long)beginSwitchResolutionCurPos;
- (void)setBeginSwitchResolutionCurPos:(long long)arg0;
- (unsigned long long)beginSwitchResolutionTime;
- (void)setBeginSwitchResolutionTime:(unsigned long long)arg0;
- (id)initialQualityDesc;
- (void)setInitialQualityDesc:(id)arg0;
- (void)setCurrentQualityDesc:(id)arg0;
- (void)setInitial_ip:(id)arg0;
- (id)initial_resolution;
- (void)setInitial_resolution:(id)arg0;
- (void)setInternal_ip:(id)arg0;
- (void)setDrm_type:(long long)arg0;
- (void)setDrm_token_url:(id)arg0;
- (void)setPlay_type:(long long)arg0;
- (void)setAudio_codec_nameId:(long long)arg0;
- (void)setVideo_codec_nameId:(long long)arg0;
- (void)setFormat_type:(long long)arg0;
- (void)setHw:(BOOL)arg0;
- (void)setHw_user:(BOOL)arg0;
- (void)setReuse_socket:(long long)arg0;
- (void)setAbr_info:(id)arg0;
- (void)setIsEnableABR:(BOOL)arg0;
- (void)setVtype:(id)arg0;
- (void)setVideo_stream_duration:(long long)arg0;
- (void)setAudio_stream_duration:(long long)arg0;
- (BOOL)has_get_preload_traceid;
- (void)setHas_get_preload_traceid:(BOOL)arg0;
- (BOOL)hasAudioTrackInfo;
- (void)setHasAudioTrackInfo:(BOOL)arg0;
- (void)setMdl_cur_req_pos:(long long)arg0;
- (void)setMdl_cur_end_pos:(long long)arg0;
- (void)setMdl_cur_cache_pos:(long long)arg0;
- (void)setMdl_cache_type:(long long)arg0;
- (void)setMdl_cur_ip:(id)arg0;
- (void)setMdl_cur_host:(id)arg0;
- (id)mdl_cur_url;
- (void)setMdl_cur_url:(id)arg0;
- (void)setMdl_reply_size:(long long)arg0;
- (void)setMdl_down_pos:(long long)arg0;
- (void)setMdl_player_wait_time:(long long)arg0;
- (void)setMdl_player_wait_num:(long long)arg0;
- (void)setMdl_stage:(long long)arg0;
- (void)setMdl_error_code:(long long)arg0;
- (long long)mdl_sub_error_code;
- (void)setMdl_sub_error_code:(long long)arg0;
- (void)setMdl_cur_task_num:(long long)arg0;
- (void)setMdl_conc_count:(int)arg0;
- (void)setMdl_speed:(long long)arg0;
- (void)setMdl_file_key:(id)arg0;
- (void)setMdl_is_socrf:(long long)arg0;
- (void)setMdl_req_num:(long long)arg0;
- (void)setMdl_url_index:(long long)arg0;
- (void)setMdl_re_url:(id)arg0;
- (void)setMdl_cur_soure:(long long)arg0;
- (void)setMdl_extra_info:(id)arg0;
- (void)setMdl_http_code:(long long)arg0;
- (void)setMdl_req_t:(long long)arg0;
- (void)setMdl_end_t:(long long)arg0;
- (void)setMdl_dns_t:(long long)arg0;
- (void)setMdl_tcp_start_t:(long long)arg0;
- (void)setMdl_tcp_end_t:(long long)arg0;
- (void)setMdl_ttfp:(long long)arg0;
- (void)setMdl_httpfb:(long long)arg0;
- (long long)mdl_http_open_end_t;
- (void)setMdl_http_open_end_t:(long long)arg0;
- (void)setMdl_fs:(long long)arg0;
- (void)setMdl_pcdn_full_speed:(long long)arg0;
- (void)setMdl_tbs:(long long)arg0;
- (void)setMdl_lbs:(long long)arg0;
- (long long)mdl_res_err;
- (void)setMdl_res_err:(long long)arg0;
- (long long)mdl_read_src;
- (void)setMdl_read_src:(long long)arg0;
- (long long)mdl_seek_num;
- (void)setMdl_seek_num:(long long)arg0;
- (id)mdl_last_msg;
- (void)setMdl_last_msg:(id)arg0;
- (id)mdl_server_timing;
- (void)setMdl_server_timing:(id)arg0;
- (long long)mdl_v_lt;
- (void)setMdl_v_lt:(long long)arg0;
- (long long)mdl_v_p2p_ier;
- (void)setMdl_v_p2p_ier:(long long)arg0;
- (void)setMdl_ip_list:(id)arg0;
- (void)setMdl_blocked_ips:(id)arg0;
- (id)mdl_response_cinfo;
- (void)setMdl_response_cinfo:(id)arg0;
- (void)setMdl_response_cache:(id)arg0;
- (id)mdl_dns_type;
- (void)setMdl_dns_type:(id)arg0;
- (long long)mdl_p2p_loader;
- (void)setMdl_p2p_loader:(long long)arg0;
- (id)mdl_features;
- (void)setMdl_features:(id)arg0;
- (void)setMdlAudioInfo:(id)arg0;
- (void)setMdlVideoInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)delegate;
- (id)device_id;
- (void)setDevice_id:(id)arg0;
- (long long)isInBackground;
- (void)setDelegate:(id)arg0;
- (id)initialURL;
- (id)session_id;
- (void)setSession_id:(id)arg0;
- (id)currentResolution;
- (void)setCurrentResolution:(id)arg0;
- (void)setInitialURL:(id)arg0;

@end