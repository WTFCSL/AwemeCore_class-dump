//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEPauseSearchEntranceSettingViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

- (id)sectionDataArray;
- (void)setSectionDataArray:(id)arg0;
- (void)switchPauseSearchTag:(BOOL)arg0;
- (void)switchPauseSearchEntrance:(BOOL)arg0;
- (BOOL)shouldEnableShowSearchTag;
- (void)setupTagItem;
- (void)setupEntranceItem;
- (void)trackPauseEntranceShow;
- (BOOL)isPauseTagSwitchOn;
- (BOOL)isPauseEntranceSwitchOn;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;

@end