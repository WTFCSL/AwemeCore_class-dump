//
//     Generated by private class-dump
//

@class UIViewController;

@interface AWEPlayInteractionDislikeElementViewModel : AWEPlayInteractionBaseElementViewModel {
    BOOL _disableDislikeAction;
    UIViewController *_viewController;
}

@property (nonatomic) BOOL disableDislikeAction;
@property (weak, nonatomic) UIViewController *viewController;

- (void)trackClickClose;
- (void)onDislikeButtonClicked:(id)arg0;
- (void)didCancelDislike:(BOOL)arg0;
- (BOOL)disableDislikeAction;
- (void)setDisableDislikeAction:(BOOL)arg0;
- (void)trackClickDislike;
- (void)trackClickCancel;
- (void)onCancelButtonClicked:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;

@end
