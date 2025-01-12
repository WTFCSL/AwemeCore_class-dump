//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEAwemeModel, NSMutableSet, NSMutableArray, AWEFeedCreationCardController;

@interface AWEFeedCreationCardMemoriesInterceptor : NSObject <PHPhotoLibraryChangeObserver, AWEFeedCreationCardInterceptorProtocol> {
    BOOL _hasAppeared;
    BOOL _hasRegisteredPhotoLibraryNotification;
    AWEFeedCreationCardController *_cardController;
    NSArray *_aggregatedAssets;
    AWEAwemeModel *_awemeModel;
    NSMutableSet *_notifiedDeletedIDs;
    NSMutableArray *_pendingJSEvent;
}

@property (weak, nonatomic) AWEFeedCreationCardController *cardController;
@property (copy, nonatomic) NSArray *aggregatedAssets;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableSet *notifiedDeletedIDs;
@property (retain, nonatomic) NSMutableArray *pendingJSEvent;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL hasRegisteredPhotoLibraryNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)interceptWithExtraClientData;
- (void)interceptWithCardDidAppear:(id)arg0 withAweme:(id)arg1;
- (void)interceptWithPrecheckInsertTaskCompletion:(id /* block */)arg0;
- (void)interceptWithInsertCard:(id /* block */)arg0;
- (void)bindToCardController:(id)arg0;
- (void)didEnteredMemoriesPlayer:(id)arg0;
- (void)didMemoriesLocalAssetAuthorityChanged:(id)arg0;
- (void)didHideMemoriesSkylight:(id)arg0;
- (void)didApplicationBecomeActive;
- (BOOL)ignoreSkipToday;
- (BOOL)ignoreHasEnterMemoriesPlayerToday;
- (id)pendingJSEvent;
- (unsigned long long)coverCount;
- (BOOL)hasEnterMemoriesPlayerToday;
- (BOOL)skipToday;
- (BOOL)isNearMidnight;
- (BOOL)needLocalAssets;
- (BOOL)hasRegisteredPhotoLibraryNotification;
- (void)setHasRegisteredPhotoLibraryNotification:(BOOL)arg0;
- (void)setAggregatedAssets:(id)arg0;
- (id)aggregatedAssets;
- (void)sendPendingJSEventIfNeeded;
- (void)deleteCardIfNeeded;
- (id)notifiedDeletedIDs;
- (void)setNotifiedDeletedIDs:(id)arg0;
- (void)setPendingJSEvent:(id)arg0;
- (id)cardController;
- (void)setCardController:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg0;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg0;

@end
