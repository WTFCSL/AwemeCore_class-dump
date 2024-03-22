//
//     Generated by private class-dump
//

@class NSString, ACCEditorControlConfigAssembler, ACCCountDownTrackParamsModel;
@protocol ACCPublishRepository;

@interface AWERepoFlowControlModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, NSCopying, ACCRepoFlowControlData, ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated> {
    BOOL _disableBackToTabBar;
    BOOL _hasRecoveredAudioFragments;
    BOOL _showOneTabExclusively;
    BOOL _autoShoot;
    BOOL _isShowingHalfScreenAlbum;
    BOOL _isSpecialPlusButton;
    BOOL _isRecordTabInStream4_3;
    id<ACCPublishRepository> repoDeprecated;
    long long _step;
    long long _videoRecordButtonType;
    NSString *_exclusiveRecordType;
    long long _modeId;
    unsigned long long _LVHasRecoverFlag;
    long long _enterFromType;
    ACCEditorControlConfigAssembler *_flowControlConfigAssembler;
    ACCCountDownTrackParamsModel *_countdownTrackPramas;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long step;
@property (nonatomic) BOOL disableBackToTabBar;
@property (nonatomic) BOOL hasRecoveredAudioFragments;
@property (nonatomic) long long videoRecordButtonType;
@property (nonatomic) BOOL showOneTabExclusively;
@property (copy, nonatomic) NSString *exclusiveRecordType;
@property (readonly, nonatomic) long long exclusiveRecordModeId;
@property (nonatomic) long long modeId;
@property (nonatomic) unsigned long long LVHasRecoverFlag;
@property (nonatomic) long long enterFromType;
@property (nonatomic) BOOL autoShoot;
@property (nonatomic) BOOL isShowingHalfScreenAlbum;
@property (nonatomic) BOOL isSpecialPlusButton;
@property (nonatomic) BOOL isRecordTabInStream4_3;
@property (retain, nonatomic) ACCEditorControlConfigAssembler *flowControlConfigAssembler;
@property (retain, nonatomic) ACCCountDownTrackParamsModel *countdownTrackPramas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (long long)videoRecordButtonType;
- (void)setVideoRecordButtonType:(long long)arg0;
- (id)initWithDraft:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (id)repoDeprecated;
- (void)setRepoDeprecated:(id)arg0;
- (void)setDisableBackToTabBar:(BOOL)arg0;
- (long long)exclusiveRecordModeId;
- (BOOL)showOneTabExclusively;
- (long long)enterFromType;
- (void)setIsSpecialPlusButton:(BOOL)arg0;
- (BOOL)isSpecialPlusButton;
- (id)flowControlConfigAssembler;
- (BOOL)hasRecoveredAudioFragments;
- (BOOL)disableBackToTabBar;
- (void)setEnterFromType:(long long)arg0;
- (BOOL)isRecordTabInStream4_3;
- (void)setIsRecordTabInStream4_3:(BOOL)arg0;
- (void)setAutoShoot:(BOOL)arg0;
- (void)setShowOneTabExclusively:(BOOL)arg0;
- (void)setExclusiveRecordType:(id)arg0;
- (id)exclusiveRecordType;
- (void)setFlowControlConfigAssembler:(id)arg0;
- (unsigned long long)LVHasRecoverFlag;
- (void)setLVHasRecoverFlag:(unsigned long long)arg0;
- (BOOL)isFixedDuration;
- (void)setCountdownTrackPramas:(id)arg0;
- (BOOL)autoShoot;
- (void)cleanCountDownState;
- (id)countdownTrackPramas;
- (id)singleRecordCountDownTrackData;
- (BOOL)isSegment;
- (id)allFragmentsCountDownTrackData;
- (void)setHasRecoveredAudioFragments:(BOOL)arg0;
- (BOOL)isShowingHalfScreenAlbum;
- (void)setIsShowingHalfScreenAlbum:(BOOL)arg0;
- (long long)step;
- (void)setStep:(long long)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)modeId;
- (void)setModeId:(long long)arg0;

@end