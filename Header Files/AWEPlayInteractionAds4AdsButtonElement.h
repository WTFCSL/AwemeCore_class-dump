//
//     Generated by private class-dump
//

@class DUXButton;

@interface AWEPlayInteractionAds4AdsButtonElement : AWEPlayInteractionLeftElement {
    id /* block */ _showHandler;
    id /* block */ _colorHandler;
    DUXButton *_adButton;
}

@property (copy, nonatomic) id /* block */ showHandler;
@property (copy, nonatomic) id /* block */ colorHandler;
@property (retain, nonatomic) DUXButton *adButton;

- (void)initializeElement;
- (id)adButton;
- (void)setAdButton:(id)arg0;
- (id)activateInfoWithData:(id)arg0;
- (void)colorButton;
- (void)dislikeAction;
- (id /* block */)showHandler;
- (void)setShowHandler:(id /* block */)arg0;
- (id /* block */)colorHandler;
- (void)setColorHandler:(id /* block */)arg0;
- (void)adAction;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)showButton;

@end
