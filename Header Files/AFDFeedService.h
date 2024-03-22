//
//     Generated by private class-dump
//

@class NSString, AWEStorage;
@protocol AFDFeedStorage;

@interface AFDFeedService : HTSService <AFDFeedService>

@property (readonly, nonatomic) AWEStorage<AFDFeedStorage> *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL clearScreen;

- (id)createPlayVideoViewController;
- (id)createPlayInteractionViewController;
- (void)requestAwemeItemWithID:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;
- (void)setClearScreen:(BOOL)arg0;
- (id)anchorModelWithAweme:(id)arg0;
- (void)resumePlayerIfPausedBySingleClick;
- (void)didTurnAweme:(id)arg0 toPrivateType:(unsigned long long)arg1;
- (id)didStartPlayingAwemeVideoNotificationName;
- (id)didStartPlayingAwemeImageNotificationName;
- (id)createSearchUserManager;
- (BOOL)shouldShowBottomShootView:(id)arg0 enterFrom:(id)arg1;
- (void)preparePreloadForAweme:(id)arg0 bsModel:(id *)arg1 URLModel:(id *)arg2 dashResolution:(unsigned long long *)arg3;
- (id)prefetchedBSModelForAweme:(id)arg0;
- (id)createAwemeMusicInfoView;
- (id)createFeedVideoButton;
- (id)createShareFeedVideoButton;
- (id)createFollowButton;
- (id)createAwemePlayVideoViewController;
- (id)createImageAwemeDisplayViewController;
- (void)preloadDataWithModel:(id)arg0 group:(id)arg1 preloadSize:(long long)arg2 banPreload:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)cancelPreloadWithGroup:(id)arg0;
- (void)toggleFavoriteOnLongPressWithAweme:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2;
- (void)downloadAwemeOnLongPressWithAweme:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2;
- (void)downloadAwemeOnLongPressWithAweme:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)requestTurnToPrivacyType:(unsigned long long)arg0 awemeID:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)requestTurnToPrivacyType:(unsigned long long)arg0 awemeID:(id)arg1 enableExclusionSelected:(BOOL)arg2 isExclusionSelected:(BOOL)arg3 exclusionSecUidList:(id)arg4 completion:(id /* block */)arg5;
- (void)transferToAwemeNormalWithAwemeModel:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2;
- (BOOL)isSplashShowing;
- (BOOL)isSplashShown;
- (id)splashDisappearNotificationName;
- (void)repostWithAweme:(id)arg0 logInfo:(id)arg1;
- (BOOL)hasCreatedLiveRoom;
- (BOOL)isLiveGuideShowing;
- (id)bridgedImageAwemeDisplayViewControllerWithObject:(id)arg0;
- (void)handleBridgeBroken;
- (void)downloadAwemeOnLongPressWithAweme:(id)arg0 referString:(id)arg1;
- (id)imageNamed:(id)arg0;
- (id)storage;
- (BOOL)clearScreen;

@end
