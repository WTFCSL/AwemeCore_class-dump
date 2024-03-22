//
//     Generated by private class-dump
//

@class CSJCouponInfo, NSDictionary, CSJRewardedVideoDataContext, CSJAdGroupInfo, CSJAudioInfo, CSJTplInfo, CSJRewardLiveModel, CSJRewardDrawConfig, CSJClickTriggerConfigModel, CSJPlayableInfo, CSJDirectLandingPageInfo, CSJAdDyLiteInfoModel, CSJMiddleTplInfo, CSJLiveStreamInfo, NSNumber, CSJAppInfo, CSJPlayableCommonInfo, CSJSKANADImpressionObject, CSJCloudGameInfo, CSJSkipControlModel, CSJEcomCouponModel, NSArray, NSMutableDictionary, CSJSKANStoreProductModel, NSString, CSJWCMiniappInfo, CSJRewardedAdViewModel, CSJDeepLink, CSJRenderModel, CSJLandingPageConfModel, CSJVideoInfo, CSJClickActionModel, CSJRewardAgainModel, CSJInteractionMethodParams, CSJImage;

@interface CSJMaterialMeta : NSObject <CSJAd, CSJActionDeepLinkModel, CSJActionWebModel, CSJActionPhoneModel, NSCoding> {
    BOOL _allowCustomVideoPlayer;
    BOOL _hasOpenMethodQuery;
    BOOL _is_html;
    BOOL _isPlayable;
    BOOL _showDislike;
    BOOL _video_local_prefetch;
    BOOL _isPlayableTestData;
    BOOL _userDidCustomVideoPlayer;
    BOOL _reward_info_show;
    BOOL _havePushTargetPage;
    BOOL _bu_middleTemplateComplete;
    BOOL _closeOnDislike;
    BOOL _hasSendReward;
    BOOL _blockAutoOpen;
    BOOL _playable_skoverlay;
    BOOL _validDislikeInputAccessoryView;
    BOOL _hasPrePlayable;
    BOOL _isRewardDraw;
    BOOL _reward_backup_timing;
    BOOL _pauseRewardFullLinkTiming;
    BOOL _isDidShowInteractive;
    BOOL _openFromClick;
    BOOL _interstitial_bg_transparent;
    float _shakeValue;
    NSString *AdID;
    NSString *extInfo;
    CSJDeepLink *deepLink;
    NSString *_targetURL;
    NSString *phone;
    NSString *ulink;
    CSJVideoInfo *_videoInfo;
    NSString *appLogBaseUrl;
    long long _interactionType;
    NSArray *_imageAry;
    CSJImage *_icon;
    NSString *_AdTitle;
    NSString *_AdDescription;
    NSString *_source;
    NSString *_buttonText;
    long long _imageMode;
    long long _score;
    long long _commentNum;
    long long _appSize;
    long long _videoDuration;
    NSArray *_filterWords;
    NSDictionary *_mediaExt;
    NSString *_ADXName;
    CSJAdGroupInfo *_groupInfo;
    NSString *_mopubAuctionPrice2;
    NSString *_preCacheLogExt2;
    NSString *_dsp_html;
    NSArray *_show_urls;
    NSArray *_click_urls;
    long long _unionSpecial;
    long long _countDown;
    double _expireTimestamp;
    long long _saveTimestamp;
    CSJAppInfo *_appInfo;
    unsigned long long _video_encode_type;
    CSJVideoInfo *_h264VideoInfo;
    CSJVideoInfo *_h265VideoInfo;
    id /* block */ _finishBlock;
    long long _playbarShowtime;
    long long _render_delay_time;
    CSJTplInfo *_tplInfo;
    NSString *_creative_extra;
    CSJMiddleTplInfo *_middleTplInfo;
    CSJImage *_coverImage;
    NSDictionary *_clickAreaDic;
    long long _showAdLogo;
    long long _playBarStyle;
    double _startLoad_interval;
    double _startPlay_interval;
    double _startDownload_interval;
    long long _video_prefetch_size;
    long long _video_prefetch_error_code;
    NSString *_video_prefetch_error_msg;
    NSString *_video_prefetch_server_msg;
    long long _appstoreJumpType;
    long long _playableType;
    long long _feedVideoOpentype;
    NSString *_playableStyle;
    long long _videoAdaptation;
    NSDictionary *_session_params;
    NSDictionary *_materialDictionary;
    long long _cacheSort;
    long long _adSlotType;
    long long _renderType;
    long long _renderControl;
    NSString *_rewardName;
    long long _rewardAmount;
    long long _landingScrollPercentage;
    long long _if_both_open;
    long long _if_double_deeplink;
    unsigned long long _landingPageStyle;
    NSString *_bu_middleTemplateData;
    long long _cover_click_area;
    CSJPlayableInfo *_playableInfo;
    CSJCloudGameInfo *_cloudGameInfo;
    CSJDirectLandingPageInfo *_directLandingPageInfo;
    unsigned long long _orientation;
    double _fullScreenAspectRatio;
    double _fullScreenAspectMargin;
    double _fullScreenCornerRadius;
    NSDictionary *_extension;
    CSJRenderModel *_render;
    long long _page_render_type;
    CSJLandingPageConfModel *_landingPageConf;
    NSString *_adInfo;
    CSJRewardAgainModel *_rewardAgainModel;
    unsigned long long _rewardSendResult;
    NSMutableDictionary *_hasSendRewardDict;
    NSString *_originButtonText;
    long long _playableDurationTime;
    long long _rewardedEndCardCloseTime;
    long long _rewardedPlayableCloseTime;
    CSJClickActionModel *_clickActionModel;
    NSNumber *_endcard_skoverlay;
    unsigned long long _dynamic_join_type;
    long long _playableCloseTime;
    long long _watchPercent;
    long long _playableRewardType;
    long long _rewardBrowseType;
    long long _rewardBrowseWebviewDurationTime;
    long long _interactionMethod;
    long long _interactionMethod_ads;
    long long _interactionMethod_real;
    CSJInteractionMethodParams *_interactionMethodParams;
    long long _convertType;
    long long _skipResult;
    long long _downloadNum;
    CSJPlayableCommonInfo *_playableCommonInfo;
    CSJWCMiniappInfo *_wcMiniappInfo;
    CSJEcomCouponModel *_ecomCouponModel;
    CSJAudioInfo *_audioInfo;
    CSJAdDyLiteInfoModel *_dyLiteInfoModel;
    CSJCouponInfo *_dynamic_join_coupon_style;
    long long _if_send_click;
    CSJSKANStoreProductModel *_skan_product_item;
    CSJSKANADImpressionObject *_skan_Impression_Objct;
    CSJRewardLiveModel *_rewardLiveModel;
    long long _calculationMethod;
    long long _rotationAngle;
    CSJSkipControlModel *_skipControlModel;
    double _showPollTime;
    long long _cache_time;
    NSString *_price;
    NSString *_cache_ext;
    NSString *_material_key;
    long long _feedVideoFinishType;
    CSJRewardDrawConfig *_rewardDrawConfig;
    long long _reward_full_play_time;
    long long _reward_full_time_type;
    NSString *_dynamic_configs;
    long long _reward_backup_duration;
    NSArray *_rewardedRetainAlertConfigs;
    NSNumber *_rewardFullLinkTimeSecond;
    long long _rewardShowRenderType;
    CSJRewardedVideoDataContext *_rewardAdDataContext;
    CSJRewardedAdViewModel *_rewardedAdViewModel;
    CSJClickTriggerConfigModel *_clickTriggerConfig;
    long long _calculation_method_twist;
    long long _feed_reward_type;
    NSDictionary *_rewardAdvancedConfig;
    CSJLiveStreamInfo *_liveStreamInfo;
    long long _liveInteractionType;
    NSString *_liveRoomId;
    NSString *_ecomLiveParams;
}

