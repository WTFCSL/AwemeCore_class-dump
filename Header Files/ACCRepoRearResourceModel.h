//
//     Generated by private class-dump
//

@class NSArray, NSString, ACCRearMusicModel;

@interface ACCRepoRearResourceModel : NSObject <NSCopying, ACCRepositoryTrackContextDeprecated, ACCRepoRegister, ACCRepoRearResourceData> {
    BOOL _shouldStopLoadWhenfetchMusicError;
    BOOL _isUserSwappedCamera;
    BOOL _autoApplyMusic;
    BOOL _autoApplyProp;
    NSArray *_stickerIDArray;
    NSString *_gradeKey;
    NSString *_propSelectFrom;
    NSString *_propReqId;
    ACCRearMusicModel *_rearMusic;
    NSString *_musicSelectFrom;
    NSString *_musicSelectPageName;
    NSString *_rearMusicID;
    NSArray *_effects;
    NSArray *_bindEffects;
    NSString *_stickerBackgroundImagePath;
}

@property (copy, nonatomic) NSArray *stickerIDArray;
@property (copy, nonatomic) NSString *gradeKey;
@property (copy, nonatomic) NSString *propSelectFrom;
@property (copy, nonatomic) NSString *propReqId;
@property (retain, nonatomic) ACCRearMusicModel *rearMusic;
@property (nonatomic) BOOL shouldStopLoadWhenfetchMusicError;
@property (copy, nonatomic) NSString *musicSelectFrom;
@property (copy, nonatomic) NSString *musicSelectPageName;
@property (copy, nonatomic) NSString *rearMusicID;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *bindEffects;
@property (nonatomic) BOOL isUserSwappedCamera;
@property (copy, nonatomic) NSString *stickerBackgroundImagePath;
@property (nonatomic) BOOL autoApplyMusic;
@property (nonatomic) BOOL autoApplyProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)bindEffects;
- (void)setBindEffects:(id)arg0;
- (id)musicModel;
- (void)setMusicModel:(id)arg0;
- (id)gradeKey;
- (void)setGradeKey:(id)arg0;
- (id)musicSelectFrom;
- (id)propReqId;
- (void)setPropReqId:(id)arg0;
- (id)propSelectFrom;
- (void)setPropSelectFrom:(id)arg0;
- (void)setRearMusicID:(id)arg0;
- (void)setMusicSelectFrom:(id)arg0;
- (void)setAutoApplyMusic:(BOOL)arg0;
- (void)setStickerIDArray:(id)arg0;
- (void)setAutoApplyProp:(BOOL)arg0;
- (void)setStickerBackgroundImagePath:(id)arg0;
- (id)stickerIDArray;
- (void)setShouldStopLoadWhenfetchMusicError:(BOOL)arg0;
- (BOOL)isUserSwappedCamera;
- (void)setRearMusic:(id)arg0;
- (void)setMusicSelectPageName:(id)arg0;
- (void)setIsUserSwappedCamera:(BOOL)arg0;
- (id)rearMusicID;
- (id)rearMusic;
- (id)musicSelectPageName;
- (BOOL)autoApplyMusic;
- (void)resetMusicInfo;
- (BOOL)autoApplyProp;
- (BOOL)shouldStopLoadWhenfetchMusicError;
- (id)stickerIDsStr;
- (id)defaultStickerBackgroundImage;
- (long long)effectNeedCameraActualPosition:(id)arg0;
- (id)stickerBackgroundImagePath;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)effects;
- (void)setEffects:(id)arg0;

@end