//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEUILoadingView, AWEHalfScreenBaseViewController;

@interface AWELiveSettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    BOOL _isRequesting;
    BOOL _gamecpPropDataAuthorized;
    NSArray *_sectionDataArray;
    AWEHalfScreenBaseViewController *_linkmicDistributionActionSheet;
    AWEHalfScreenBaseViewController *_linkmicDistributionRulPageActionSheet;
    AWEUILoadingView *_loadingView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEHalfScreenBaseViewController *linkmicDistributionActionSheet;
@property (retain, nonatomic) AWEHalfScreenBaseViewController *linkmicDistributionRulPageActionSheet;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL gamecpPropDataAuthorized;

+ (unsigned long long)itemStatusWithSettingItem:(id)arg0;
+ (Class)aAWEUserCenterModuleServiceCommonAdaperClass;
+ (id)settingSearchRegisterDic;
+ (BOOL)disableGameCPPropAuth;

- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)p_refreshUI;
- (void)changeUserSettingsWithParam:(id)arg0 completion:(id /* block */)arg1;
- (id)aAWEUserCenterModuleServiceCommonAdaper;
- (void)p_addLoadingViewToVC;
- (void)p_removeLoadingViewFromVC;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)arg0;
- (void)tapLinkmicDistributionOptionCell;
- (void)tapEnableRecommendFollowSeenLiveCell;
- (void)tapEnableRecommendBoughtGoodsCell:(id)arg0;
- (void)tapEnableProtectOrderPhoneNumberCell;
- (void)tapEnableGameCPPropAuthCell;
- (void)p_updateRecommandLiveUI;
- (void)p_updateRecommandGoodsUI;
- (void)p_fetchPropDataAuthStatus;
- (id)linkmicDistributionActionSheet;
- (void)setLinkmicDistributionActionSheet:(id)arg0;
- (void)setLinkmicDistributionRulPageActionSheet:(id)arg0;
- (id)linkmicDistributionRulPageActionSheet;
- (BOOL)gamecpPropDataAuthorized;
- (void)setGamecpPropDataAuthorized:(BOOL)arg0;
- (void)p_updateGameCPPropAuthUIWithStatus:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
