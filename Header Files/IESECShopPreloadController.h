//
//     Generated by private class-dump
//

@class NSString;

@interface IESECShopPreloadController : IESECRelationController <IESECShopPreloadControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerDidLoad;
- (void)syncGeckoResourcesIfNeeded;
- (void)cacheShopResources;
- (void)viewDidLoad;

@end
