//
//     Generated by private class-dump
//

@class HunterContainerViewModel, NSString, HunterContext, UIView, UIViewController;
@protocol HunterContainerProtocol, HunterViewControllerProtocol;

@interface HunterBasePlugin : NSObject <HunterPluginProtocol> {
    UIView<HunterContainerProtocol> *_hunterContainerView;
    UIViewController<HunterViewControllerProtocol> *_hunterVC;
    HunterContainerViewModel *_viewModel;
    HunterContext *_hunterContext;
}

@property (weak, nonatomic) UIView<HunterContainerProtocol> *hunterContainerView;
@property (weak, nonatomic) UIViewController<HunterViewControllerProtocol> *hunterVC;
@property (weak, nonatomic) HunterContainerViewModel *viewModel;
@property (weak, nonatomic) HunterContext *hunterContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldActive;
- (id)hunterContainerView;
- (void)setHunterContainerView:(id)arg0;
- (id)hunterVC;
- (void)setHunterVC:(id)arg0;
- (id)hunterContext;
- (void)setHunterContext:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
