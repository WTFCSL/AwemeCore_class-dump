//
//     Generated by private class-dump
//

@class NSString;

@interface AFDBookDetailPageTabsInfoModel : AWEBaseApiModel {
    NSString *_tabName;
    NSString *_tabId;
    long long _tabType;
}

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) long long tabType;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)tabType;
- (id)tabId;
- (void)setTabId:(id)arg0;
- (void)setTabType:(long long)arg0;
- (void).cxx_destruct;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
