//
//     Generated by private class-dump
//

@class NSArray;

@protocol ACCSideslipPropPanelPluginLifeCycleService <NSObject>

@property (readonly, nonatomic) NSArray *plugins;

- (void)configHostViewController:(id)arg0 plugins:(id)arg1;
- (void)postViewDidLoad;
- (void)postViewLayout;
- (void)postWillShowOnView:(id)arg0;
- (void)postDidShowOnView:(id)arg0;
- (void)postWillDismissFromView:(id)arg0;
- (void)postDidDismissFromView:(id)arg0;
- (void)postDidSelectNewSticker:(id)arg0 oldSticker:(id)arg1;
- (id)plugins;

@end