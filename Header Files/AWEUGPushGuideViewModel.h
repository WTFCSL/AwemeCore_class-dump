//
//     Generated by private class-dump
//

@class AWEUGPushGuideConfig, NSString, AWEUGPushGuideModel, AWEUGInnerPushCommonModel, AWEUGInnerPushExtraSelectionModel, AWEUGInnerPushExtraModel;
@protocol AWEUGPushGuideLifeCycleProtocol;

@interface AWEUGPushGuideViewModel : NSObject {
    AWEUGPushGuideModel *_simpleGuideModel;
    AWEUGInnerPushExtraModel *_selectiveGuideModel;
    AWEUGPushGuideModel *_simpleNewGuideModel;
    NSString *_scene;
    AWEUGPushGuideConfig *_config;
    AWEUGInnerPushCommonModel *_model;
    NSString *_enterFrom;
    unsigned long long _viewStyle;
    AWEUGInnerPushExtraSelectionModel *_currentSelection;
    id<AWEUGPushGuideLifeCycleProtocol> _lifeCycle;
}

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEUGInnerPushCommonModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUGPushGuideConfig *config;
@property (retain, nonatomic) AWEUGPushGuideModel *simpleGuideModel;
@property (retain, nonatomic) AWEUGInnerPushExtraModel *selectiveGuideModel;
@property (retain, nonatomic) AWEUGPushGuideModel *simpleNewGuideModel;
@property (nonatomic) unsigned long long viewStyle;
@property (retain, nonatomic) AWEUGInnerPushExtraSelectionModel *currentSelection;
@property (weak, nonatomic) id<AWEUGPushGuideLifeCycleProtocol> lifeCycle;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)clickCancel;
- (id)lifeCycle;
- (void)viewDidDismiss;
- (id)simpleNewGuideModel;
- (void)clickConfirm;
- (void)viewDidShow;
- (void)viewFailToShow:(id)arg0;
- (id)selectiveGuideModel;
- (id)simpleGuideModel;
- (void)setLifeCycle:(id)arg0;
- (void)parseGuideModel;
- (void)setSelectiveGuideModel:(id)arg0;
- (void)setSimpleGuideModel:(id)arg0;
- (void)setSimpleNewGuideModel:(id)arg0;
- (void)trackOutAppNotifyWithEventType:(id)arg0 failedReason:(id)arg1;
- (void)updateSettingsWithKey:(id)arg0;
- (id)p_guideShowReason;
- (void)handlePushPermissionChangedWithNotification:(id)arg0;
- (void)updateUserSettings;
- (void)trackPushClick;
- (void)trackPushPrePermissionAuth;
- (id)initWithScene:(id)arg0 model:(id)arg1 config:(id)arg2 lifeStyle:(id)arg3;
- (void)updateSelection:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setScene:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)config;
- (unsigned long long)viewStyle;
- (void)setViewStyle:(unsigned long long)arg0;
- (id)scene;
- (id)currentSelection;
- (void)setCurrentSelection:(id)arg0;

@end
