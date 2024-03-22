//
//     Generated by private class-dump
//

@class AFDCloseFriendsMomentFeedDataController, NSArray, NSString, AFDCloseFriendsMomentModel, NSError, NSObject, NSMutableArray;
@protocol AFDCloseFriendsRecommendManagerProtocol, ACFMomentDisplayDelegate;

@interface AFDCloseFriendsMomentFeedViewModel : NSObject <AWEUserMessage, AFDCloseFriendsRecInsertStrategyDataSource, AWEIMMessageUpateMessage> {
    BOOL _hasMore;
    BOOL _shouldReloadUserList;
    BOOL _hasLoadedFetchedData;
    NSArray *_closeFriendsList;
    NSArray *_clearMomentList;
    AFDCloseFriendsMomentFeedDataController *_currentDataController;
    AFDCloseFriendsMomentFeedDataController *_personalHomepageDataController;
    long long _dataState;
    NSError *_error;
    long long _currentIndex;
    NSObject<AFDCloseFriendsRecommendManagerProtocol> *_recommendManager;
    AFDCloseFriendsMomentModel *_nextLandingMomentModel;
    id<ACFMomentDisplayDelegate> _displayDelegate;
    NSArray *_modelsArray;
    AFDCloseFriendsMomentFeedDataController *_defaultDataController;
    AFDCloseFriendsMomentModel *_currentExchangeModel;
    struct CGPoint { double x; double y; } _currentContentOffset;
}

@property (retain, nonatomic) AFDCloseFriendsMomentFeedDataController *currentDataController;
@property (retain, nonatomic) AFDCloseFriendsMomentFeedDataController *defaultDataController;
@property (retain, nonatomic) AFDCloseFriendsMomentFeedDataController *personalHomepageDataController;
@property (nonatomic) long long dataState;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<AFDCloseFriendsRecommendManagerProtocol> *recommendManager;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *nextLandingMomentModel;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *currentExchangeModel;
@property (readonly, nonatomic) NSArray *momentList;
@property (readonly, nonatomic) NSArray *closeFriendsList;
@property (retain, nonatomic) NSArray *clearMomentList;
@property (readonly, nonatomic) BOOL shouldReloadUserList;
@property (readonly, nonatomic) BOOL hasLoadedFetchedData;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } currentContentOffset;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) id<ACFMomentDisplayDelegate> displayDelegate;
@property (copy, nonatomic) NSArray *modelsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) NSMutableArray *momentData;

- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)setDataState:(long long)arg0;
- (id)modelsArray;
- (void)setModelsArray:(id)arg0;
- (void)updateModelsArray;
- (id)momentList;
- (void)loadMore;
- (id)recommendManager;
- (void)setRecommendManager:(id)arg0;
- (id)clearMomentList;
- (long long)convertToTotalMomentListIndexWith:(long long)arg0;
- (void)insertMomentModel:(id)arg0;
- (void)deleteMomentModel:(id)arg0;
- (id)removeMomentModel:(id)arg0;
- (id)getIndexPathForPublishModelIfNeeded:(id)arg0;
- (id)currentDataController;
- (void)updateClearMomentList;
- (void)reportMomentReadStats:(id)arg0;
- (BOOL)deleteMomentsForUserId:(id)arg0 conditionBlock:(id /* block */)arg1 currentModel:(id)arg2 completion:(id /* block */)arg3;
- (void)saveNextLandingMomentModelWithDeletedUID:(id)arg0 currentMoment:(id)arg1 hasDeleted:(BOOL)arg2;
- (id)nextLandingMomentModel;
- (long long)positionOfNextLandingMomentModel:(id)arg0;
- (id)findMomentModelWithAwemeID:(id)arg0;
- (id)findMomentModelWithMsgID:(id)arg0;
- (void)reloadAtIndexPaths:(id)arg0;
- (long long)totalRowCount;
- (void)deleteMomentAtIndexPath:(id)arg0;
- (id)personalHomepageDataController;
- (void)fetchPersonalDataForMomeryWithCompletion:(id /* block */)arg0;
- (void)reloadInsertedFeedDataIfNeededWithCompletion:(id /* block */)arg0;
- (void)configWithContext:(id)arg0 dataController:(id)arg1;
- (long long)convertToClearMomentListIndexWith:(long long)arg0;
- (void)setDefaultDataController:(id)arg0;
- (BOOL)p_insertEmptyCellData;
- (void)didChangedMessageProperty:(id)arg0 inConversation:(id)arg1;
- (void)didRecalledMessage:(id)arg0 inConversation:(id)arg1;
- (void)didDeletedMessage:(id)arg0 inConversation:(id)arg1;
- (void)insertLoadingCellIfNeeded;
- (void)insertErrorCellIfNeeded;
- (void)insertEmptyCellIfNeeded;
- (void)updateDisplayDelegateWithAnimation:(BOOL)arg0;
- (void)insertFeedDataIfNeededWithIsFetch:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)p_createDiffClassWith:(id)arg0;
- (void)updateDisplayUsingDiff:(id)arg0 animation:(BOOL)arg1 completion:(id /* block */)arg2;
- (long long)indexForCellType:(unsigned long long)arg0;
- (id)defaultDataController;
- (void)updateDisplayDelegateUsingAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setNextLandingMomentModel:(id)arg0;
- (void)reloadTutorialVideoIfNeededWithCompletion:(id /* block */)arg0;
- (void)setClearMomentList:(id)arg0;
- (BOOL)shouldBlockTutorialVideo;
- (void)insertTutorialVideoIfNeededWithCompletion:(id /* block */)arg0;
- (id)momentModelWithMsgID:(id)arg0 convID:(id)arg1;
- (id)momentData;
- (BOOL)shouldBlockRecommendData;
- (void)trackFetchUserListDuration:(unsigned long long)arg0;
- (void)trackLoadMoreWhenExpire;
- (id)closeFriendsList;
- (void)setCurrentDataController:(id)arg0;
- (void)setPersonalHomepageDataController:(id)arg0;
- (BOOL)shouldReloadUserList;
- (BOOL)hasLoadedFetchedData;
- (id)currentExchangeModel;
- (void)setCurrentExchangeModel:(id)arg0;
- (unsigned long long)sourceType;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)fetchData;
- (void)setCurrentIndex:(long long)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setError:(id)arg0;
- (void)dealloc;
- (id)error;
- (id)displayDelegate;
- (void)setDisplayDelegate:(id)arg0;
- (struct CGPoint { double x0; double x1; })currentContentOffset;
- (long long)dataState;

@end