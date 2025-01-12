//
//     Generated by private class-dump
//

@class AWEUGSceneUndertakeSnackbarView, AWEUGSceneUndertakeSnackbarViewModel;
@protocol AWEUGSceneUndertakeSnackbarViewControllerDelegate;

@interface AWEUGSceneUndertakeSnackbarViewController : NSObject {
    id<AWEUGSceneUndertakeSnackbarViewControllerDelegate> _delegate;
    AWEUGSceneUndertakeSnackbarView *_snackbar;
    AWEUGSceneUndertakeSnackbarViewModel *_viewModel;
}

@property (retain, nonatomic) AWEUGSceneUndertakeSnackbarView *snackbar;
@property (retain, nonatomic) AWEUGSceneUndertakeSnackbarViewModel *viewModel;
@property (weak, nonatomic) id<AWEUGSceneUndertakeSnackbarViewControllerDelegate> delegate;

- (id)snackbar;
- (void)setSnackbar:(id)arg0;
- (void)setupBinding;
- (void)trackLogWithMessage:(id)arg0;
- (void)setupSnackbar;
- (void)dismissSnackbar;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;

@end
