//
//     Generated by private class-dump
//

@class AWEGradientView;
@protocol AWEPOIEmptyViewControllerDelegate;

@interface AWEPOIEmptyViewController : UIViewController {
    id<AWEPOIEmptyViewControllerDelegate> _delegate;
    unsigned long long _scene;
    id /* block */ _block;
    AWEGradientView *_gradientBackgroundView;
}

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) AWEGradientView *gradientBackgroundView;
@property (weak, nonatomic) id<AWEPOIEmptyViewControllerDelegate> delegate;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setGradientBackgroundView:(id)arg0;
- (id)initWithBlock:(id /* block */)arg0 scene:(unsigned long long)arg1;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (id /* block */)block;
- (unsigned long long)scene;
- (id)gradientBackgroundView;

@end