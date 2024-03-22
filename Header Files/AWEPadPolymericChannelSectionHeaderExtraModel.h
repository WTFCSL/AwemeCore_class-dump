//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPadPolymericChannelSectionHeaderExtraModel : MTLModel <MTLJSONSerializing> {
    NSArray *_tabList;
    NSArray *_filterList;
}

@property (retain, nonatomic) NSArray *tabList;
@property (retain, nonatomic) NSArray *filterList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)tabList;
- (void)setTabList:(id)arg0;
- (id)filterList;
- (void)setFilterList:(id)arg0;
- (void).cxx_destruct;

@end