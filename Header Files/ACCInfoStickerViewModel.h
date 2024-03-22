//
//     Generated by private class-dump
//

@class NSMutableDictionary, RACSubject, RACSignal, AWEVideoPublishViewModel, ACCAnimatedDateStickerViewModel, NSString;
@protocol ACCModelFactoryServiceProtocol;

@interface ACCInfoStickerViewModel : NSObject <ACCInfoStickerServiceProtocol> {
    AWEVideoPublishViewModel *_repository;
    id<ACCModelFactoryServiceProtocol> _factoryService;
    NSMutableDictionary *_cacheStickerChallengeNameDict;
    ACCAnimatedDateStickerViewModel *_dateStickerViewModel;
    RACSubject *_addStickerFinishedSubject;
    RACSubject *_updateCurrentBindChallengesSubject;
    RACSubject *_didAppliedInfoStickerSubject;
}

@property (retain, nonatomic) RACSubject *addStickerFinishedSubject;
@property (retain, nonatomic) RACSubject *updateCurrentBindChallengesSubject;
@property (retain, nonatomic) RACSubject *didAppliedInfoStickerSubject;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCModelFactoryServiceProtocol> factoryService;
@property (retain, nonatomic) NSMutableDictionary *cacheStickerChallengeNameDict;
@property (retain, nonatomic) ACCAnimatedDateStickerViewModel *dateStickerViewModel;
@property (readonly, nonatomic) RACSignal *addStickerFinishedSignal;
@property (readonly, nonatomic) RACSignal *updateCurrentBindChallengesSignal;
@property (readonly, nonatomic) RACSignal *didAppliedInfoStickerSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updateCurrentBindChallengesSignal;
- (id)currentBindChallenges;
- (void)sendUpdateCurrentBindChallengesSignal:(id)arg0 moduleKey:(id)arg1;
- (id)cacheStickerChallengeNameDict;
- (id)addStickerFinishedSignal;
- (id)didAppliedInfoStickerSignal;
- (void)setDateStickerViewModel:(id)arg0;
- (id)dateStickerViewModel;
- (id)factoryService;
- (void)setFactoryService:(id)arg0;
- (void)fillChallengeDetailWithChallenge:(id)arg0;
- (void)finishAddingStickerWithContext:(id)arg0;
- (void)configChallengeInfo:(id)arg0;
- (void)didAppliedInfoSticker:(long long)arg0;
- (void)addRecentlyUsedSticker:(id)arg0;
- (void)addRecentlyUsedThirdPartySticker:(id)arg0;
- (id)addStickerFinishedSubject;
- (id)didAppliedInfoStickerSubject;
- (id)updateCurrentBindChallengesSubject;
- (void)setCacheStickerChallengeNameDict:(id)arg0;
- (void)setAddStickerFinishedSubject:(id)arg0;
- (void)setUpdateCurrentBindChallengesSubject:(id)arg0;
- (void)setDidAppliedInfoStickerSubject:(id)arg0;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)dealloc;

@end