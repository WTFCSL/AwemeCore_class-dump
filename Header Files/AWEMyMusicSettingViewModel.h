//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEMyMusicSettingViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)__settingModel:(id)arg0 withIndex:(long long)arg1 isSelected:(BOOL)arg2;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)arg0;
- (void)tapMyCollectedMusic;
- (void)tapMyCollectedPlaylist;
- (void)tapDouyinVideo2Luna:(BOOL)arg0;
- (void)showActionSheetWithPrivacy:(unsigned long long)arg0 trackInfo:(id)arg1 type:(unsigned long long)arg2;
- (id)subtitleOfPrivacyActionSheet:(unsigned long long)arg0;
- (id)nameOfPrivacyActionSheet:(unsigned long long)arg0;
- (id)nameOfPrivacyFieldParam:(unsigned long long)arg0;
- (void)__trackMyCollectedMusicPrivacySelect:(unsigned long long)arg0 to_status:(unsigned long long)arg1 enterMethod:(id)arg2;
- (void)__showActionSheetVCWithItems:(id)arg0 headerText:(id)arg1 useCardUIStyle:(BOOL)arg2 confirmBlock:(id /* block */)arg3;
- (id)nameOfMyCollectedMusicPrivacy:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)refreshStatus;

@end
