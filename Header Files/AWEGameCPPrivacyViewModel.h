//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEGameCPPrivacyViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;

- (id)aAWEPadModuleAdapter;
- (void)removeLoadingView;
- (void)changeUserSettingsWithParam:(id)arg0 completion:(id /* block */)arg1;
- (id)gamePrivacyVisibleText:(long long)arg0;
- (id)convertGamePrivacyPermissionForTrack:(long long)arg0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)arg0;
- (void)tapGameStateCell;
- (void)tapGameEvaluationDigCell;
- (void)showGamePrivacySettingAlert;
- (void)trackGamePrivacyClickEvent;
- (unsigned long long)actionSheetViewStyle;
- (unsigned long long)actionSheetAnimationStyle;
- (double)actionSheetContainerWidth;
- (id)settingModel:(id)arg0 withIndex:(long long)arg1 isSelected:(BOOL)arg2;
- (void)trackGamePrivacyChangeStatus:(long long)arg0 toStatus:(long long)arg1;
- (void)trackGameEvaluationDigClickEventWithStatus:(BOOL)arg0;
- (void)trackGameEvaluationDigResultEventWithStatus:(BOOL)arg0;
- (void)trackGameEvaluationDigShowEventWithStatus:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)addLoadingView;
- (void)updateMessage;

@end
