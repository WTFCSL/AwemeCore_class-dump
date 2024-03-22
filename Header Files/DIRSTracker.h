//
//     Generated by private class-dump
//

@class DIRSContext;

@interface DIRSTracker : NSObject {
    DIRSContext *context;
}

@property (nonatomic) BOOL eventTrackEnabled;
@property (nonatomic) BOOL eventUploadEnabled;
@property (nonatomic) unsigned long long launchType;

+ (id)mainTracker;
+ (id)initMainTrackerWithConfig:(id)arg0;
+ (long long)version;
+ (id)shortVersion;

- (void)trackEvent:(id)arg0 withProperties:(id)arg1;
- (void)trackEvent:(id)arg0 withProperties:(id)arg1;
- (void)trackJSON:(id)arg0 withType:(id)arg1;
- (void)trackJSON:(id)arg0 withType:(id)arg1;
- (void)addHTTPHeaderBlock:(id /* block */)arg0 forUser:(id)arg1;
- (void)removeHTTPHeaderBlock:(id)arg0;
- (void)removeABVersionsBlock:(id)arg0;
- (void)setAppRegion:(id)arg0;
- (BOOL)requestExpectedEventBatchInterval:(double)arg0 withOptions:(id)arg1;
- (void)setUserIdentifiers:(id)arg0;
- (void)setRegionKey:(id)arg0;
- (void)addGlobalProperties:(id)arg0;
- (void)removeGlobalPropertiesForKeys:(id)arg0;
- (void)setEventTrackEnabled:(BOOL)arg0;
- (BOOL)eventTrackEnabled;
- (void)setEventUploadEnabled:(BOOL)arg0;
- (BOOL)eventUploadEnabled;
- (void)addABVersionsBlock:(id /* block */)arg0 forUser:(id)arg1;
- (BOOL)handleURL:(id)arg0;
- (void)removeAllEvents;
- (void).cxx_destruct;
- (id)clientId;
- (unsigned long long)launchType;
- (void)setLaunchType:(unsigned long long)arg0;
- (id)initWithConfig:(id)arg0;
- (id)context;
- (void)setDeviceIdentifiers:(id)arg0;
- (BOOL)start;
- (void)setDeviceCategory:(id)arg0;
- (void)setAppLanguage:(id)arg0;

@end
