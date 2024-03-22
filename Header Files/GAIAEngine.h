//
//     Generated by private class-dump
//

@class NSHashTable;

@interface GAIAEngine : NSObject {
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSHashTable *observers;

+ (void)bindPhone;
+ (void)startTasksForKey:(id)arg0;
+ (void)startTasksForKey:(id)arg0 withObject:(id)arg1;
+ (void)hasTryToGetIDFA;
+ (void)didFinishLoadFeed;
+ (void)startSDKRestartTask;
+ (void)startSDKStartupTask;
+ (void)didBulletInit;
+ (void)appSettingsUpdated;
+ (void)accountDidLogin;
+ (void)accountDidLogout;
+ (void)accountSessionExpired;
+ (void)rebindPhone;
+ (void)didSwitchTeenMode;
+ (void)didSwitchBaseMode;
+ (void)hasShownPrivayDialog;
+ (void)didShownPrivacyDialog;
+ (void)didMotionBegin;
+ (void)updateListeningStatus:(long long)arg0;
+ (void)updateThermalStatusInfo:(id)arg0;
+ (void)gurdKitDidInit;
+ (id)tasksForKey:(id)arg0;
+ (void)startSwiftTasksForKey:(id)arg0;
+ (void)addGaiaObserver:(id)arg0;
+ (void)removeGaiaObserver:(id)arg0;
+ (void)initialize;
+ (id)sharedInstance;
+ (void)loadImage;

- (void)startTasksForKey:(id)arg0;
- (void)startTasksForKey:(id)arg0 withObject:(id)arg1;
- (void)_notifyObserverTasksWillStartForKey:(id)arg0;
- (void)_notifyObserverTaskWillExecute:(id)arg0 forKey:(id)arg1;
- (void)_notifyObserverTaskDidExecute:(id)arg0 forKey:(id)arg1;
- (void)_notifyObserverTasksDidStartForKey:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;

@end
