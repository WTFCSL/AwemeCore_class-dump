//
//     Generated by private class-dump
//

@class BDStickerPanelCategoryUIConfiguration, BDStickerPanelEffectUIConfiguration, NSString;
@protocol RxInjector;

@interface BDStickerPanelUIConfiguration : NSObject <AWEStickerPickerUIConfigurationProtocol> {
    BDStickerPanelCategoryUIConfiguration *_categoryUIConfig;
    BDStickerPanelEffectUIConfiguration *_effectUIConfig;
    id /* block */ _reloadHanlder;
    id<RxInjector> _injector;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) BDStickerPanelCategoryUIConfiguration *categoryUIConfig;
@property (readonly, nonatomic) BDStickerPanelEffectUIConfiguration *effectUIConfig;
@property (copy, nonatomic) id /* block */ reloadHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)categoryUIConfig;
- (id)effectUIConfig;
- (id)panelLoadingView;
- (id)panelErrorView;
- (BOOL)ignoreCornerRadius;
- (void)setReloadHanlder:(id /* block */)arg0;
- (BOOL)ignoreHandleBar;
- (id /* block */)reloadHanlder;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)injector;

@end
