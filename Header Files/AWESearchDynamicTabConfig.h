//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchDynamicTabConfig : AWEBaseApiModel {
    NSString *_placeholder;
    NSString *_tabName;
    NSString *_tabType;
    NSString *_tabViewName;
    long long _tabNum;
}

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *tabViewName;
@property (nonatomic) long long tabNum;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tabType;
- (void)setTabType:(id)arg0;
- (void)setTabViewName:(id)arg0;
- (id)tabViewName;
- (long long)tabNum;
- (void)setTabNum:(long long)arg0;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)arg0;
- (id)placeholder;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end