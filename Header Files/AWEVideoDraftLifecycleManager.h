//
//     Generated by private class-dump
//

@class AWEVideoDraftTracker;

@interface AWEVideoDraftLifecycleManager : NSObject {
    BOOL _didStart;
    AWEVideoDraftTracker *_draftTracker;
}

@property (class, readonly, nonatomic) AWEVideoDraftLifecycleManager *sharedManager;

@property (nonatomic) BOOL didStart;
@property (retain, nonatomic) AWEVideoDraftTracker *draftTracker;

+ (void)registerDraftResourceMonitors;
+ (id)sharedManager;

- (void)p_addObserver;
- (void)coldStartAction;
- (void)p_handleAppBecomeActiveNotification;
- (id)draftTracker;
- (void)p_updateDraftsStatusWithFinish:(id /* block */)arg0;
- (void)transitionStatusToDeleteWithDraftID:(id)arg0;
- (void)setDraftTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)didStart;
- (void)setDidStart:(BOOL)arg0;

@end
