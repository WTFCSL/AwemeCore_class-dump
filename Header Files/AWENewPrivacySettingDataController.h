//
//     Generated by private class-dump
//

@class NSError, NSMutableArray, NSString;
@protocol AWENewPrivacySettingDataControllerDelegate;

@interface AWENewPrivacySettingDataController : NSObject {
    BOOL _isUserPrivate;
    BOOL _shouldShowHideMyPostList;
    BOOL _shouldShowHideHerPostList;
    BOOL _needUseCardUI;
    NSString *_enterFrom;
    id<AWENewPrivacySettingDataControllerDelegate> _delegate;
    NSMutableArray *_dataArray;
    long long _sourceType;
    long long _recentlyDislikeRecommendFriendsCount;
    NSError *_oneKeyGuardError;
    NSError *_error;
    NSMutableArray *_relationAndAccountArray;
}

@property (nonatomic) BOOL shouldShowHideMyPostList;
@property (nonatomic) BOOL shouldShowHideHerPostList;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL needUseCardUI;
@property (retain, nonatomic) NSMutableArray *relationAndAccountArray;
@property (retain, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWENewPrivacySettingDataControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long recentlyDislikeRecommendFriendsCount;
@property (nonatomic) BOOL isUserPrivate;
@property (retain, nonatomic) NSError *oneKeyGuardError;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEUserCenterModuleServiceCommonAdaperClass;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)aAWEPadModuleAdapter;
- (void)p_addModel:(id)arg0 intoArray:(id)arg1;
- (void)setNeedUseCardUI:(BOOL)arg0;
- (BOOL)needUseCardUI;
- (id)aAWEUserCenterModuleServiceCommonAdaper;
- (void)setIsUserPrivate:(BOOL)arg0;
- (void)setShouldShowHideMyPostList:(BOOL)arg0;
- (void)setShouldShowHideHerPostList:(BOOL)arg0;
- (void)addOneKeyGuardToArray:(id)arg0;
- (id)oneKeyGuardSelectTip;
- (void)p_trackCellSelected:(id)arg0;
- (id)oneKeyGuardError;
- (void)p_addFindMyWaySettingToArray:(id)arg0;
- (void)p_addFollowerVisibilitySetting:(id)arg0;
- (BOOL)p_shouldShowHighValueFansSwitchSetting;
- (void)p_addHighValueFansLabelSetting:(id)arg0;
- (void)p_addLeaveMessageSettingToArray:(id)arg0;
- (void)p_addLessRecommendToMeSetting:(id)arg0;
- (void)p_addRecentlyRemovedFollowCardSettingToArray:(id)arg0;
- (BOOL)shouldShowHideHerPostList;
- (void)p_addHideHerPostSetting:(id)arg0;
- (BOOL)shouldShowHideMyPostList;
- (void)p_addHideMyPostSetting:(id)arg0;
- (void)p_addBlockListSetting:(id)arg0;
- (void)p_addPrivateAccountSettingToArray:(id)arg0;
- (void)p_addFollowRequstAutoPassSettingToArray:(id)arg0;
- (void)p_addAutoFollowBackSettingToArray:(id)arg0;
- (id)setupRelationAndAccountArray;
- (id)p_transferToAWESettingItemModel:(id)arg0;
- (void)setRecentlyDislikeRecommendFriendsCount:(long long)arg0;
- (BOOL)isUserPrivate;
- (void)p_showFollowRequestAutoPassAlert;
- (void)p_showAutoFollowBackAlertWithToggleBlock:(id /* block */)arg0;
- (void)p_addLoadingViewToVC;
- (void)p_removeLoadingViewFromVC;
- (void)fetchBlockAndHideUsersCount:(id /* block */)arg0 onError:(id /* block */)arg1;
- (void)p_showLessRecommendToMeSettingAlert:(id)arg0;
- (long long)recentlyDislikeRecommendFriendsCount;
- (void)p_showFollowerVisibilitySettingAlert:(id)arg0;
- (id)p_settingModel:(id)arg0 withIndex:(long long)arg1 isSelected:(BOOL)arg2;
- (void)p_trackFollowAndFanSelect:(id)arg0 to_status:(id)arg1;
- (id)p_findSameModelFromRealyDataSourceWithModel:(id)arg0;
- (void)p_trackGamePrivacy:(long long)arg0 toStatus:(long long)arg1;
- (id)gamePrivacyVisibleText:(long long)arg0;
- (id)p_settingModel:(id)arg0 isSelected:(BOOL)arg1;
- (id)p_privacyStyleHalfScreenViewController;
- (id)p_settingModel:(id)arg0 isSelected:(BOOL)arg1 type:(long long)arg2 subTitle:(id)arg3;
- (id)p_actionSheetForViewcontroller:(id)arg0 header:(id)arg1 index:(long long)arg2 option:(id)arg3 useCardUIStyle:(BOOL)arg4;
- (long long)p_uniqueStringToType:(id)arg0;
- (id)convertGamePrivacyPermissionForTrack:(long long)arg0;
- (id)setupQuickSettingArray;
- (id)setupRelationAndAccountArrayTransferToSettingItemModel;
- (void)showGamePrivacySettingAlert:(id)arg0;
- (void)setOneKeyGuardError:(id)arg0;
- (id)relationAndAccountArray;
- (void)setRelationAndAccountArray:(id)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setError:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)error;
- (id)dataArray;
- (void)setDataArray:(id)arg0;

@end
