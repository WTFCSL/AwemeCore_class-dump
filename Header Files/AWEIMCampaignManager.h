//
//     Generated by private class-dump
//

@class NSArray, NSTimer, NSMutableSet, AWECampaignNoticeInfo, UIImage, NSString;

@interface AWEIMCampaignManager : NSObject <AWEIMCampaignManagerProtocol> {
    BOOL _campaignHeaderShowing;
    BOOL _titleImageChanged;
    BOOL _currentFromMulti;
    BOOL _hasChangedTab;
    UIImage *_backgroundImage;
    UIImage *_titleImage;
    NSString *_webURL;
    NSString *_activityID;
    AWECampaignNoticeInfo *_campaignInfo;
    NSArray *_availableList;
    NSArray *_availableMultiList;
    NSTimer *_timer;
    NSMutableSet *_finishGuideList;
}

@property (retain, nonatomic) AWECampaignNoticeInfo *campaignInfo;
@property (nonatomic) BOOL currentFromMulti;
@property (copy, nonatomic) NSArray *availableList;
@property (copy, nonatomic) NSArray *availableMultiList;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL titleImageChanged;
@property (retain, nonatomic) NSMutableSet *finishGuideList;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *titleImage;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) BOOL presentedCampaignGuide;
@property (nonatomic) BOOL campaignHeaderShowing;
@property (readonly, copy, nonatomic) NSString *multiSchema;
@property (copy, nonatomic) NSString *activityID;
@property (nonatomic) BOOL hasChangedTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)campaignInfo;
- (void)setCampaignInfo:(id)arg0;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (id)multiSchema;
- (void)updateNoticeCampaign:(id)arg0 multiCampaignInfoList:(id)arg1;
- (BOOL)canShowCustomNavigation;
- (BOOL)hasChangedTab;
- (void)setCampaignHeaderShowing:(BOOL)arg0;
- (void)timeFired:(id)arg0;
- (BOOL)currentFromMulti;
- (id)finishGuideList;
- (id)keyForCampaignID;
- (BOOL)presentedCampaignGuide;
- (BOOL)enablePresentCampaignViewWithoutShowTime;
- (BOOL)enablePresentCampaignView;
- (id)customNavigaionPresentKey;
- (BOOL)isMultiSchemaWebRouter;
- (void)trackNoticeEntranceLoadError:(id)arg0 extra:(id)arg1;
- (void)setTitleImageChanged:(BOOL)arg0;
- (void)trackNoticeEntrance;
- (void)setCurrentFromMulti:(BOOL)arg0;
- (void)setAvailableList:(id)arg0;
- (void)setAvailableMultiList:(id)arg0;
- (void)updateCampaignResouce;
- (id)availableList;
- (id)availableMultiList;
- (void)customNavigationHasShowAnimation;
- (void)finishSyncTitleImage;
- (void)setPresentedCampaignGuide:(BOOL)arg0;
- (BOOL)campaignHeaderShowing;
- (BOOL)titleImageChanged;
- (void)setHasChangedTab:(BOOL)arg0;
- (void)setFinishGuideList:(id)arg0;
- (id)timer;
- (id)backgroundImage;
- (id)init;
- (void)startTimer;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)currentDate;
- (void)dealloc;
- (void)setBackgroundImage:(id)arg0;
- (id)activityID;
- (void)setTitleImage:(id)arg0;
- (id)titleImage;
- (void)setActivityID:(id)arg0;

@end
