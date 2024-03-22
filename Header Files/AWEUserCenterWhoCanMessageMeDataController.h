//
//     Generated by private class-dump
//

@class AWEUserCenterWhoCanMessageMeViewModel, NSString, AWEIMChatBlockSettingModel, NSArray;
@protocol AWEUserCenterWhoCanMessageMeUpdateDataDelegate;

@interface AWEUserCenterWhoCanMessageMeDataController : NSObject <AFDSettingSearchDelegate> {
    BOOL _directlyExitPageAfterPopupDismiss;
    id<AWEUserCenterWhoCanMessageMeUpdateDataDelegate> _delegate;
    NSArray *_contentModels;
    NSArray *_sectionHeaderModels;
    AWEUserCenterWhoCanMessageMeViewModel *_blockMessageSettingVM;
    NSString *_enterFrom;
    AWEIMChatBlockSettingModel *_serverModel;
    long long _advancedSectionNumber;
    NSString *_beginningStatus;
    AWEUserCenterWhoCanMessageMeViewModel *_readStatusVM;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) AWEIMChatBlockSettingModel *serverModel;
@property (nonatomic) long long advancedSectionNumber;
@property (copy, nonatomic) NSString *beginningStatus;
@property (retain, nonatomic) AWEUserCenterWhoCanMessageMeViewModel *readStatusVM;
@property (weak, nonatomic) id<AWEUserCenterWhoCanMessageMeUpdateDataDelegate> delegate;
@property (retain, nonatomic) NSArray *contentModels;
@property (retain, nonatomic) NSArray *sectionHeaderModels;
@property (retain, nonatomic) AWEUserCenterWhoCanMessageMeViewModel *blockMessageSettingVM;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL directlyExitPageAfterPopupDismiss;

+ (unsigned long long)itemStatusWithSettingItem:(id)arg0;
+ (id)settingSearchRegisterDic;
+ (id)whoCanMessageMeTitle;
+ (id)offlinePushDetailTitle;
+ (id)supportReadStatusTitle;
+ (BOOL)blockMessageEnable;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setServerModel:(id)arg0;
- (id)serverModel;
- (void)sendRequestToChangeAdvancedSetting:(id /* block */)arg0;
- (void)p_trackClickMessagePrivacy;
- (void)p_recordBeginningSelectValue;
- (void)prepareSectionContentData;
- (void)prepareSectionHeaderData;
- (void)addSectionHeaderWithTitle:(id)arg0 toSectionHeaderModels:(id)arg1;
- (void)setSectionHeaderModels:(id)arg0;
- (void)setAdvancedSectionNumber:(long long)arg0;
- (void)addSwitchesToContentModels:(id)arg0;
- (long long)advancedSectionNumber;
- (void)addOtherSettingToContentModels:(id)arg0;
- (void)addAdvancedSettingToContentModels:(id)arg0;
- (void)setContentModels:(id)arg0;
- (void)addSingleSelectItems:(id)arg0 withModel:(id)arg1;
- (void)addFriendSwitchWithModel:(id)arg0 toSwitchItems:(id)arg1;
- (void)addFollowSwitchWithModel:(id)arg0 toSwitchItems:(id)arg1;
- (void)addMaybeKnowSwitchWithModel:(id)arg0 toSwitchItems:(id)arg1;
- (void)addStrangerSwitchWithModel:(id)arg0 toSwitchItems:(id)arg1;
- (void)addOfflinePushDetailToAdvancedSettingSection:(id)arg0;
- (void)addSupportReadStatusToAdvancedSettingSection:(id)arg0;
- (void)refreshServerModel;
- (void)addChatBlockToAdvancedSettingSection:(id)arg0;
- (void)addChatBlockDurationsToAdvancedSettingSection:(id)arg0;
- (void)addSmartBlockToAdvancedSettingSection:(id)arg0;
- (void)addSelfDefinedBlockWordViewModelToAdvancedSettingSection:(id)arg0;
- (BOOL)everyOneAbleToMessage;
- (void)updateWhoCanMessageMeSingleSelect:(long long)arg0;
- (void)updateWhoCanMessageMe;
- (void)trackMessageBlockButtonClick;
- (void)trackBlockSwitchUpdateWithOldSwitch:(BOOL)arg0 newSwitch:(BOOL)arg1;
- (long long)advancedSection;
- (void)sendRequestToChangeAdvancedSetting:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setBlockMessageSettingVM:(id)arg0;
- (id)blockMessageSettingVM;
- (void)setReadStatusVM:(id)arg0;
- (void)readStatusSwitchDidChangeNotification:(id)arg0;
- (long long)blockDurationInDayFromSecond:(long long)arg0;
- (void)showBlockDurarionActionSheet:(id)arg0;
- (void)trackBlockDurationUpdateWithOldModel:(id)arg0 newModel:(id)arg1;
- (void)p_trackSmartBlockWithUpdateTypeIsAdd:(BOOL)arg0 smartBlockType:(id)arg1;
- (id)selectValueToSwitchValues:(long long)arg0;
- (void)updateSelectedViewModel:(long long)arg0;
- (long long)currentSelectedValue;
- (void)revertSelectValue;
- (void)showErrorToast:(id)arg0;
- (id)contentModels;
- (id)currentSwitchValues;
- (void)revertSwitchValues;
- (id)trackParamFromWhoCanMessageMeModel:(id)arg0;
- (void)setBeginningStatus:(id)arg0;
- (id)beginningStatus;
- (id)p_valueForSwitch:(id)arg0 inCurrentSwitchValues:(id)arg1;
- (void)p_trackBlockDurationUpdate:(long long)arg0;
- (id)readStatusVM;
- (void)trackSwitchValues;
- (void)p_trackSwitchEvents:(BOOL)arg0;
- (id)sectionHeaderModels;
- (BOOL)directlyExitPageAfterPopupDismiss;
- (void)setDirectlyExitPageAfterPopupDismiss:(BOOL)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)prepareData;

@end