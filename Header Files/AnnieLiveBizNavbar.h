//
//     Generated by private class-dump
//

@class NSString, UIViewController, AnnieLiveBizSchemeParam;
@protocol BDXContainerProtocol;

@interface AnnieLiveBizNavbar : UIView <BDXNavigationBarProtocol> {
    UIViewController<BDXContainerProtocol> *container;
    id /* block */ onLeftButtonClick;
    id /* block */ onRightButtonClick;
    AnnieLiveBizSchemeParam *_schemeParams;
}

@property (weak, nonatomic) AnnieLiveBizSchemeParam *schemeParams;
@property (weak, nonatomic) UIViewController<BDXContainerProtocol> *container;
@property (copy, nonatomic) id /* block */ onLeftButtonClick;
@property (copy, nonatomic) id /* block */ onRightButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)schemeParams;
- (void)setSchemeParams:(id)arg0;
- (void)attachToContainerWithParams:(id)arg0 context:(id)arg1;
- (id /* block */)onLeftButtonClick;
- (void)setOnLeftButtonClick:(id /* block */)arg0;
- (id /* block */)onRightButtonClick;
- (void)setOnRightButtonClick:(id /* block */)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;

@end