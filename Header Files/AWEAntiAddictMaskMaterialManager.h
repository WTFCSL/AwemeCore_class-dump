//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, AWEAwemeModel, AWEAntiAddictFeedInsertedModel, NSString;

@interface AWEAntiAddictMaskMaterialManager : NSObject <AWEUserMessage, AWEAntiAddictionInfoModelUpdateMessage, AWEAntiAddictMaskMaterialManagerProtocol> {
    BOOL _isCacheAvaliable;
    AWEAwemeModel *_restSelectedAwemeModel;
    AWEAwemeModel *_sleepSelectedAwemeModel;
    NSArray *_awemeModelArray;
    NSArray *_activityAwemeModelArray;
    NSDictionary *_replacedItemIdMap;
    AWEAntiAddictFeedInsertedModel *_feedInsertedModel;
    NSArray *_sampleRelaxDayMaterials;
    NSArray *_sampleRelaxNightMaterials;
    NSArray *_sampleSleepMaterials;
    NSArray *_sampleBlockMaterials;
    NSArray *_sampleBlockNightMaterials;
}

@property (retain) AWEAwemeModel *restSelectedAwemeModel;
@property (retain) AWEAwemeModel *sleepSelectedAwemeModel;
@property (retain) NSArray *awemeModelArray;
@property (retain) NSArray *activityAwemeModelArray;
@property (copy) NSDictionary *replacedItemIdMap;
@property (retain, nonatomic) AWEAntiAddictFeedInsertedModel *feedInsertedModel;
@property (retain) NSArray *sampleRelaxDayMaterials;
@property (retain) NSArray *sampleRelaxNightMaterials;
@property (retain) NSArray *sampleSleepMaterials;
@property (retain) NSArray *sampleBlockMaterials;
@property (retain) NSArray *sampleBlockNightMaterials;
@property (nonatomic) BOOL isCacheAvaliable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (BOOL)shouldFetchVideo;
- (void)loadAntiAddictMaskAwemoModels:(id /* block */)arg0;
- (id)getUserSelectedAntiAddictVideoInfo:(unsigned long long)arg0;
- (void)clearUserSelectedAntiAddictVideoInfo:(unsigned long long)arg0;
- (void)setIsCacheAvaliable:(BOOL)arg0;
- (void)setAwemeModelArray:(id)arg0;
- (void)setActivityAwemeModelArray:(id)arg0;
- (id)antiAddictUserRelatedRestMaskModelKey;
- (void)setRestSelectedAwemeModel:(id)arg0;
- (id)antiAddictUserRelatedSleepMaskModelKey;
- (void)setSleepSelectedAwemeModel:(id)arg0;
- (id)antiAddictUserRelatedReplacedModelKey;
- (void)setReplacedItemIdMap:(id)arg0;
- (void)didUpdateAntiAddictionInfoModel:(BOOL)arg0 currentModel:(id)arg1;
- (void)handleAntiAddictEnterNotification:(id)arg0;
- (id)itemIDStorageKeyForType:(unsigned long long)arg0 dayOrNight:(long long)arg1;
- (BOOL)isCacheAvaliable;
- (id)awemeModelArray;
- (void)clearRestSelectedAwemeModel;
- (void)clearSleepSelectedAwemeModel;
- (void)updateSampleMaterials;
- (id)sampleRelaxDayMaterials;
- (id)sampleRelaxNightMaterials;
- (id)sampleSleepMaterials;
- (id)sampleBlockMaterials;
- (id)sampleBlockNightMaterials;
- (BOOL)isMatchFilterVideo:(id)arg0;
- (id)activityAwemeModelArray;
- (id)restSelectedAwemeModel;
- (id)sleepSelectedAwemeModel;
- (id)getRandomActivity:(unsigned long long)arg0 dayOrNight:(long long)arg1;
- (id)getModelMatchSetting:(id)arg0 itemID:(id)arg1;
- (id)getRandomServerMaterial:(unsigned long long)arg0 dayOrNight:(long long)arg1;
- (void)updateCurrentFeedInsertedAddicateInfoModel:(unsigned long long)arg0 model:(id)arg1 remindVideoInfoModel:(id)arg2 activityInfoModel:(id)arg3;
- (void)setFeedInsertedModel:(id)arg0;
- (id)feedInsertedModel;
- (BOOL)isEfficientActionBtn:(id)arg0 jumpUrl:(id)arg1;
- (id)getAntiAddictNormalMaskVideoInfoModel;
- (BOOL)isValidAntiAddictCustomRemindType:(unsigned long long)arg0;
- (id)replacedItemIdMap;
- (void)updateReplacedItemIds:(id)arg0 antiAddictMaskType:(unsigned long long)arg1;
- (void)clearVideoCacheIfNeedWithModel:(id)arg0;
- (void)setSampleRelaxDayMaterials:(id)arg0;
- (void)setSampleRelaxNightMaterials:(id)arg0;
- (void)setSampleSleepMaterials:(id)arg0;
- (void)setSampleBlockMaterials:(id)arg0;
- (void)setSampleBlockNightMaterials:(id)arg0;
- (id)downsampleArray:(id)arg0 toCount:(unsigned long long)arg1;
- (BOOL)shouldClearActivityVideoCache:(id)arg0;
- (void)clearActivityAwemeModel;
- (BOOL)shouldClearOfficialVideoCache:(id)arg0;
- (void)clearofficialAwemeModel;
- (BOOL)isConfigIds:(id)arg0 containsCacheIds:(id)arg1;
- (id)getAidForInfoModel:(id)arg0;
- (void)clearAntiAddictInfo;
- (id)storageKeyWithCurrentUid;
- (id)antiAddictMaskModelWithType:(unsigned long long)arg0 countDownTime:(double)arg1 blockToTime:(double)arg2 showLastMaterial:(BOOL)arg3;
- (id)antiAddictViewConfirmBtnTitle;
- (id)antiAddictViewConfirmBtnJumpUrl;
- (id)activityMaterialList;
- (id)restDayMaterialList;
- (id)restNightMaterialList;
- (id)sleepMaterialList;
- (id)blockMaterialList;
- (void)showVideoReplaceToastIfNeed:(unsigned long long)arg0 itemID:(id)arg1;
- (id)getInsertAntiAddictParamsForTrack;
- (id)init;
- (void).cxx_destruct;
- (void)setup;

@end