//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEEnterpriseOperatingStatusConfigurationViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

- (id)sectionDataArray;
- (void)setSectionDataArray:(id)arg0;
- (void)switchNonFriendActiveStatus:(BOOL)arg0;
- (void)switchRecentConsultedCount:(BOOL)arg0;
- (id)__constructConfigurationItems;
- (id)__constructNonFriendActiveStatusItem;
- (id)__constructRecentConsultedCount;
- (void)__updateItemStatusWithType:(long long)arg0;
- (BOOL)__itemStatusWithType:(long long)arg0;
- (void)__handleNetworkFailedWithType:(long long)arg0;
- (void)__requestChangeSwitchStatusWithType:(long long)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;

@end