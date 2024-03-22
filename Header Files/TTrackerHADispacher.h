//
//     Generated by private class-dump
//

@class NSString, NSDictionary, TTrackerHAStorage, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTrackerHADispacher : NSObject <BDTrackerPlugin, BDTrackerEventObserver, TTrackerPriorityObserver> {
    double flushInterval;
    double lastestFlushTime;
    BOOL isBusy;
    NSObject<OS_dispatch_queue> *ha_dispacher_event_queue;
    NSDictionary *prioritizedEvents;
    int currentVersion;
    NSMutableDictionary *uploaders;
    TTrackerHAStorage *_storage;
}

@property (retain, nonatomic) TTrackerHAStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginVersion;
+ (id)plugin;

- (void)onEventStored:(id)arg0;
- (void)onPriorityUpdated:(id)arg0;
- (void)_saveEvent:(id)arg0 type:(id)arg1 priority:(id)arg2;
- (void)setStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (id)observerQueue;
- (void)apply:(id)arg0;

@end
