//
//     Generated by private class-dump
//

@class UIImage;
@protocol AWEECommerceWidgetGuideManagerService;

@protocol AWEECommerceWidgetGuideModuleService <HTSService>

@property (readonly, nonatomic) id<AWEECommerceWidgetGuideManagerService> adapterManager;
@property (readonly, nonatomic) id<AWEECommerceWidgetGuideManagerService> widgetManager;
@property (readonly, nonatomic) UIImage *widgetLiveToolItemIcon;

- (void)checkWidgetInstallStateWithCompletion:(id /* block */)arg0;
- (id)adapterManager;
- (id)widgetLiveToolItemIcon;
- (id)widgetManager;

@end