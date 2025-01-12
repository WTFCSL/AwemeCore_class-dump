//
//     Generated by private class-dump
//

@class AWEAIGCAnchorInfoModel, NSString, AWEMusicDetailResponse, AWEMusicMVTemplateModel, AWEDummyMusicDetailModel, NSArray, NSDictionary, AWEMusicModel, NSNumber;

@interface AWEMusicDetailDataContext : NSObject {
    BOOL _isMusicBeatOn;
    BOOL _collected;
    BOOL _fromAwemeMVType;
    BOOL _isCutSameMV;
    BOOL _isMediaTemplate;
    BOOL _isMusicAutoPlay;
    BOOL _collectedStatusChanged;
    BOOL _isCandidateMusic;
    BOOL _hasImageSticker;
    NSString *_processID;
    NSString *_musicID;
    NSString *_groupID;
    NSString *_authorID;
    NSString *_logpbStr;
    NSDictionary *_logPb;
    NSString *_fromAwemeSecAuthorID;
    NSString *_fromAwemeAuthorName;
    NSString *_previousPage;
    unsigned long long _sourceVCType;
    NSString *_level;
    NSString *_enterFromPageString;
    unsigned long long _enterFromPageType;
    NSDictionary *_shootParams;
    NSDictionary *_trackParamDic;
    NSDictionary *_originalSoundParams;
    NSNumber *_videoDuration;
    NSString *_stickers;
    NSString *_interactionStickers;
    NSString *_magic3ComponentId;
    NSString *_magic3Source;
    NSString *_magic3ActivityId;
    NSNumber *_shootSameVideoDuration;
    NSNumber *_clipMusicBeginTime;
    NSString *_searchType;
    NSDictionary *_searchLogPassback;
    NSDictionary *_searchLogParams;
    NSString *_selectedMethod;
    NSString *_referString;
    NSString *_recExtra;
    AWEMusicModel *_model;
    AWEMusicMVTemplateModel *_templateModel;
    AWEMusicDetailResponse *_responseModel;
    AWEMusicDetailResponse *_dummyResponseModel;
    AWEMusicModel *_dummyModel;
    NSString *_awemeMVId;
    long long _templateSource;
    long long _feedAwemeType;
    NSNumber *_autoContinuePlayStartTime;
    NSString *_promoTickerIconType;
    NSString *_enterMethod;
    NSString *_musicTrackParamsJsonString;
    NSString *_awemeContentSource;
    NSString *_memeFlashStickerSchema;
    NSString *_firstCustomId;
    NSString *_customPropTemplateId;
    NSString *_customPropCustomId;
    long long _enterAwemeType;
    NSArray *_effects;
    NSArray *_bindEffects;
    NSString *_rewardNum;
    NSString *_taskID;
    NSString *_taskKey;
    NSString *_taskName;
    NSString *_shootWay;
    AWEDummyMusicDetailModel *_dummyMusicDetailModel;
    NSString *_ttsIdListArrayJsonString;
    NSString *_refTtsIdListArrayJsonString;
    NSString *_voiceModifyIdListArrayJsonString;
    NSString *_refVoiceModifyIdListArrayJsonString;
    NSString *_videoMeta;
    NSNumber *_targetLoudness;
    NSDictionary *_activityMobJSON;
    AWEAIGCAnchorInfoModel *_aigcInfo;
}

