//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECShopTopTabService : NSObject <IESECShopTopTabService> {
    NSArray *_topTabsModels;
    NSString *_lightStyleTextColor;
    NSString *_indicatorColor;
}

@property (readonly, nonatomic) BOOL shouldHideTopTab;
@property (copy, nonatomic) NSArray *topTabsModels;
@property (copy, nonatomic) NSString *lightStyleTextColor;
@property (copy, nonatomic) NSString *indicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lightStyleTextColor;
- (void)setLightStyleTextColor:(id)arg0;
- (void)setTopTabsModels:(id)arg0;
- (BOOL)shouldHideTopTab;
- (id)topTabsModels;
- (void).cxx_destruct;
- (id)indicatorColor;
- (void)setIndicatorColor:(id)arg0;

@end
