//
//     Generated by private class-dump
//

@class AWESocialSettingModel, NSString;

@interface AWESocialSettingManager : NSObject <AWESocialSettingManagerProtocol> {
    BOOL _hasTrackedTabButtonBgShow;
    AWESocialSettingModel *_settingModel;
    AWESocialSettingModel *_latestFetchedSettingModel;
}

@property (nonatomic) BOOL hasTrackedTabButtonBgShow;
@property (retain, nonatomic) AWESocialSettingModel *settingModel;
@property (retain, nonatomic) AWESocialSettingModel *latestFetchedSettingModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)handleFetchedModel:(id)arg0;
- (BOOL)enableLandingLatestVisitTab;
- (id)recommendedLandingTabName;
- (BOOL)isReshapeShowing;
- (void)fetchSocialSetting:(BOOL)arg0 context:(id)arg1 completion:(id /* block */)arg2;
- (id)socialSettingParamsWithCodeLaunch:(BOOL)arg0;
- (void)setLatestFetchedSettingModel:(id)arg0;
- (void)didGetUpdatedWithModel:(id)arg0;
- (void)configActivityTimer;
- (id)latestFetchedSettingModel;
- (void)tabButtonBackgroundShouldChange;
- (void)tab2NearbyBackgroundShouldChange;
- (void)homepageNearbyBackgroundShouldChange;
- (BOOL)shouldShowTabButtonBackground;
- (id)nearbyPostIconUrls;
- (id)nearbyBubbleIconUrls;
- (id)nearbyPostText;
- (BOOL)hasTrackedTabButtonBgShow;
- (void)setHasTrackedTabButtonBgShow:(BOOL)arg0;
- (void)fetchSocialSettingWithContext:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)shouldShowTabButtonSpecialText;
- (void)requestTabButtonBackgroundForImageView:(id)arg0 completion:(id /* block */)arg1;
- (void)requestRoamBackgroundImage:(id /* block */)arg0;
- (void)fetchColdLaunchSocialSettingWithContext:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (void)setSettingModel:(id)arg0;
- (id)settingModel;

@end