//
//     Generated by private class-dump
//

@interface AWEFollowFeedFavoritesDispatchManager : NSObject <AWEFollowFeedFavoritesDispatchProtocol> {
    BOOL _dispatchFavoritesExperimentOn;
}

@property (nonatomic) BOOL dispatchFavoritesExperimentOn;

+ (id)sharedManager;

- (BOOL)isDispatchFavoritesExperimentOn;
- (void)favoriteFolderIDStroageWithModel:(id)arg0;
- (id)favoriteFolderIDs;
- (id)getStoregeKeyWithOriginKey:(id)arg0;
- (BOOL)dispatchFavoritesExperimentOn;
- (BOOL)canDispatchFavoritesInFollowFeed:(id)arg0 referString:(id)arg1;
- (void)favoriteFolderIDStroage:(id)arg0;
- (void)setDispatchFavoritesExperimentOn:(BOOL)arg0;
- (id)init;

@end
