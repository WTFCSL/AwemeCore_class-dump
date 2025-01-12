//
//     Generated by private class-dump
//

@class NSString, AWESecureArchiveDownloader, NSMutableDictionary, AWECampaignProfileTabbarModel, AWECampaignEntranceModel, NSBundle, AWECampaignPopupWindowModel, AWECampaignFeedPendantModel, AWECampaignLoginBannerModel, AWECampaignProfileActivityModel;

@interface AWECampaignEntranceDataManager : NSObject <AWEAppAwemeSettingMessage, AWECampaignEntranceDataManagerProtocol> {
    BOOL _visitedActivityPageInCurrentLaunch;
    AWECampaignFeedPendantModel *_feedPendantModel;
    AWECampaignProfileTabbarModel *_profileTabbarModel;
    AWECampaignLoginBannerModel *_loginBannerModel;
    AWECampaignPopupWindowModel *_popupWindowModel;
    AWECampaignProfileActivityModel *_profileActivityModel;
    NSMutableDictionary *_imagesToDataDictonary;
    AWESecureArchiveDownloader *_downloader;
    NSBundle *_remoteResourcesBundle;
    AWECampaignEntranceModel *_entranceModel;
}

@property (retain, nonatomic) NSMutableDictionary *imagesToDataDictonary;
@property (retain, nonatomic) AWESecureArchiveDownloader *downloader;
@property (retain, nonatomic) NSBundle *remoteResourcesBundle;
@property (retain, nonatomic) AWECampaignEntranceModel *entranceModel;
@property (retain, nonatomic) AWECampaignFeedPendantModel *feedPendantModel;
@property (retain, nonatomic) AWECampaignProfileTabbarModel *profileTabbarModel;
@property (retain, nonatomic) AWECampaignLoginBannerModel *loginBannerModel;
@property (retain, nonatomic) AWECampaignPopupWindowModel *popupWindowModel;
@property (retain, nonatomic) AWECampaignProfileActivityModel *profileActivityModel;
@property (nonatomic) BOOL visitedActivityPageInCurrentLaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCampaignEnabled;
+ (void)startObserveCampaignSettings;
+ (id)campaignSetting;
+ (BOOL)showForAll;
+ (id)googleCampaignName;
+ (BOOL)isMatchingCampaignName:(id)arg0;
+ (void)dismissRewardNotificationIfNeeded;
+ (void)showWebPage;
+ (id)sharedInstance;
+ (id)activityID;
+ (BOOL)isNewUser;

- (void)awemeSettingDidChange;
- (void)setDownloader:(id)arg0;
- (void)setEntranceModel:(id)arg0;
- (id)entranceModel;
- (void)monitorService:(id)arg0 status:(unsigned long long)arg1 level:(unsigned long long)arg2 error:(id)arg3 extraInfo:(id)arg4;
- (void)downloadResource;
- (void)setRemoteResourcesBundle:(id)arg0;
- (id)lottieNamed:(id)arg0;
- (id)remoteResourcesBundle;
- (id)pathForResource:(id)arg0 ofType:(id)arg1 bundle:(id *)arg2;
- (id)profileTabbarModel;
- (void)startObserveCampaignSettings;
- (void)handleDataWithSetting:(id)arg0;
- (id)popupWindowModel;
- (void)setupRootFolder;
- (void)downloadLottieJsonFile;
- (id)imagesToDataDictonary;
- (BOOL)enableFeedPendantModel;
- (id)feedPendantModel;
- (id)fetchImageModelWithImageName:(id)arg0;
- (void)upgradeToFullModels;
- (id)resizeImage:(id)arg0;
- (void)setupLottieReadyWithResourcePath:(id)arg0;
- (BOOL)enableLoginBannerModel;
- (id)loginBannerModel;
- (BOOL)enablePopupWindowModel;
- (BOOL)enableProfileTabbarModel;
- (void)setFeedPendantModel:(id)arg0;
- (void)setLoginBannerModel:(id)arg0;
- (void)setPopupWindowModel:(id)arg0;
- (void)setProfileTabbarModel:(id)arg0;
- (id)profileActivityModel;
- (void)setProfileActivityModel:(id)arg0;
- (void)updateImageToModelDic;
- (void)setupPartialModels;
- (void)cleanRootFolder;
- (BOOL)enableProfileActivityModel;
- (id)getCompaignTasks;
- (BOOL)visitedActivityPageInCurrentLaunch;
- (void)setVisitedActivityPageInCurrentLaunch:(BOOL)arg0;
- (void)setImagesToDataDictonary:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)downloader;

@end
