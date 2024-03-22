//
//     Generated by private class-dump
//

@class UIButton, NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropPanelFavoriteService, ACCSideslipPropPanelUIConfigService;

@interface ACCSideslipPropPanelControllerFavoritePlugin : NSObject <ACCStickerPickerServiceSubscriber, AWEStickerPickerControllerPluginProtocol> {
    BOOL _favoriteButtonUserInteractionEnabled;
    id<ACCSideslipPropPanelControllerProtocol> _controller;
    id<ACCSideslipPropPanelService> _sideslipPropPanelService;
    id<ACCSideslipPropPanelFavoriteService> _sideslipFavoriteService;
    id<ACCSideslipPropPanelUIConfigService> _uiConfigService;
    UIButton *_favoriteButton;
}

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelFavoriteService> sideslipFavoriteService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (nonatomic) BOOL favoriteButtonUserInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)sideslipPropPanelService;
- (void)setSideslipPropPanelService:(id)arg0;
- (void)controllerViewDidLoad:(id)arg0;
- (id)uiConfigService;
- (void)setUiConfigService:(id)arg0;
- (id)sideslipFavoriteService;
- (void)onFavoriteButtonClick:(id)arg0;
- (void)setSideslipFavoriteService:(id)arg0;
- (BOOL)favoriteButtonUserInteractionEnabled;
- (void)setFavoriteButtonUserInteractionEnabled:(BOOL)arg0;
- (void)setController:(id)arg0;
- (void).cxx_destruct;
- (id)controller;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;

@end
