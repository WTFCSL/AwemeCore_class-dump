//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEIMNoticeTabModelNew : AWEBaseApiModel {
    NSString *_name;
    NSString *_schemaUrl;
    long long _level;
    NSArray *_noticeTabs;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSArray *noticeTabs;

+ (id)noticeTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaUrl;
- (void)setSchemaUrl:(id)arg0;
- (id)noticeTabs;
- (void)setNoticeTabs:(id)arg0;
- (void)setLevel:(long long)arg0;
- (long long)level;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;

@end
