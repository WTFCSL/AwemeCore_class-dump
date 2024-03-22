//
//     Generated by private class-dump
//

@class NSString, CAGradientLayer;
@protocol ACCSideslipPropService, ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelControllerProtocol;

@interface ACCSideslipPropPanelControllerExpousePlugin : NSObject <ACCSideslipPropServiceSubscriber, ACCSideslipPropPickCollectionViewSubscriber, UIGestureRecognizerDelegate, AWEStickerPickerControllerPluginProtocol> {
    id<ACCSideslipPropPanelControllerProtocol> _controller;
    id<ACCSideslipPropViewContainerProtocol> _viewContainer;
    id<ACCSideslipPropService> _sideslipPropService;
    CAGradientLayer *_expouseGradientLayer;
}

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) CAGradientLayer *expouseGradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)sideslipPropService;
- (void)setSideslipPropService:(id)arg0;
- (void)sideslipPropService:(id)arg0 willChangeShowState:(unsigned long long)arg1;
- (void)sideslipPropPickCollectionView:(id)arg0 willBeginScrollWithReason:(unsigned long long)arg1 scrollDirection:(unsigned long long)arg2;
- (void)sideslipPropPickCollectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)controllerViewDidLoad:(id)arg0;
- (void)controllerViewLayout:(id)arg0;
- (void)p_bindService;
- (void)p_updataHiddenCoefficientWithShowState:(unsigned long long)arg0;
- (void)setExpouseGradientLayer:(id)arg0;
- (id)expouseGradientLayer;
- (void)setController:(id)arg0;
- (void).cxx_destruct;
- (id)controller;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
