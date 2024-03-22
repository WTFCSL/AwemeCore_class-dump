//
//     Generated by private class-dump
//

@class HTSBackgroundFetchContext, HTSShortcutContext, HTSOpenURLContext, UIApplication, HTSHandleNotificationContext, HTSNotificationContext, NSDictionary, HTSBgURLSessionContext, HTSUserActivityContext, HTSBootAppDelegate;

@interface HTSAppContext : NSObject {
    BOOL _backgroundLaunch;
    BOOL _activePrewarm;
    BOOL _hasEnterBackground;
    NSDictionary *_launchOptions;
    UIApplication *_application;
    HTSBootAppDelegate *_appDelegate;
    HTSOpenURLContext *_openURLContext;
    HTSNotificationContext *_notificationContext;
    HTSUserActivityContext *_userActivityContext;
    HTSBackgroundFetchContext *_backgroundFetchContext;
    HTSShortcutContext *_shortcutContext;
    HTSBgURLSessionContext *_bgURLSessionContext;
    HTSHandleNotificationContext *_handleNotificationContext;
}

@property (retain, nonatomic) NSDictionary *launchOptions;
@property (retain, nonatomic) UIApplication *application;
@property (nonatomic) BOOL backgroundLaunch;
@property (nonatomic, getter=isActivePrewarm) BOOL activePrewarm;
@property (retain, nonatomic) HTSBootAppDelegate *appDelegate;
@property (retain, nonatomic) HTSOpenURLContext *openURLContext;
@property (retain, nonatomic) HTSNotificationContext *notificationContext;
@property (retain, nonatomic) HTSUserActivityContext *userActivityContext;
@property (retain, nonatomic) HTSBackgroundFetchContext *backgroundFetchContext;
@property (retain, nonatomic) HTSShortcutContext *shortcutContext;
@property (retain, nonatomic) HTSBgURLSessionContext *bgURLSessionContext;
@property (retain, nonatomic) HTSHandleNotificationContext *handleNotificationContext;
@property (nonatomic) BOOL hasEnterBackground;
@property (readonly) BOOL isSystemBackgroundLaunch;
@property (readonly) BOOL isBackgroundFetchLaunch;

+ (id)sharedContext;

- (BOOL)isBackgroundFetchLaunch;
- (BOOL)hasEnterBackground;
- (void)setHasEnterBackground:(BOOL)arg0;
- (BOOL)isSystemBackgroundLaunch;
- (id)openURLContext;
- (id)userActivityContext;
- (id)shortcutContext;
- (id)handleNotificationContext;
- (id)bgURLSessionContext;
- (void)setOpenURLContext:(id)arg0;
- (void)setUserActivityContext:(id)arg0;
- (id)backgroundFetchContext;
- (void)setBackgroundFetchContext:(id)arg0;
- (void)setShortcutContext:(id)arg0;
- (void)setBgURLSessionContext:(id)arg0;
- (void)setHandleNotificationContext:(id)arg0;
- (BOOL)isActivePrewarm;
- (void)setActivePrewarm:(BOOL)arg0;
- (id)application;
- (void).cxx_destruct;
- (BOOL)backgroundLaunch;
- (id)notificationContext;
- (void)setBackgroundLaunch:(BOOL)arg0;
- (void)setApplication:(id)arg0;
- (id)launchOptions;
- (void)setLaunchOptions:(id)arg0;
- (id)appDelegate;
- (void)setAppDelegate:(id)arg0;
- (void)setNotificationContext:(id)arg0;

@end