//
//     Generated by private class-dump
//

@class NSString;

@interface IESECShopTabBarStyleModel : MTLModel <MTLJSONSerializing> {
    NSString *_tabTextColor;
    NSString *_selectedTabTextColor;
}

@property (copy, nonatomic) NSString *tabTextColor;
@property (copy, nonatomic) NSString *selectedTabTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tabTextColor;
- (void)setTabTextColor:(id)arg0;
- (id)selectedTabTextColor;
- (void)setSelectedTabTextColor:(id)arg0;
- (void).cxx_destruct;

@end