@property (copy, nonatomic) NSString *processID;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *logpbStr;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *fromAwemeSecAuthorID;
@property (copy, nonatomic) NSString *fromAwemeAuthorName;
@property (nonatomic) BOOL isMusicBeatOn;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) unsigned long long sourceVCType;
@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *enterFromPageString;
@property (nonatomic) unsigned long long enterFromPageType;
@property (copy, nonatomic) NSDictionary *shootParams;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (copy, nonatomic) NSDictionary *trackParamDic;
@property (copy, nonatomic) NSString *stickers;
@property (copy, nonatomic) NSString *interactionStickers;
@property (copy, nonatomic) NSString *magic3ComponentId;
@property (copy, nonatomic) NSString *magic3Source;
@property (copy, nonatomic) NSString *magic3ActivityId;
@property (retain, nonatomic) NSNumber *shootSameVideoDuration;
@property (retain, nonatomic) NSNumber *clipMusicBeginTime;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSDictionary *searchLogPassback;
@property (copy, nonatomic) NSDictionary *searchLogParams;
@property (copy, nonatomic) NSString *selectedMethod;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEMusicModel *model;
@property (retain, nonatomic) AWEMusicMVTemplateModel *templateModel;
@property (retain, nonatomic) AWEMusicDetailResponse *responseModel;
@property (nonatomic, getter=isCollected) BOOL collected;
@property (nonatomic) BOOL fromAwemeMVType;
@property (copy, nonatomic) NSString *awemeMVId;
@property (nonatomic) BOOL isCutSameMV;
@property (nonatomic) BOOL isMediaTemplate;
@property (nonatomic) long long templateSource;
@property (nonatomic) long long feedAwemeType;
@property (retain, nonatomic) NSString *promoTickerIconType;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *musicTrackParamsJsonString;
@property (retain, nonatomic) NSString *memeFlashStickerSchema;
@property (retain, nonatomic) AWEAIGCAnchorInfoModel *aigcInfo;
@property (copy, nonatomic) NSString *recExtra;
@property (retain, nonatomic) AWEDummyMusicDetailModel *dummyMusicDetailModel;
@property (retain, nonatomic) NSString *videoMeta;
@property (retain, nonatomic) NSNumber *targetLoudness;
@property (retain, nonatomic) NSDictionary *activityMobJSON;
@property (nonatomic) BOOL hasImageSticker;
@property (copy, nonatomic) NSString *ttsIdListArrayJsonString;
@property (copy, nonatomic) NSString *refTtsIdListArrayJsonString;
@property (copy, nonatomic) NSString *voiceModifyIdListArrayJsonString;
@property (copy, nonatomic) NSString *refVoiceModifyIdListArrayJsonString;
@property (readonly, copy, nonatomic) NSDictionary *originalSoundParams;
@property (readonly, nonatomic) AWEMusicDetailResponse *dummyResponseModel;
@property (readonly, nonatomic) AWEMusicModel *dummyModel;
@property (retain, nonatomic) NSNumber *autoContinuePlayStartTime;
@property (nonatomic) BOOL isMusicAutoPlay;
@property (copy, nonatomic) NSString *awemeContentSource;
@property (nonatomic) BOOL collectedStatusChanged;
@property (copy, nonatomic) NSString *firstCustomId;
@property (copy, nonatomic) NSString *customPropTemplateId;
@property (copy, nonatomic) NSString *customPropCustomId;
@property (nonatomic) long long enterAwemeType;
@property (nonatomic) BOOL isCandidateMusic;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *bindEffects;
@property (copy, nonatomic) NSString *rewardNum;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *shootWay;

+ (BOOL)enableMusicDetailOpt;

