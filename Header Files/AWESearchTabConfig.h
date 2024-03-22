//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchTabConfig : NSObject {
    NSString *_placeholder;
    NSString *_tabViewName;
    NSString *_tabKey;
    unsigned long long _tabType;
}

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *tabViewName;
@property (copy, nonatomic) NSString *tabKey;
@property (nonatomic) unsigned long long tabType;

+ (unsigned long long)tabTypeWithTabKey:(id)arg0;
+ (id)tabKeyWithTabType:(unsigned long long)arg0;
+ (BOOL)enableSearchTabConfigOpt;
+ (unsigned long long)searchTabTypeWithString:(id)arg0;

- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg0;
- (void)setTabKey:(id)arg0;
- (void)setTabViewName:(id)arg0;
- (id)tabViewName;
- (id)searchTabMultiLanguageName:(id)arg0;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)arg0;
- (id)placeholder;
- (id)tabKey;

@end