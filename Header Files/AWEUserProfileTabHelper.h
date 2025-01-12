//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, AWEProfileContext, NSString, AWEUserModel;

@interface AWEUserProfileTabHelper : HTSService <AWEUserProfileTabHelperProtocol> {
    BOOL _isOtherLikeLock;
    BOOL _collectionTabShow;
    BOOL _draftTabShow;
    BOOL _hiddenPostNum;
    BOOL _enableTabFilter;
    BOOL _isHomePage;
    BOOL _shouldRefreshTab;
    long long _numOfTab;
    NSArray *_tabArray;
    NSArray *_tabTitles;
    NSArray *_orderedTabs;
    AWEUserModel *_user;
    AWEProfileContext *_context;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSMutableDictionary *_tabNameForLogDict;
    NSMutableDictionary *_tabShowNameForLogDict;
    NSArray *_oldTabArray;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isHomePage;
@property (copy, nonatomic) NSArray *orderedTabs;
@property (nonatomic) BOOL shouldRefreshTab;
@property (retain, nonatomic) NSMutableDictionary *tabNameForLogDict;
@property (retain, nonatomic) NSMutableDictionary *tabShowNameForLogDict;
@property (copy, nonatomic) NSArray *oldTabArray;
@property (weak, nonatomic) AWEProfileContext *context;
@property (readonly, nonatomic) long long numOfTab;
@property (readonly, copy, nonatomic) NSArray *tabArray;
@property (readonly, copy, nonatomic) NSArray *tabTitles;
@property (nonatomic) BOOL isOtherLikeLock;
@property (nonatomic) BOOL collectionTabShow;
@property (nonatomic) BOOL draftTabShow;
@property (nonatomic) BOOL hiddenPostNum;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL enableTabFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabHelperWithUser:(id)arg0 isHomePage:(BOOL)arg1;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)tabArray;
- (long long)landingTabType;
- (long long)tabTypeAtIndex:(long long)arg0;
- (id)tabTitles;
- (BOOL)shouldShowCompanyHomepageTab;
- (long long)indexForVCType:(long long)arg0;
- (BOOL)p_isCurrentUser;
- (void)updateUser:(id)arg0 shouldRefreshTab:(BOOL)arg1;
- (id)tabNameForLog:(long long)arg0;
- (long long)numOfTab;
- (void)setShouldRefreshTab:(BOOL)arg0;
- (id)p_likeTabModel;
- (id)p_titleForLikeTab;
- (id)p_selectedTitleForLikeTab;
- (float)eachTabWidth;
- (void)resetTabTitles;
- (BOOL)p_shouldShowLikeTab;
- (BOOL)isOtherLikeLock;
- (void)setIsOtherLikeLock:(BOOL)arg0;
- (BOOL)isHomePage;
- (void)setIsHomePage:(BOOL)arg0;
- (BOOL)shouldRefreshTab;
- (id)tabComponentTypeForLog;
- (id)tabStructModelWithType:(long long)arg0;
- (BOOL)isLikeLock;
- (id)lynxSchemeForLongVideoTab;
- (BOOL)__isVsOfficialAccount;
- (BOOL)hiddenPostNum;
- (void)setHiddenPostNum:(BOOL)arg0;
- (BOOL)shouldShowMixTab;
- (BOOL)shouldShowPlayletTab;
- (BOOL)hasPlayletTabInServerList;
- (id)lynxSchemaForServiceLife;
- (id)lynxSchemaForService;
- (BOOL)shouldShowMusicianLunaTab;
- (BOOL)isFavoriteTabLock;
- (id)tabNameForLogWithType:(long long)arg0;
- (void)setEnableTabFilter:(BOOL)arg0;
- (BOOL)shouldHideTabNum;
- (BOOL)enableTabFilter;
- (id)initWithUser:(id)arg0 isHomePage:(BOOL)arg1 enableTabFilter:(BOOL)arg2;
- (id)lynxSchemeForProductsTab;
- (id)tabShowNameForLog:(long long)arg0;
- (id)processLifeTabParams:(id)arg0;
- (void)trackShowProfileTabAfterEnterHomepage;
- (BOOL)hasTabArrayChanged;
- (BOOL)shouldShowCollectionTab;
- (void)__preActiveGecko;
- (id)__tabInfoListFromServer;
- (id)tabShowNameForLogWithType:(long long)arg0;
- (BOOL)p_shouldShowCompanyHomepageTab;
- (BOOL)p_shouldShowCollectionTab;
- (BOOL)p_shouldShowMixTab;
- (BOOL)p_shouldShowPlayletTab;
- (id)oldTabArray;
- (id)__lifeServiceTabInfoFromServer;
- (id)__serviceTabInfoFromServer;
- (id)__productsTabInfoFromServer;
- (id)__longVideoTabInfoFromServer;
- (BOOL)p_shouldHideTabNum;
- (BOOL)p_shouldShowFullScreenRecommend;
- (BOOL)p_shouldShowMusicTab;
- (BOOL)p_shouldShowEffectTab;
- (BOOL)p_shouldShowEmptyPostRecommendTab;
- (BOOL)p_shouldShowPostWorkTab;
- (BOOL)p_shouldShowBrandTab;
- (BOOL)p_shouldShowAggregationTab;
- (BOOL)p_shouldShowShopSeek;
- (BOOL)p_shouldShowPrivatePostWorkTab;
- (BOOL)p_shouldShowVsProgramTab;
- (BOOL)p_shouldShowOriginalSoundTab;
- (BOOL)p_shouldShowTemplateTab;
- (BOOL)p_shouldShowLifeServiceTab;
- (BOOL)p_shouldShowCloseFriendTab;
- (BOOL)p_shouldShowProductsTab;
- (BOOL)p_shouldShowMentionTab;
- (BOOL)p_shouldShowLongVideoTab;
- (BOOL)p_shouldShowLiveTab;
- (void)setCollectionTabShow:(BOOL)arg0;
- (id)p_musicianTabModel;
- (id)p_postWorkTabModel;
- (id)p_closeFriendTabModel;
- (id)p_privatePostWorkTabModel;
- (id)p_effectArtistModel;
- (id)p_playletModel;
- (id)p_mixModel;
- (id)p_homepageTabModel;
- (id)p_brandTabModel;
- (id)p_aggregationTabModel;
- (id)p_emptyRecommendModel;
- (id)p_vsProgramTabModel;
- (id)p_originalSoundTabModel;
- (id)p_collectionTabModel;
- (id)p_templateTabModel;
- (id)p_lifeServiceTabModel;
- (id)p_shopSeekTabModel;
- (id)p_favoriteFolderTabModel;
- (id)p_productsTabModel;
- (id)p_mentionTabModel;
- (id)p_serviceTabModel;
- (id)p_longVideoTabModel;
- (id)p_familiarRecommendTabModel;
- (id)p_liveTabModel;
- (BOOL)p_shouldShowFavoriteFolderTab;
- (BOOL)collectionTabShow;
- (BOOL)p_shouldShowServiceTab;
- (BOOL)p_shouldShowFamiliarRecommendTab;
- (id)titleForCommonLynxController:(long long)arg0 defaultName:(id)arg1;
- (id)selectedTitleForCommonLynxController:(long long)arg0 defaultName:(id)arg1;
- (id)__orderedTabsFromServer;
- (id)__orderedTabsFromLocal;
- (id)p_titleForPostWorkTab;
- (id)p_shopSeekProfileTab;
- (BOOL)p_isPrivateAccount;
- (id)__mentionTabInfoFromServer;
- (id)__familiarRecommendTabInfoFromServer;
- (id)__liveTabInfoFromServer;
- (id)p_titleForMusicianTab;
- (id)p_titleForPrivatePostWorkTab;
- (id)p_titleForForwardTab;
- (id)p_titleForEffectTab;
- (id)p_titleForPlayletTab;
- (id)p_titleForMixTab;
- (id)p_titleForCompanyHomepage;
- (id)p_titleForAggregationTab;
- (id)p_titleForTemplateTab;
- (id)p_selectedTitleForMusicanTab;
- (id)p_selectedTitleForPostWorkTab;
- (id)p_titleForCloseFriendTab;
- (id)p_selectedTitleForPrivatePostWorkTab;
- (id)p_titleForProductsTab;
- (id)p_titleForBrandHomepage;
- (id)p_selectedTitleForAggregationTab;
- (id)p_selectedTitleForEffectTab;
- (id)p_selectedTitleForPlayletTab;
- (id)p_selectedTitleForMixTab;
- (id)__collectionServiceTabInfoFromServer;
- (id)p_selectedTitleForTemplateTab;
- (id)p_titleForFamiliarRecommendTab;
- (id)p_titleForMediaCommentTab:(id)arg0;
- (id)p_selectedTitleForMediaCommentTab:(id)arg0;
- (id)__profileTabList;
- (BOOL)canShouldShowPrivateTab;
- (BOOL)p_isCloseFriend;
- (id)p_selectedTitleForForwardTab;
- (id)p_selectedTitleForCompanyHomepageTab;
- (BOOL)draftTabShow;
- (void)setDraftTabShow:(BOOL)arg0;
- (id)tabNameForLogDict;
- (void)setTabNameForLogDict:(id)arg0;
- (id)tabShowNameForLogDict;
- (void)setTabShowNameForLogDict:(id)arg0;
- (void)setOldTabArray:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setOrderedTabs:(id)arg0;
- (id)orderedTabs;

@end
