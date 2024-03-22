//
//     Generated by private class-dump
//

@class NSString, NSArray, LVTemplateDataManager, NLEModel_OC;
@protocol ACCPublishRepository, ACCMVTemplateModelProtocol;

@interface AWERepoCutSameModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, NSCopying, AWERepoCutSameData, ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated> {
    BOOL _isNLECutSame;
    BOOL _oneClickFilmingTemplateChanged;
    BOOL _isMusicBeatTemplate;
    id<ACCPublishRepository> repoDeprecated;
    NSArray *_cutSameEditedTexts;
    long long _accTemplateType;
    id<ACCMVTemplateModelProtocol> _templateModel;
    NSString *_cutSameMusicID;
    NSString *_cutSameId;
    NSString *_cutSameLokiId;
    NSArray *_cutSameChallengeIDs;
    NSArray *_cutSameChallengeNames;
    NSArray *_sourceMedia;
    long long _templateSource;
    NLEModel_OC *_cutSameNLEModel;
    NSArray *_templatesArray;
    unsigned long long _currentSelectIndex;
    NSArray *_currentTemplateAssets;
    LVTemplateDataManager *_dataManager;
    double _cutsameOriginVoiceVolume;
    NSString *_originSmartMVMusicID;
    NSString *_oneClickFilmingImprID;
    NSString *_oneClickFilmingMeta;
    NSString *_musicBeatTemplateSyncType;
    long long _musicBeatTemplateSyncDuration;
    long long _musicBeatTemplateMaterialCnt;
    long long _musicBeatTemplateMaterialUse;
    long long _musicBeatTemplateDurationUse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *cutSameEditedTexts;
@property (nonatomic) long long accTemplateType;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (copy, nonatomic) NSString *cutSameMusicID;
@property (copy, nonatomic) NSString *cutSameId;
@property (copy, nonatomic) NSString *cutSameLokiId;
@property (copy, nonatomic) NSArray *cutSameChallengeIDs;
@property (copy, nonatomic) NSArray *cutSameChallengeNames;
@property (retain, nonatomic) NSArray *sourceMedia;
@property (nonatomic) long long templateSource;
@property (retain, nonatomic) NLEModel_OC *cutSameNLEModel;
@property (retain, nonatomic) NSArray *templatesArray;
@property (nonatomic) unsigned long long currentSelectIndex;
@property (retain, nonatomic) NSArray *currentTemplateAssets;
@property (retain, nonatomic) LVTemplateDataManager *dataManager;
@property (nonatomic) BOOL isNLECutSame;
@property (nonatomic) double cutsameOriginVoiceVolume;
@property (copy, nonatomic) NSString *originSmartMVMusicID;
@property (copy, nonatomic) NSString *oneClickFilmingImprID;
@property (nonatomic) BOOL oneClickFilmingTemplateChanged;
@property (copy, nonatomic) NSString *oneClickFilmingMeta;
@property (nonatomic) BOOL isMusicBeatTemplate;
@property (copy, nonatomic) NSString *musicBeatTemplateSyncType;
@property (nonatomic) long long musicBeatTemplateSyncDuration;
@property (nonatomic) long long musicBeatTemplateMaterialCnt;
@property (nonatomic) long long musicBeatTemplateMaterialUse;
@property (nonatomic) long long musicBeatTemplateDurationUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)cutSameId;
- (void)setCutSameId:(id)arg0;
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
- (unsigned long long)currentSelectIndex;
- (BOOL)isCutSame;
- (id)initWithDraft:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (id)repoDeprecated;
- (void)setRepoDeprecated:(id)arg0;
- (void)setAccTemplateType:(long long)arg0;
- (void)setCutSameMusicID:(id)arg0;
- (BOOL)isClassicalMV;
- (id)cutSameChallengeIDs;
- (BOOL)isNewCutSameOrSmartFilming;
- (id)smartVideoAdditionParamsForPublishTrack;
- (id)musicBeatTemplateTrackInfo;
- (void)setCurrentSelectIndex:(unsigned long long)arg0;
- (BOOL)isNLECutSame;
- (long long)accTemplateType;
- (void)setOneClickFilmingImprID:(id)arg0;
- (void)setCurrentTemplateAssets:(id)arg0;
- (id)cutSameNLEModel;
- (id)templatesArray;
- (void)setTemplatesArray:(id)arg0;
- (id)currentTemplateAssets;
- (void)setCutSameEditedTexts:(id)arg0;
- (void)setIsNLECutSame:(BOOL)arg0;
- (void)setCutSameChallengeIDs:(id)arg0;
- (void)setCutSameNLEModel:(id)arg0;
- (id)preferVideoSize;
- (id)smartVideoAdditonParamsForTrack;
- (void)setCutSameChallengeNames:(id)arg0;
- (void)setCutsameOriginVoiceVolume:(double)arg0;
- (void)setSourceMedia:(id)arg0;
- (id)originSmartMVMusicID;
- (void)setOriginSmartMVMusicID:(id)arg0;
- (id)oneClickFilmingImprID;
- (id)cutSameEditedTexts;
- (id)cutSameMusicID;
- (id)cutSameChallengeNames;
- (double)cutsameOriginVoiceVolume;
- (id)sourceMedia;
- (BOOL)isSmartFilming;
- (double)originRatio;
- (BOOL)canTransferToCutSame;
- (id)p_contentTypeForSmartVideoWithType:(long long)arg0;
- (id)dataManager;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setDataManager:(id)arg0;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;
- (long long)templateSource;
- (void)setTemplateSource:(long long)arg0;

@end