@property (nonatomic) BOOL allowCustomVideoPlayer;
@property (nonatomic) BOOL hasOpenMethodQuery;
@property (copy, nonatomic) NSString *mopubAuctionPrice2;
@property (copy, nonatomic) NSString *preCacheLogExt2;
@property (nonatomic) BOOL is_html;
@property (copy, nonatomic) NSString *dsp_html;
@property (copy, nonatomic) NSArray *show_urls;
@property (copy, nonatomic) NSArray *click_urls;
@property (nonatomic) long long unionSpecial;
@property (nonatomic) BOOL isPlayable;
@property (nonatomic) long long countDown;
@property (nonatomic) double expireTimestamp;
@property (nonatomic) long long saveTimestamp;
@property (retain, nonatomic) CSJAppInfo *appInfo;
@property (nonatomic) unsigned long long video_encode_type;
@property (readonly, nonatomic) CSJVideoInfo *videoInfo;
@property (retain, nonatomic) CSJVideoInfo *h264VideoInfo;
@property (retain, nonatomic) CSJVideoInfo *h265VideoInfo;
@property (copy) id /* block */ finishBlock;
@property (nonatomic) BOOL showDislike;
@property (nonatomic) long long playbarShowtime;
@property (nonatomic) long long render_delay_time;
@property (retain, nonatomic) CSJTplInfo *tplInfo;
@property (copy, nonatomic) NSString *creative_extra;
@property (retain, nonatomic) CSJMiddleTplInfo *middleTplInfo;
@property (retain, nonatomic) CSJImage *coverImage;
@property (retain, nonatomic) NSDictionary *clickAreaDic;
@property (nonatomic) long long showAdLogo;
@property (nonatomic) long long playBarStyle;
@property (nonatomic) double startLoad_interval;
@property (nonatomic) double startPlay_interval;
@property (nonatomic) double startDownload_interval;
@property (nonatomic) long long video_prefetch_size;
@property (nonatomic) BOOL video_local_prefetch;
@property (nonatomic) long long video_prefetch_error_code;
@property (copy, nonatomic) NSString *video_prefetch_error_msg;
@property (copy, nonatomic) NSString *video_prefetch_server_msg;
@property (nonatomic) long long appstoreJumpType;
@property (nonatomic) long long playableType;
@property (nonatomic) long long feedVideoOpentype;
@property (copy, nonatomic) NSString *playableStyle;
@property (nonatomic) long long videoAdaptation;
@property (nonatomic) BOOL isPlayableTestData;
@property (copy, nonatomic) NSDictionary *session_params;
@property (copy, nonatomic) NSDictionary *materialDictionary;
@property (nonatomic) long long cacheSort;
@property (nonatomic) long long adSlotType;
@property (nonatomic) long long renderType;
@property (nonatomic) long long renderControl;
@property (nonatomic) BOOL userDidCustomVideoPlayer;
@property (copy, nonatomic) NSString *rewardName;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) BOOL reward_info_show;
@property (nonatomic) long long landingScrollPercentage;
@property (nonatomic) long long if_both_open;
@property (nonatomic) long long if_double_deeplink;
@property (nonatomic) BOOL havePushTargetPage;
@property (nonatomic) unsigned long long landingPageStyle;
@property (nonatomic) BOOL bu_middleTemplateComplete;
@property (copy, nonatomic) NSString *bu_middleTemplateData;
@property (nonatomic) long long cover_click_area;
@property (retain, nonatomic) CSJPlayableInfo *playableInfo;
@property (retain, nonatomic) CSJCloudGameInfo *cloudGameInfo;
@property (retain, nonatomic) CSJDirectLandingPageInfo *directLandingPageInfo;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) double fullScreenAspectRatio;
@property (nonatomic) double fullScreenAspectMargin;
@property (nonatomic) double fullScreenCornerRadius;
@property (copy, nonatomic) NSDictionary *extension;
@property (retain, nonatomic) CSJRenderModel *render;
@property (nonatomic) long long page_render_type;
@property (retain, nonatomic) CSJLandingPageConfModel *landingPageConf;
@property (copy, nonatomic) NSString *adInfo;
@property (nonatomic) BOOL closeOnDislike;
@property (retain, nonatomic) CSJRewardAgainModel *rewardAgainModel;
@property (nonatomic) BOOL hasSendReward;
@property (nonatomic) unsigned long long rewardSendResult;
@property (retain, nonatomic) NSMutableDictionary *hasSendRewardDict;
@property (copy, nonatomic) NSString *originButtonText;
@property (nonatomic) long long playableDurationTime;
@property (nonatomic) long long rewardedEndCardCloseTime;
@property (nonatomic) long long rewardedPlayableCloseTime;
@property (retain, nonatomic) CSJClickActionModel *clickActionModel;
@property (nonatomic) BOOL blockAutoOpen;
@property (retain, nonatomic) NSNumber *endcard_skoverlay;
@property (nonatomic) BOOL playable_skoverlay;
@property (nonatomic) unsigned long long dynamic_join_type;
@property (nonatomic) long long playableCloseTime;
@property (nonatomic) long long watchPercent;
@property (nonatomic) long long playableRewardType;
@property (nonatomic) long long rewardBrowseType;
@property (nonatomic) long long rewardBrowseWebviewDurationTime;
@property (nonatomic) BOOL validDislikeInputAccessoryView;
@property (nonatomic) long long interactionMethod;
@property (nonatomic) long long interactionMethod_ads;
@property (nonatomic) long long interactionMethod_real;
@property (retain, nonatomic) CSJInteractionMethodParams *interactionMethodParams;
@property (nonatomic) long long convertType;
@property (nonatomic) BOOL hasPrePlayable;
@property (nonatomic) long long skipResult;
@property (nonatomic) long long downloadNum;
@property (retain, nonatomic) CSJPlayableCommonInfo *playableCommonInfo;
@property (retain, nonatomic) CSJWCMiniappInfo *wcMiniappInfo;
@property (retain, nonatomic) CSJEcomCouponModel *ecomCouponModel;
@property (retain, nonatomic) CSJAudioInfo *audioInfo;
@property (retain, nonatomic) CSJAdDyLiteInfoModel *dyLiteInfoModel;
@property (retain, nonatomic) CSJCouponInfo *dynamic_join_coupon_style;
@property (nonatomic) long long if_send_click;
@property (retain, nonatomic) CSJSKANStoreProductModel *skan_product_item;
@property (retain, nonatomic) CSJSKANADImpressionObject *skan_Impression_Objct;
@property (retain, nonatomic) CSJRewardLiveModel *rewardLiveModel;
@property (nonatomic) float shakeValue;
@property (nonatomic) long long calculationMethod;
@property (nonatomic) long long rotationAngle;
@property (retain, nonatomic) CSJSkipControlModel *skipControlModel;
@property (nonatomic) double showPollTime;
@property (nonatomic) long long cache_time;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *cache_ext;
@property (copy, nonatomic) NSString *material_key;
@property (nonatomic) long long feedVideoFinishType;
@property (nonatomic) BOOL isRewardDraw;
@property (retain, nonatomic) CSJRewardDrawConfig *rewardDrawConfig;
@property (nonatomic) long long reward_full_play_time;
@property (nonatomic) long long reward_full_time_type;
@property (copy, nonatomic) NSString *dynamic_configs;
@property (nonatomic) BOOL reward_backup_timing;
@property (nonatomic) long long reward_backup_duration;
@property (copy, nonatomic) NSArray *rewardedRetainAlertConfigs;
@property (retain, nonatomic) NSNumber *rewardFullLinkTimeSecond;
@property (nonatomic) BOOL pauseRewardFullLinkTiming;
@property (nonatomic) long long rewardShowRenderType;
@property (nonatomic) BOOL isDidShowInteractive;
@property (retain, nonatomic) CSJRewardedVideoDataContext *rewardAdDataContext;
@property (retain, nonatomic) CSJRewardedAdViewModel *rewardedAdViewModel;
@property (retain, nonatomic) CSJClickTriggerConfigModel *clickTriggerConfig;
@property (nonatomic) BOOL openFromClick;
@property (nonatomic) long long calculation_method_twist;
@property (nonatomic) long long feed_reward_type;
@property (nonatomic) BOOL interstitial_bg_transparent;
@property (copy, nonatomic) NSDictionary *rewardAdvancedConfig;
@property (retain, nonatomic) CSJLiveStreamInfo *liveStreamInfo;
@property (nonatomic) long long liveInteractionType;
@property (copy, nonatomic) NSString *liveRoomId;
@property (copy, nonatomic) NSString *ecomLiveParams;
@property (nonatomic) long long interactionType;
@property (copy, nonatomic) NSArray *imageAry;
@property (retain, nonatomic) CSJImage *icon;
@property (copy, nonatomic) NSString *AdTitle;
@property (copy, nonatomic) NSString *AdDescription;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long imageMode;
@property (nonatomic) long long score;
@property (nonatomic) long long commentNum;
@property (nonatomic) long long appSize;
@property (nonatomic) long long videoDuration;
@property (readonly, copy, nonatomic) NSString *videoUrl;
@property (readonly, nonatomic) long long videoResolutionWidth;
@property (readonly, nonatomic) long long videoResolutionHeight;
@property (copy, nonatomic) NSArray *filterWords;
@property (copy, nonatomic) NSDictionary *mediaExt;
@property (copy, nonatomic) NSString *ADXName;
@property (retain, nonatomic) CSJAdGroupInfo *groupInfo;
@property (copy, nonatomic) NSString *AdID;
@property (copy) NSString *extInfo;
@property (copy, nonatomic) NSString *appLogBaseUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CSJDeepLink *deepLink;
@property (copy, nonatomic) NSString *ulink;
@property (copy, nonatomic) NSString *targetURL;
@property (copy, nonatomic) NSString *phone;

