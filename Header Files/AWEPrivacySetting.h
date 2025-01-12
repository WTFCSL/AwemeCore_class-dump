//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPrivacySetting : NSObject <AWEPrivacySettingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchIMSettingWithCompletion:(id /* block */)arg0;
+ (void)switchFollowShotStoreViewStatus:(BOOL)arg0 completion:(id /* block */)arg1;
+ (void)disableAddressBook:(id /* block */)arg0;
+ (void)changeUserSettingsWithParam:(id)arg0 completion:(id /* block */)arg1;
+ (void)switchVideoStoreViewStatus:(BOOL)arg0 isQuickStory:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)fetchIMSettingWithSource:(id)arg0 completion:(id /* block */)arg1;
+ (id)closePrivacyTipString;
+ (void)clearIMSettingWhenLogout;
+ (void)changeAddressBookWithEnable:(BOOL)arg0 completion:(id /* block */)arg1;
+ (id)allowCommentTip;
+ (id)allowDuetTip;
+ (id)allowReactTip;
+ (id)allowFollowingFollowerTip;
+ (BOOL)allowFilterComment;
+ (BOOL)autoFilterOffensiveComments;
+ (id)wholeAllowReceivingMessageTips;
+ (id)currentIMSetting;
+ (void)enableAddressBook:(id /* block */)arg0;
+ (void)enableAutoFilterOffensiveComments:(id /* block */)arg0;
+ (void)disableAutoFilterOffensiveComments:(id /* block */)arg0;
+ (void)enableNearbyVisible:(id /* block */)arg0;
+ (void)disableNearbyVisible:(id /* block */)arg0;
+ (void)enableReadStatus:(id /* block */)arg0;
+ (void)disableReadStatus:(id /* block */)arg0;
+ (id)whoCanSeeMyLikeTip;
+ (id)allowDownloadTip;
+ (id)allowFavoriteTip;
+ (id)myCollectionMusicTip:(unsigned long long)arg0;

@end
