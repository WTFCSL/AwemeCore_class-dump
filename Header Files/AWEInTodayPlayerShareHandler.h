//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWEAwemeLongPressModalViewControllerProtocol;

@interface AWEInTodayPlayerShareHandler : NSObject {
    BOOL _isSharing;
    UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *_longPressVC;
}

@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (nonatomic) BOOL isSharing;

- (id)referString;
- (id)longPressVC;
- (void)setLongPressVC:(id)arg0;
- (void)endControlServerContext:(BOOL)arg0;
- (void)addPageIdentifierForTranspondIMShareModels:(id)arg0;
- (void)showLongPressShareVCWithFromClick:(BOOL)arg0 model:(id)arg1 publishClick:(id /* block */)arg2;
- (void)showNewPressPanelWithAweme:(id)arg0 publishClick:(id /* block */)arg1 scene:(id)arg2;
- (void)setIsSharing:(BOOL)arg0;
- (id)generateLongPressFunctionModelsWithTileModel:(id)arg0;
- (void)shareWithPlayerTileModel:(id)arg0 fromClick:(BOOL)arg1 publishClick:(id /* block */)arg2;
- (void).cxx_destruct;
- (BOOL)isSharing;

@end
