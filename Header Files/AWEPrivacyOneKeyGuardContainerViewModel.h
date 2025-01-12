//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEPrivacyOneKeyGuardContainerViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
    NSArray *_oneKeyGuardSelectSectionItems;
}

@property (retain, nonatomic) NSArray *oneKeyGuardSelectSectionItems;

- (void)refreshView;
- (id)sectionDataArray;
- (id)setupSectionArray;
- (id)topPrefix;
- (id)oneKeyGuardSelectSectionItems;
- (void)postOneKeyGuardSetting:(long long)arg0;
- (void)trackItemSelected:(id)arg0 fromStatus:(id)arg1;
- (void)setSectionDataArray:(id)arg0;
- (void)setOneKeyGuardSelectSectionItems:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