- (id)referString;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (BOOL)isCollected;
- (id)bindEffects;
- (void)setBindEffects:(id)arg0;
- (void)setShootWay:(id)arg0;
- (id)musicID;
- (id)aigcInfo;
- (BOOL)isMusicBeatOn;
- (void)setInteractionStickers:(id)arg0;
- (id)interactionStickers;
- (void)setCollected:(BOOL)arg0;
- (BOOL)isMediaTemplate;
- (void)setIsMediaTemplate:(BOOL)arg0;
- (id)shootWay;
- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (void)setLogPb:(id)arg0;
- (id)logPb;
- (void)setMusicID:(id)arg0;
- (id)targetLoudness;
- (void)setTargetLoudness:(id)arg0;
- (id)videoMeta;
- (void)setVideoMeta:(id)arg0;
- (BOOL)isCutSameMV;
- (void)setIsMusicBeatOn:(BOOL)arg0;
- (void)setAigcInfo:(id)arg0;
- (id)rewardNum;
- (void)setRewardNum:(id)arg0;
- (id)recExtra;
- (void)setRecExtra:(id)arg0;
- (id)trackParamDic;
- (void)setTrackParamDic:(id)arg0;
- (id)enterFromPageString;
- (id)createTaskInfo;
- (id)activityMobJSON;
- (void)setActivityMobJSON:(id)arg0;
- (id)promoTickerIconType;
- (BOOL)isMusicAutoPlay;
- (BOOL)isCandidateMusic;
- (id)searchLogParams;
- (id)searchLogPassback;
- (void)trackUnavailableWithStatus:(id)arg0;
- (unsigned long long)sourceVCType;
- (BOOL)hasImageSticker;
- (void)setCollectedStatusChanged:(BOOL)arg0;
- (id)createVideoInfo;
- (BOOL)fromAwemeMVType;
- (id)awemeMVId;
- (id)createCommonVideoInfo;
- (id)createCommonMusicInfo;
- (id)memeFlashStickerSchema;
- (id)firstCustomId;
- (id)customPropTemplateId;
- (id)customPropCustomId;
- (long long)feedAwemeType;
- (id)shootSameVideoDuration;
- (id)clipMusicBeginTime;
- (id)autoContinuePlayStartTime;
- (id)ttsIdListArrayJsonString;
- (id)refTtsIdListArrayJsonString;
- (id)voiceModifyIdListArrayJsonString;
- (id)refVoiceModifyIdListArrayJsonString;
- (id)magic3ComponentId;
- (id)magic3Source;
- (id)magic3ActivityId;
- (id)shootParams;
- (long long)enterAwemeType;
- (BOOL)shareToStoryEnvironmentCheckPassed;
- (id)createTemplateCommonParams;
- (void)setLogpbStr:(id)arg0;
- (id)logpbStr;
- (void)setFromAwemeSecAuthorID:(id)arg0;
- (void)setFromAwemeAuthorName:(id)arg0;
- (void)setSourceVCType:(unsigned long long)arg0;
- (void)setEnterFromPageString:(id)arg0;
- (void)setShootParams:(id)arg0;
- (void)setMagic3ComponentId:(id)arg0;
- (void)setMagic3Source:(id)arg0;
- (void)setMagic3ActivityId:(id)arg0;
- (void)setShootSameVideoDuration:(id)arg0;
- (void)setClipMusicBeginTime:(id)arg0;
- (void)setSearchLogPassback:(id)arg0;
- (void)setSearchLogParams:(id)arg0;
- (void)setFromAwemeMVType:(BOOL)arg0;
- (void)setFeedAwemeType:(long long)arg0;
- (void)setAwemeMVId:(id)arg0;
- (void)setIsCutSameMV:(BOOL)arg0;
- (void)setAwemeContentSource:(id)arg0;
- (void)setFirstCustomId:(id)arg0;
- (void)setCustomPropTemplateId:(id)arg0;
- (void)setCustomPropCustomId:(id)arg0;
- (void)setPromoTickerIconType:(id)arg0;
- (void)setEnterAwemeType:(long long)arg0;
- (void)setMemeFlashStickerSchema:(id)arg0;
- (void)setMusicTrackParamsJsonString:(id)arg0;
- (void)setIsCandidateMusic:(BOOL)arg0;
- (void)setDummyMusicDetailModel:(id)arg0;
- (id)dummyMusicDetailModel;
- (void)setTtsIdListArrayJsonString:(id)arg0;
- (void)setRefTtsIdListArrayJsonString:(id)arg0;
- (void)setVoiceModifyIdListArrayJsonString:(id)arg0;
- (void)setRefVoiceModifyIdListArrayJsonString:(id)arg0;
- (void)setHasImageSticker:(BOOL)arg0;
- (BOOL)p_AEDScoreCheckPassed;
- (id)commonTrackInfo;
- (unsigned long long)enterFromPageType;
- (id)fromAwemeSecAuthorID;
- (id)fromAwemeAuthorName;
- (void)setEnterFromPageType:(unsigned long long)arg0;
- (id)originalSoundParams;
- (id)dummyResponseModel;
- (id)dummyModel;
- (void)setAutoContinuePlayStartTime:(id)arg0;
- (void)setIsMusicAutoPlay:(BOOL)arg0;
- (id)musicTrackParamsJsonString;
- (id)awemeContentSource;
- (BOOL)collectedStatusChanged;
- (void)setLevel:(id)arg0;
- (void)setGroupID:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setSearchType:(id)arg0;
- (id)searchType;
- (id)init;
- (id)groupID;
- (id)level;
- (void).cxx_destruct;
- (id)processID;
- (void)setProcessID:(id)arg0;
- (id)model;
- (id)taskID;
- (id)effects;
- (void)setTaskID:(id)arg0;
- (id)taskName;
- (id)videoDuration;
- (void)setTaskName:(id)arg0;
- (void)setEffects:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)selectedMethod;
- (void)setSelectedMethod:(id)arg0;
- (void)setVideoDuration:(id)arg0;
- (id)stickers;
- (id)responseModel;
- (void)setResponseModel:(id)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;
- (void)setStickers:(id)arg0;
- (long long)templateSource;
- (void)setTemplateSource:(long long)arg0;

@end
