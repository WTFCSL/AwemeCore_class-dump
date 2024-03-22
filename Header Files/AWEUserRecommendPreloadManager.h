//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableSet;

@interface AWEUserRecommendPreloadManager : NSObject <AWEUserMessage> {
    NSMutableDictionary *_preloadTasks;
    NSMutableSet *_userIDsToRemove;
}

@property (retain, nonatomic) NSMutableDictionary *preloadTasks;
@property (retain, nonatomic) NSMutableSet *userIDsToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogout;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (void)willDislikeUserWithContext:(id)arg0;
- (id)preloadTasks;
- (void)setPreloadTasks:(id)arg0;
- (void)p_reset;
- (void)p_onPersonalRecommendChanged:(id)arg0;
- (void)preloadDataIfNeededForType:(long long)arg0 userID:(id)arg1 enterFrom:(id)arg2 needsContactCell:(BOOL)arg3;
- (id)p_createTaskForType:(long long)arg0;
- (BOOL)p_removeTask:(id)arg0;
- (void)p_trackPreloadForType:(long long)arg0 enterFrom:(id)arg1 eventType:(id)arg2;
- (id)userIDsToRemove;
- (void)p_registerObservers;
- (void)setUserIDsToRemove:(id)arg0;
- (void)p_unregisterObservers;
- (id)getPreloadDataControllerForType:(long long)arg0 enterFrom:(id)arg1 preloadCompletion:(id /* block */)arg2;
- (id)currentPreloadTasks;
- (void).cxx_destruct;

@end
