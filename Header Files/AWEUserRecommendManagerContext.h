//
//     Generated by private class-dump
//

@class AWEUserRecommendBaseCellViewLayout, NSString, AFDRecUserListExitStrategy, NSAttributedString, AWEListDataController;
@protocol AWERecommendUserDataControllerProtocol;

@interface AWEUserRecommendManagerContext : NSObject <NSCopying> {
    BOOL _needUserExtra;
    BOOL _isConstColor;
    BOOL _showsHeader;
    BOOL _showsHeaderSeparator;
    BOOL _showsCellSeparator;
    BOOL _enableContactModel;
    BOOL _useNewRecommendCountUsers;
    BOOL _preloadsProfileUser;
    BOOL _fullScreenPresentProfile;
    BOOL _enableClose;
    BOOL _disableDislikeSnackBar;
    BOOL _shouldShowAliasAlertAfterFollowContacts;
    BOOL _enableLightInteraction;
    BOOL _enableClickLITransferToSendMsg;
    BOOL _enableShare;
    BOOL _onlyInsertShareCellsAtBottom;
    BOOL _insertShareCellsWhenEmpty;
    BOOL _enableCampaign;
    BOOL _needLoadMore;
    BOOL _usesDefaultFooter;
    BOOL _showsFooterWhenEmpty;
    long long _type;
    NSString *_userID;
    long long _pageCount;
    AWEListDataController<AWERecommendUserDataControllerProtocol> *_dataController;
    NSString *_scene;
    NSString *_followTitleConfigScene;
    NSString *_enterFrom;
    NSString *_previousPage;
    NSString *_showMethod;
    NSString *_requestID;
    NSString *_enterFromTab;
    long long _fromPageType;
    long long _prePageType;
    long long _nextPrePageType;
    long long _fromAction;
    long long _subPageType;
    NSString *_customHeaderTitle;
    AWEUserRecommendBaseCellViewLayout *_cellLayout;
    double _defaultCellHeight;
    long long _contactIndex;
    long long _newRecommendCountSource;
    NSString *_insertedTopUIDs;
    id /* block */ _getUserProfileLogExtraParams;
    long long _countToPermanentlyClose;
    double _daysToReappearAfterClosed;
    NSString *_liteInteractEnterMethod;
    NSString *_liteInteractEnterFrom;
    NSString *_enterPosition;
    long long _placeholderCellCount;
    NSAttributedString *_noMoreDataFooterAttributedText;
    long long _profileEditFlowScene;
    long long _remainingCountToLoadMore;
    AFDRecUserListExitStrategy *_recUserListExitStrategy;
    NSString *_greetAfterFollowScene;
    id /* block */ _highValueSourceFallbackBlock;
    id /* block */ _followButtonConfigureBlock;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long pageCount;
@property (nonatomic) BOOL needUserExtra;
@property (retain, nonatomic) AWEListDataController<AWERecommendUserDataControllerProtocol> *dataController;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *followTitleConfigScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *showMethod;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *enterFromTab;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (nonatomic) long long nextPrePageType;
@property (nonatomic) long long fromAction;
@property (nonatomic) long long subPageType;
@property (nonatomic) BOOL isConstColor;
@property (nonatomic) BOOL showsHeader;
@property (copy, nonatomic) NSString *customHeaderTitle;
@property (nonatomic) BOOL showsHeaderSeparator;
@property (nonatomic) BOOL showsCellSeparator;
@property (retain, nonatomic) AWEUserRecommendBaseCellViewLayout *cellLayout;
@property (nonatomic) double defaultCellHeight;
@property (nonatomic) BOOL enableContactModel;
@property (nonatomic) long long contactIndex;
@property (nonatomic) long long newRecommendCountSource;
@property (nonatomic) BOOL useNewRecommendCountUsers;
@property (copy, nonatomic) NSString *insertedTopUIDs;
@property (nonatomic) BOOL preloadsProfileUser;
@property (copy, nonatomic) id /* block */ getUserProfileLogExtraParams;
@property (nonatomic) BOOL fullScreenPresentProfile;
@property (nonatomic) BOOL enableClose;
@property (nonatomic) long long countToPermanentlyClose;
@property (nonatomic) double daysToReappearAfterClosed;
@property (nonatomic) BOOL disableDislikeSnackBar;
@property (nonatomic) BOOL shouldShowAliasAlertAfterFollowContacts;
@property (retain, nonatomic) NSString *liteInteractEnterMethod;
@property (retain, nonatomic) NSString *liteInteractEnterFrom;
@property (copy, nonatomic) NSString *enterPosition;
@property (nonatomic) BOOL enableLightInteraction;
@property (nonatomic) BOOL enableClickLITransferToSendMsg;
@property (nonatomic) BOOL enableShare;
@property (nonatomic) BOOL onlyInsertShareCellsAtBottom;
@property (nonatomic) BOOL insertShareCellsWhenEmpty;
@property (nonatomic) BOOL enableCampaign;
@property (nonatomic) BOOL needLoadMore;
@property (nonatomic) long long placeholderCellCount;
@property (nonatomic) BOOL usesDefaultFooter;
@property (nonatomic) BOOL showsFooterWhenEmpty;
@property (copy, nonatomic) NSAttributedString *noMoreDataFooterAttributedText;
@property (nonatomic) long long profileEditFlowScene;
@property (nonatomic) long long remainingCountToLoadMore;
@property (retain, nonatomic) AFDRecUserListExitStrategy *recUserListExitStrategy;
@property (retain, nonatomic) NSString *greetAfterFollowScene;
@property (copy, nonatomic) id /* block */ highValueSourceFallbackBlock;
@property (copy, nonatomic) id /* block */ followButtonConfigureBlock;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setDataController:(id)arg0;
- (void)setPrePageType:(long long)arg0;
- (void)setFromPageType:(long long)arg0;
- (void)setFromAction:(long long)arg0;
- (long long)fromPageType;
- (void)setEnableShare:(BOOL)arg0;
- (BOOL)enableShare;
- (id)enterPosition;
- (long long)prePageType;
- (long long)fromAction;
- (void)setEnableClose:(BOOL)arg0;
- (void)setRecUserListExitStrategy:(id)arg0;
- (void)setEnableContactModel:(BOOL)arg0;
- (void)setEnableCampaign:(BOOL)arg0;
- (void)setCountToPermanentlyClose:(long long)arg0;
- (void)setDaysToReappearAfterClosed:(double)arg0;
- (void)setUsesDefaultFooter:(BOOL)arg0;
- (void)setCustomHeaderTitle:(id)arg0;
- (void)setGetUserProfileLogExtraParams:(id /* block */)arg0;
- (void)setIsConstColor:(BOOL)arg0;
- (void)setNeedLoadMore:(BOOL)arg0;
- (BOOL)needLoadMore;
- (BOOL)isConstColor;
- (id)showMethod;
- (void)setShowMethod:(id)arg0;
- (void)setFullScreenPresentProfile:(BOOL)arg0;
- (void)setShouldShowAliasAlertAfterFollowContacts:(BOOL)arg0;
- (void)setLiteInteractEnterMethod:(id)arg0;
- (id)insertedTopUIDs;
- (void)setInsertedTopUIDs:(id)arg0;
- (void)setShowsHeaderSeparator:(BOOL)arg0;
- (void)setNewRecommendCountSource:(long long)arg0;
- (void)setUseNewRecommendCountUsers:(BOOL)arg0;
- (void)setInsertShareCellsWhenEmpty:(BOOL)arg0;
- (void)setContactIndex:(long long)arg0;
- (void)setOnlyInsertShareCellsAtBottom:(BOOL)arg0;
- (BOOL)enableCampaign;
- (void)setShowsFooterWhenEmpty:(BOOL)arg0;
- (void)setLiteInteractEnterFrom:(id)arg0;
- (void)setEnterPosition:(id)arg0;
- (void)setEnterFromTab:(id)arg0;
- (id)enterFromTab;
- (BOOL)enableLightInteraction;
- (BOOL)fullScreenPresentProfile;
- (void)setSubPageType:(long long)arg0;
- (void)setEnableLightInteraction:(BOOL)arg0;
- (void)setFollowTitleConfigScene:(id)arg0;
- (void)setEnableClickLITransferToSendMsg:(BOOL)arg0;
- (void)setDisableDislikeSnackBar:(BOOL)arg0;
- (void)setGreetAfterFollowScene:(id)arg0;
- (void)setNeedUserExtra:(BOOL)arg0;
- (void)setNextPrePageType:(long long)arg0;
- (long long)newRecommendCountSource;
- (BOOL)useNewRecommendCountUsers;
- (BOOL)enableContactModel;
- (long long)contactIndex;
- (BOOL)needUserExtra;
- (BOOL)preloadsProfileUser;
- (void)setPreloadsProfileUser:(BOOL)arg0;
- (id)liteInteractEnterMethod;
- (long long)subPageType;
- (id)liteInteractEnterFrom;
- (void)setProfileEditFlowScene:(long long)arg0;
- (id)noMoreDataFooterAttributedText;
- (void)setDefaultCellHeight:(double)arg0;
- (void)setRemainingCountToLoadMore:(long long)arg0;
- (void)setShowsCellSeparator:(BOOL)arg0;
- (void)setHighValueSourceFallbackBlock:(id /* block */)arg0;
- (BOOL)showsHeaderSeparator;
- (BOOL)enableClose;
- (id)customHeaderTitle;
- (BOOL)showsCellSeparator;
- (BOOL)usesDefaultFooter;
- (BOOL)showsFooterWhenEmpty;
- (BOOL)disableDislikeSnackBar;
- (long long)remainingCountToLoadMore;
- (BOOL)enableClickLITransferToSendMsg;
- (BOOL)insertShareCellsWhenEmpty;
- (BOOL)onlyInsertShareCellsAtBottom;
- (id /* block */)followButtonConfigureBlock;
- (id)followTitleConfigScene;
- (id)recUserListExitStrategy;
- (long long)countToPermanentlyClose;
- (double)daysToReappearAfterClosed;
- (long long)nextPrePageType;
- (id /* block */)getUserProfileLogExtraParams;
- (long long)profileEditFlowScene;
- (id)greetAfterFollowScene;
- (id /* block */)highValueSourceFallbackBlock;
- (BOOL)shouldShowAliasAlertAfterFollowContacts;
- (void)setNoMoreDataFooterAttributedText:(id)arg0;
- (void)setFollowButtonConfigureBlock:(id /* block */)arg0;
- (id)userID;
- (id)init;
- (void)setScene:(id)arg0;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)type;
- (void)setUserID:(id)arg0;
- (void)setPageCount:(long long)arg0;
- (long long)pageCount;
- (void)setType:(long long)arg0;
- (id)scene;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (BOOL)showsHeader;
- (void)setShowsHeader:(BOOL)arg0;
- (id)cellLayout;
- (void)setCellLayout:(id)arg0;
- (double)defaultCellHeight;
- (id)dataController;
- (long long)placeholderCellCount;
- (void)setPlaceholderCellCount:(long long)arg0;

@end