- (id)ecomLiveParams;
- (void)setEcomLiveParams:(id)arg0;
- (long long)renderType;
- (id)videoInfo;
- (void)setCountDown:(long long)arg0;
- (void)setCoverImage:(id)arg0;
- (void)setAdID:(id)arg0;
- (long long)rewardAmount;
- (void)setAdInfo:(id)arg0;
- (id)adInfo;
- (void)setIsRewardDraw:(BOOL)arg0;
- (id)getRewardLiveLinkParams:(id)arg0;
- (id)wcMiniappInfo;
- (void)setExtInfo:(id)arg0;
- (void)setAppLogBaseUrl:(id)arg0;
- (id)mopubAuctionPrice;
- (void)setMopubAuctionPrice:(id)arg0;
- (void)reportClickUrls;
- (id)preCacheLogExt;
- (void)setPreCacheLogExt:(id)arg0;
- (BOOL)validShakeTrigger;
- (id)getAppScheme;
- (id)filterWords;
- (id)clickActionModel;
- (BOOL)isVideoImageMode;
- (id)appLogBaseUrl;
- (id)landingPageConf;
- (long long)if_send_click;
- (id)playableInfo;
- (id)playableStyle;
- (void)setPlayableStyle:(id)arg0;
- (id)AdID;
- (long long)imageMode;
- (id)ADXName;
- (BOOL)isImmersiveLandingPage;
- (BOOL)validRelateMaterials;
- (BOOL)needUseMiddleTemplateToRender;
- (long long)appstoreJumpType;
- (BOOL)isRelatedRecommendation;
- (void)updateLinkValue:(id)arg0 forKey:(id)arg1;
- (id)updateUrl:(id)arg0 queryKey:(id)arg1 value:(id)arg2;
- (void)setMaterialDictionary:(id)arg0;
- (void)processData;
- (void)setIs_html:(BOOL)arg0;
- (void)setDsp_html:(id)arg0;
- (void)setImageAry:(id)arg0;
- (void)setShow_urls:(id)arg0;
- (void)setClick_urls:(id)arg0;
- (void)setAdTitle:(id)arg0;
- (void)setUnionSpecial:(long long)arg0;
- (void)setH264VideoInfo:(id)arg0;
- (void)setH265VideoInfo:(id)arg0;
- (void)setVideo_encode_type:(unsigned long long)arg0;
- (void)setCreative_extra:(id)arg0;
- (void)setImageMode:(long long)arg0;
- (void)setRenderControl:(long long)arg0;
- (void)setShowDislike:(BOOL)arg0;
- (void)setFilterWords:(id)arg0;
- (void)setMediaExt:(id)arg0;
- (void)setPlaybarShowtime:(long long)arg0;
- (void)setLandingPageStyle:(unsigned long long)arg0;
- (void)setMiddleTplInfo:(id)arg0;
- (void)setRender_delay_time:(long long)arg0;
- (void)setTplInfo:(id)arg0;
- (void)setClickAreaDic:(id)arg0;
- (void)setPlayBarStyle:(long long)arg0;
- (void)setShowAdLogo:(long long)arg0;
- (void)setAppstoreJumpType:(long long)arg0;
- (void)setPlayableType:(long long)arg0;
- (void)setUlink:(id)arg0;
- (void)setFeedVideoOpentype:(long long)arg0;
- (void)setVideoAdaptation:(long long)arg0;
- (long long)videoAdaptation;
- (void)setCacheSort:(long long)arg0;
- (void)setIf_send_click:(long long)arg0;
- (void)setReward_info_show:(BOOL)arg0;
- (void)setRewardAdvancedConfig:(id)arg0;
- (void)setLandingScrollPercentage:(long long)arg0;
- (void)setIf_both_open:(long long)arg0;
- (void)setIf_double_deeplink:(long long)arg0;
- (void)setAllowCustomVideoPlayer:(BOOL)arg0;
- (void)setSkan_Impression_Objct:(id)arg0;
- (void)setSkan_product_item:(id)arg0;
- (void)setCover_click_area:(long long)arg0;
- (void)setRender:(id)arg0;
- (void)setPage_render_type:(long long)arg0;
- (void)setLandingPageConf:(id)arg0;
- (void)setFullScreenAspectRatio:(double)arg0;
- (void)setFullScreenAspectMargin:(double)arg0;
- (void)setFullScreenCornerRadius:(double)arg0;
- (void)setPlayableDurationTime:(long long)arg0;
- (void)setPlayableCloseTime:(long long)arg0;
- (void)setLiveStreamInfo:(id)arg0;
- (void)setCloudGameInfo:(id)arg0;
- (id)cloudGameInfo;
- (void)setPlayableInfo:(id)arg0;
- (void)setDirectLandingPageInfo:(id)arg0;
- (id)directLandingPageInfo;
- (void)setPlayableCommonInfo:(id)arg0;
- (void)setHasPrePlayable:(BOOL)arg0;
- (void)setCloseOnDislike:(BOOL)arg0;
- (void)setADXName:(id)arg0;
- (void)setRewardAgainModel:(id)arg0;
- (void)setDynamic_join_type:(unsigned long long)arg0;
- (void)setEndcard_skoverlay:(id)arg0;
- (void)setPlayable_skoverlay:(BOOL)arg0;
- (void)setClickActionModel:(id)arg0;
- (void)setRewardedEndCardCloseTime:(long long)arg0;
- (void)setRewardedPlayableCloseTime:(long long)arg0;
- (void)setBlockAutoOpen:(BOOL)arg0;
- (void)setPlayableRewardType:(long long)arg0;
- (void)setRewardBrowseType:(long long)arg0;
- (void)setRewardBrowseWebviewDurationTime:(long long)arg0;
- (void)setRewardLiveModel:(id)arg0;
- (void)setSkipControlModel:(id)arg0;
- (long long)playableCloseTime;
- (void)setInteractionMethod_ads:(long long)arg0;
- (void)checkInteractionMethodValidVoid;
- (void)setInteractionMethodParams:(id)arg0;
- (void)setConvertType:(long long)arg0;
- (void)setShowPollTime:(double)arg0;
- (void)setCache_time:(long long)arg0;
- (void)setCache_ext:(id)arg0;
- (void)setMaterial_key:(id)arg0;
- (void)setDownloadNum:(long long)arg0;
- (long long)downloadNum;
- (void)setWcMiniappInfo:(id)arg0;
- (void)setLiveInteractionType:(long long)arg0;
- (void)setLiveRoomId:(id)arg0;
- (void)setFeedVideoFinishType:(long long)arg0;
- (void)setEcomCouponModel:(id)arg0;
- (void)setShakeValue:(float)arg0;
- (void)setRewardDrawConfig:(id)arg0;
- (void)setReward_full_play_time:(long long)arg0;
- (void)setReward_full_time_type:(long long)arg0;
- (void)setDynamic_configs:(id)arg0;
- (void)setReward_backup_timing:(BOOL)arg0;
- (void)setReward_backup_duration:(long long)arg0;
- (void)setRewardedRetainAlertConfigs:(id)arg0;
- (void)setRewardAdDataContext:(id)arg0;
- (id)rewardedRetainAlertConfigs;
- (void)setClickTriggerConfig:(id)arg0;
- (void)setCalculation_method_twist:(long long)arg0;
- (void)setFeed_reward_type:(long long)arg0;
- (void)setDyLiteInfoModel:(id)arg0;
- (void)setInterstitial_bg_transparent:(BOOL)arg0;
- (void)setDynamic_join_coupon_style:(id)arg0;
- (long long)showAdLogo;
- (BOOL)is_html;
- (id)dsp_html;
- (double)startLoad_interval;
- (double)startPlay_interval;
- (double)startDownload_interval;
- (BOOL)video_local_prefetch;
- (long long)video_prefetch_size;
- (long long)video_prefetch_error_code;
- (id)video_prefetch_error_msg;
- (id)video_prefetch_server_msg;
- (long long)unionSpecial;
- (long long)playbarShowtime;
- (id)click_urls;
- (id)clickAreaDic;
- (long long)playableType;
- (id)ulink;
- (long long)render_delay_time;
- (id)tplInfo;
- (id)middleTplInfo;
- (long long)playBarStyle;
- (long long)cacheSort;
- (BOOL)reward_info_show;
- (id)rewardAdvancedConfig;
- (long long)landingScrollPercentage;
- (long long)if_both_open;
- (long long)if_double_deeplink;
- (BOOL)allowCustomVideoPlayer;
- (long long)page_render_type;
- (unsigned long long)landingPageStyle;
- (BOOL)bu_middleTemplateComplete;
- (id)bu_middleTemplateData;
- (long long)cover_click_area;
- (double)fullScreenAspectMargin;
- (double)fullScreenCornerRadius;
- (long long)rewardedEndCardCloseTime;
- (long long)rewardedPlayableCloseTime;
- (unsigned long long)dynamic_join_type;
- (long long)watchPercent;
- (long long)rewardBrowseType;
- (long long)rewardBrowseWebviewDurationTime;
- (float)shakeValue;
- (id)interactionMethodParams;
- (long long)cache_time;
- (id)cache_ext;
- (id)skipControlModel;
- (BOOL)playable_skoverlay;
- (long long)liveInteractionType;
- (id)liveRoomId;
- (long long)feedVideoFinishType;
- (id)ecomCouponModel;
- (id)rewardDrawConfig;
- (id)dynamic_configs;
- (long long)calculation_method_twist;
- (long long)feed_reward_type;
- (BOOL)interstitial_bg_transparent;
- (id)dynamic_join_coupon_style;
- (void)setStartLoad_interval:(double)arg0;
- (void)setStartPlay_interval:(double)arg0;
- (void)setBu_middleTemplateData:(id)arg0;
- (void)setBu_middleTemplateComplete:(BOOL)arg0;
- (void)setWatchPercent:(long long)arg0;
- (void)setSkipResult:(long long)arg0;
- (BOOL)hasOpenMethodQuery;
- (void)setHasOpenMethodQuery:(BOOL)arg0;
- (long long)commentNum;
- (long long)defaultCommentNumValue;
- (void)setUserDidCustomVideoPlayer:(BOOL)arg0;
- (id)ritInExtInfo;
- (BOOL)isVideoSlot;
- (BOOL)isDefaultFullVideoInteractionMethod;
- (BOOL)isDefaultNativeBannerAndFeedInteractionMethod;
- (long long)interactionMethod_real;
- (BOOL)validNativeAllClickArea;
- (id)_getAdvancedRewardConfigKey:(long long)arg0;
- (BOOL)validInteractionMethod;
- (BOOL)validNativeBannerInteractionMethodWith:(long long)arg0;
- (long long)playfulPageType;
- (BOOL)isRewardDirectLandingPage;
- (BOOL)isCloudGame;
- (BOOL)hasPrePlayable;
- (double)defaultScoreValue;
- (double)aspectMarginValue;
- (struct CGSize { double x0; double x1; })intersitialExpectSizeWithWidth:(double)arg0 height:(double)arg1;
- (void)__originDict:(id)arg0 key:(id)arg1 intoDict:(id)arg2;
- (void)__originDict:(id)arg0 originKey:(id)arg1 intoDict:(id)arg2 intoKey:(id)arg3;
- (long long)twistRotationThreshold;
- (id)AdSource;
- (id)nativeExpress_AdTitle;
- (id)nativeExpress_AdDescription;
- (id)originButtonText;
- (BOOL)isBandingHtmlBannerStyle;
- (long long)getVideoCompleteRewardMinDuration;
- (BOOL)validLandingPageNativeAllClickArea;
- (BOOL)isBrandVideoAd;
- (BOOL)isExpressPlayable;
- (BOOL)restrictJITEnterPlayful;
- (BOOL)isBothOpen;
- (BOOL)isDoubleDeeplink;
- (BOOL)validMiddleTemplate;
- (BOOL)needUseTmeplateOrMiddleTemplateToRender;
- (double)starCount;
- (BOOL)showSkipWhenPlayEnd;
- (BOOL)shouldAddCoupon;
- (long long)videoResolutionWidth;
- (long long)videoResolutionHeight;
- (id)extraDataDictWithExtraDataType:(long long)arg0;
- (id)imageModeWithURLString:(id)arg0;
- (id)dynamicDataModel;
- (id)middleDynamicDataModel;
- (id)luParamsInfoWithSearchId:(id)arg0 offset:(long long)arg1;
- (id)luShowClickInfo;
- (long long)lu_ea;
- (id)adAllImages;
- (BOOL)isFeedReward;
- (BOOL)isSplashSpecialLabel;
- (void)setCommentNum:(long long)arg0;
- (void)setAppSize:(long long)arg0;
- (id)mopubAuctionPrice2;
- (void)setMopubAuctionPrice2:(id)arg0;
- (id)preCacheLogExt2;
- (void)setPreCacheLogExt2:(id)arg0;
- (BOOL)isPlayableTestData;
- (void)setIsPlayableTestData:(BOOL)arg0;
- (void)setAdSlotType:(long long)arg0;
- (BOOL)userDidCustomVideoPlayer;
- (BOOL)havePushTargetPage;
- (unsigned long long)rewardSendResult;
- (void)setRewardSendResult:(unsigned long long)arg0;
- (void)setOriginButtonText:(id)arg0;
- (id)endcard_skoverlay;
- (BOOL)validDislikeInputAccessoryView;
- (void)setValidDislikeInputAccessoryView:(BOOL)arg0;
- (id)dyLiteInfoModel;
- (void)setRewardShowRenderType:(long long)arg0;
- (BOOL)isDidShowInteractive;
- (void)setIsDidShowInteractive:(BOOL)arg0;
- (void)setRewardedAdViewModel:(id)arg0;
- (id)skan_Impression_Objct;
- (BOOL)needUseTemplateToRender;
- (id)imageAry;
- (BOOL)isAudioAd;
- (double)showPollTime;
- (id)AdDescription;
- (BOOL)isFullSizeRatioStyle;
- (BOOL)needReportDynamicShowType;
- (BOOL)isPlayableLandingPage;
- (BOOL)isInterstitialStyle;
- (id)show_urls;
- (id)skan_product_item;
- (BOOL)validNativeCreateClickArea;
- (void)setInteractionMethod_real:(long long)arg0;
- (long long)feedVideoOpentype;
- (BOOL)validPlayWithDownload;
- (BOOL)isRewardedOrFullscreenAd;
- (id)material_key;
- (unsigned long long)rewardSceneType;
- (long long)adSlotType;
- (BOOL)invalidShakeDurationLimited;
- (id)clickTriggerConfig;
- (BOOL)validShakeDurationUnlimited;
- (BOOL)closeOnDislike;
- (BOOL)useLivePlayer;
- (id)mediaExt;
- (void)fullScreenRewardedDislikeIfValidInputAccessoryView;
- (BOOL)shouldInterstitialDismiss;
- (long long)renderControl;
- (void)correctRenderControl:(long long)arg0;
- (BOOL)isPurePlayable;
- (BOOL)liveAdSupportCustomAction;
- (BOOL)isRewardEcommerce;
- (BOOL)enableAdvancedReward:(long long)arg0;
- (id)hasSendRewardDict;
- (void)setHasSendRewardDict:(id)arg0;
- (void)setHasSendReward:(BOOL)arg0;
- (id)advancedRewardConfig:(long long)arg0;
- (void)setRewardName:(id)arg0;
- (void)setRewardAmount:(long long)arg0;
- (id)rewardName;
- (id)liveStreamInfo;
- (BOOL)validForRewardedLive;
- (id)h265VideoInfo;
- (id)h264VideoInfo;
- (unsigned long long)video_encode_type;
- (BOOL)reward_backup_timing;
- (long long)skipResult;
- (long long)convertType;
- (long long)reward_full_time_type;
- (long long)rewardShowRenderType;
- (id)rewardLiveModel;
- (unsigned long long)fullScreenRewardedSupportOrientationMask;
- (long long)fullScreenRewardedPreferredOrientation;
- (BOOL)isNativeShowLoading;
- (BOOL)isRewardBrowse;
- (long long)playableDurationTime;
- (long long)rewardedPlayTime:(double)arg0;
- (long long)playableRewardType;
- (BOOL)isRewardUnify30AndContainLandingPage;
- (void)setupDataWithDictionary:(id)arg0;
- (id)rewardedAdTag;
- (void)updateRewardLiveLinkParams:(long long)arg0;
- (void)setVideo_prefetch_size:(long long)arg0;
- (void)setStartDownload_interval:(double)arg0;
- (void)setVideo_local_prefetch:(BOOL)arg0;
- (id)extInfo;
- (void)setVideo_prefetch_error_code:(long long)arg0;
- (void)setVideo_prefetch_error_msg:(id)arg0;
- (void)setVideo_prefetch_server_msg:(id)arg0;
- (double)getRewardExpireTimestamp;
- (BOOL)vaildForRewardedVideo;
- (BOOL)vaildForPurePlayable;
- (BOOL)isSupportPlayful;
- (struct CGSize { double x0; double x1; })fullScreenRewardedStyleViewSize;
- (void)setPauseRewardFullLinkTiming:(BOOL)arg0;
- (BOOL)isRewardDraw;
- (long long)reward_backup_duration;
- (id)rewardedAdViewModel;
- (id)rewardFullLinkTimeSecond;
- (void)setRewardFullLinkTimeSecond:(id)arg0;
- (BOOL)isRewardFullScreenPortrait;
- (BOOL)isVideoPlayable;
- (id)getTrackTag;
- (id)playableCommonInfo;
- (BOOL)hasSendReward;
- (id)rewardAdDataContext;
- (long long)reward_full_play_time;
- (id)ritSettingModelInExtInfo;
- (BOOL)isRewardUnify30;
- (BOOL)showDislike;
- (id)rewardAgainModel;
- (struct CGSize { double x0; double x1; })fullScreenAdSizeValidSafeInsets:(BOOL)arg0;
- (double)fullScreenAspectRatio;
- (BOOL)isRewardFullScreenLandscape;
- (id)AdTitle;
- (id)session_params;
- (id)materialDictionary;
- (id)creative_extra;
- (void)setHavePushTargetPage:(BOOL)arg0;
- (BOOL)blockAutoOpen;
- (BOOL)openFromClick;
- (void)setOpenFromClick:(BOOL)arg0;
- (BOOL)pauseRewardFullLinkTiming;
- (BOOL)isRewardImageDirectLandingPage;
- (BOOL)isRewardImageContactDirectLandingPage;
- (long long)interactionMethod_ads;
- (void)setSession_params:(id)arg0;
- (id)price;
- (BOOL)isPlayable;
- (id)icon;
- (id)init;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void)setExtension:(id)arg0;
- (long long)interactionType;
- (void)setScore:(long long)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (long long)score;
- (id)source;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)setIsPlayable:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)extension;
- (BOOL)isValid;
- (unsigned long long)orientation;
- (long long)rotationAngle;
- (id)initWithCoder:(id)arg0;
- (void)setOrientation:(unsigned long long)arg0;
- (void)setRotationAngle:(long long)arg0;
- (void)setIcon:(id)arg0;
- (id)buttonText;
- (id)phone;
- (void)setSource:(id)arg0;
- (long long)videoDuration;
- (void)setPhone:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)dealloc;
- (void)setRenderType:(long long)arg0;
- (void)setInteractionType:(long long)arg0;
- (id)appInfo;
- (id)playerItem;
- (id)render;
- (void)setPrice:(id)arg0;
- (void)setButtonText:(id)arg0;
- (long long)saveTimestamp;
- (void)setSaveTimestamp:(long long)arg0;
- (id)deepLink;
- (void)setDeepLink:(id)arg0;
- (id)videoUrl;
- (void)setInteractionMethod:(long long)arg0;
- (id)targetURL;
- (long long)countDown;
- (long long)calculationMethod;
- (void)setCalculationMethod:(long long)arg0;
- (id)groupInfo;
- (void)setVideoDuration:(long long)arg0;
- (id)audioInfo;
- (long long)interactionMethod;
- (id)coverImage;
- (void)setTargetURL:(id)arg0;
- (void)setAppInfo:(id)arg0;
- (void)setAudioInfo:(id)arg0;
- (void)setAdDescription:(id)arg0;
- (void)setGroupInfo:(id)arg0;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;
- (double)expireTimestamp;
- (void)setExpireTimestamp:(double)arg0;
- (long long)appSize;

@end
