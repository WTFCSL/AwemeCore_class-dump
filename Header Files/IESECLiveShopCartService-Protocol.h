//
//     Generated by private class-dump
//

@protocol IESECLiveShopCartItem;

@protocol IESECLiveShopCartService <IESECLiveShopCartAnimation, IESECLiveShopCartAppearence>

@property (retain, nonatomic) id<IESECLiveShopCartItem> shopCartItem;

- (void)updateThemeImage:(id)arg0;
- (void)showShopCartIconWithCompletion:(id /* block */)arg0;
- (void)setupWithClickBlock:(id /* block */)arg0;
- (id)shopCartItem;
- (void)setShopCartItem:(id)arg0;

@end
