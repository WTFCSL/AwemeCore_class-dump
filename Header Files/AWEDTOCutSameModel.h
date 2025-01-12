//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEDTOCutSameModel : MTLModel <MTLJSONSerializing> {
    BOOL _isH5;
    BOOL _isNleCutsame;
    BOOL _oneClickFilmingTemplateChanged;
    BOOL _isMusicBeatTemplate;
    NSArray *_editTexts;
    long long _templateType;
    NSString *_musicId;
    NSString *_cutSameId;
    NSArray *_srcVideoDataList;
    NSString *_concatFilePath;
    NSString *_openPlatformKey;
    NSString *_openPlatformShareId;
    NSArray *_challengeIdList;
    NSArray *_challengeNameList;
    double _originVoiceVolume;
    long long _templateSource;
    NSString *_oneClickFilmingMeta;
    NSString *_musicBeatTemplateSyncType;
    long long _musicBeatTemplateSyncDuration;
    long long _musicBeatTemplateMaterialCnt;
    long long _musicBeatTemplateMaterialUse;
    long long _musicBeatTemplateDurationUse;
    NSString *_cutSameLokiId;
}

@property (copy, nonatomic) NSArray *editTexts;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *cutSameId;
@property (copy, nonatomic) NSArray *srcVideoDataList;
@property (copy, nonatomic) NSString *concatFilePath;
@property (nonatomic) BOOL isH5;
@property (copy, nonatomic) NSString *openPlatformKey;
@property (copy, nonatomic) NSString *openPlatformShareId;
@property (nonatomic) BOOL isNleCutsame;
@property (copy, nonatomic) NSArray *challengeIdList;
@property (copy, nonatomic) NSArray *challengeNameList;
@property (nonatomic) double originVoiceVolume;
@property (nonatomic) long long templateSource;
@property (nonatomic) BOOL oneClickFilmingTemplateChanged;
@property (copy, nonatomic) NSString *oneClickFilmingMeta;
@property (nonatomic) BOOL isMusicBeatTemplate;
@property (copy, nonatomic) NSString *musicBeatTemplateSyncType;
@property (nonatomic) long long musicBeatTemplateSyncDuration;
@property (nonatomic) long long musicBeatTemplateMaterialCnt;
@property (nonatomic) long long musicBeatTemplateMaterialUse;
@property (nonatomic) long long musicBeatTemplateDurationUse;
@property (copy, nonatomic) NSString *cutSameLokiId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)srcVideoDataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setMusicId:(id)arg0;
- (id)musicId;
- (BOOL)isH5;
- (id)editTexts;
- (void)setEditTexts:(id)arg0;
- (id)cutSameId;
- (void)setCutSameId:(id)arg0;
- (id)srcVideoDataList;
- (void)setSrcVideoDataList:(id)arg0;
- (id)concatFilePath;
- (void)setConcatFilePath:(id)arg0;
- (void)setIsH5:(BOOL)arg0;
- (id)openPlatformKey;
- (void)setOpenPlatformKey:(id)arg0;
- (id)openPlatformShareId;
- (void)setOpenPlatformShareId:(id)arg0;
- (BOOL)isNleCutsame;
- (void)setIsNleCutsame:(BOOL)arg0;
- (id)challengeIdList;
- (void)setChallengeIdList:(id)arg0;
- (id)challengeNameList;
- (void)setChallengeNameList:(id)arg0;
- (double)originVoiceVolume;
- (void)setOriginVoiceVolume:(double)arg0;
- (BOOL)oneClickFilmingTemplateChanged;
- (void)setOneClickFilmingTemplateChanged:(BOOL)arg0;
- (id)oneClickFilmingMeta;
- (void)setOneClickFilmingMeta:(id)arg0;
- (BOOL)isMusicBeatTemplate;
- (void)setIsMusicBeatTemplate:(BOOL)arg0;
- (id)musicBeatTemplateSyncType;
- (void)setMusicBeatTemplateSyncType:(id)arg0;
- (long long)musicBeatTemplateSyncDuration;
- (void)setMusicBeatTemplateSyncDuration:(long long)arg0;
- (long long)musicBeatTemplateMaterialCnt;
- (void)setMusicBeatTemplateMaterialCnt:(long long)arg0;
- (long long)musicBeatTemplateMaterialUse;
- (void)setMusicBeatTemplateMaterialUse:(long long)arg0;
- (long long)musicBeatTemplateDurationUse;
- (void)setMusicBeatTemplateDurationUse:(long long)arg0;
- (id)cutSameLokiId;
- (void)setCutSameLokiId:(id)arg0;
- (void).cxx_destruct;
- (void)setTemplateType:(long long)arg0;
- (long long)templateType;
- (long long)templateSource;
- (void)setTemplateSource:(long long)arg0;

@end
