//
//     Generated by private class-dump
//

@class IESECShopDynamicTabModel, NSString, IESECShopSubTabsModel, IESECShopTabBizInfoModel, IESECShopProductTabModel;

@interface IESECShopTabModelNew : MTLModel <MTLJSONSerializing> {
    BOOL _activated;
    unsigned long long _tabType;
    NSString *_name;
    IESECShopDynamicTabModel *_dynamicTab;
    IESECShopProductTabModel *_productTab;
    IESECShopSubTabsModel *_subTabs;
    IESECShopTabBizInfoModel *_bizInfo;
}

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL activated;
@property (retain, nonatomic) IESECShopDynamicTabModel *dynamicTab;
@property (retain, nonatomic) IESECShopProductTabModel *productTab;
@property (retain, nonatomic) IESECShopSubTabsModel *subTabs;
@property (retain, nonatomic) IESECShopTabBizInfoModel *bizInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)tabType;
- (id)bizInfo;
- (void)setBizInfo:(id)arg0;
- (void)setTabType:(unsigned long long)arg0;
- (id)subTabs;
- (id)productTab;
- (id)dynamicTab;
- (void)setDynamicTab:(id)arg0;
- (void)setProductTab:(id)arg0;
- (void)setSubTabs:(id)arg0;
- (void)setActivated:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (BOOL)activated;

@end
