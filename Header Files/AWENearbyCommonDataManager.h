//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWENearbyCommonDataManager : NSObject <AWEUserMessage, AWESettingsComboRequestProtocol, AWEBasicModeMessage, AWENearByCommonDataManagerProtocol> {
    BOOL _isRequestOnAir;
    BOOL _isSubscribeLocationLevelChange;
    BOOL _hasRequestTabName;
    BOOL _hasCacheTabName;
    BOOL _hasChangeTabName;
    BOOL _hasRecordFeedTabChange;
    NSDictionary *_comboAPIData;
}

@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isSubscribeLocationLevelChange;
@property (nonatomic) BOOL hasRequestTabName;
@property (nonatomic) BOOL hasCacheTabName;
@property (nonatomic) BOOL hasChangeTabName;
@property (nonatomic) BOOL hasRecordFeedTabChange;
@property (retain, nonatomic) NSDictionary *comboAPIData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (id)settingsRequestParamsDictionary;
+ (id)sharedManager;

- (void)didFinishLogout;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)registerMessage;
- (void)basicModeDidChange:(BOOL)arg0;
- (void)privacyAlertAgreed;
- (void)fetchLocationAndActivityDataWithContext:(id)arg0 completion:(id /* block */)arg1;
- (void)requestNetNearbyCommonDataWithLocation:(id)arg0 requestType:(unsigned long long)arg1 pageType:(long long)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)trackNearbyFeedTabChangeWithCityModel:(id)arg0;
- (void)__bindObserve;
- (void)setIsSubscribeLocationLevelChange:(BOOL)arg0;
- (BOOL)isSubscribeLocationLevelChange;
- (BOOL)changeCurrentSelectCityEnable;
- (void)requestNetNearbyCommonDataWithLocation:(id)arg0 locationModel:(id)arg1 requestType:(unsigned long long)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)clearLastActivityID;
- (void)cancelLocationLevelChangeSubscribe;
- (void)setComboAPIData:(id)arg0;
- (void)requestNearbyCommonDataWithLocation:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
- (id)comboAPIData;
- (id)lastActivityID;
- (void)updateLastActivityID:(id)arg0;
- (void)trackNearbyTabRequestWithTargetTabName:(id)arg0 source:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)requestNetNearbyCommonDataWithLocation:(id)arg0 requestType:(unsigned long long)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)requestNetNearbyCommonDataWithLocation:(id)arg0 pageType:(long long)arg1 locationModel:(id)arg2 requestType:(unsigned long long)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)hasRequestTabName;
- (id)commonTrackParamsWithNearbyTabName:(id)arg0;
- (BOOL)hasCacheTabName;
- (void)setHasRequestTabName:(BOOL)arg0;
- (void)trackNearbyTabChangeWithTargetTabName:(id)arg0 type:(long long)arg1;
- (void)setHasCacheTabName:(BOOL)arg0;
- (BOOL)hasChangeTabName;
- (void)setHasChangeTabName:(BOOL)arg0;
- (BOOL)hasRecordFeedTabChange;
- (void)setHasRecordFeedTabChange:(BOOL)arg0;
- (void)trackNearbyTabCacheWithTargetTabName:(id)arg0 showTabName:(id)arg1;
- (void)trackNearbTabNameChangeTimeOut;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
