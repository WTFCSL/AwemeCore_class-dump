//
//     Generated by private class-dump
//

@class AWEUGSceneUndertakeSnackbarView, AWEUGSnackbarViewModel;
@protocol AWEUGSnackbarViewControllerDelegate;

@interface AWEUGSnackbarViewController : NSObject {
    id<AWEUGSnackbarViewControllerDelegate> _delegate;
    AWEUGSceneUndertakeSnackbarView *_snackbar;
    AWEUGSnackbarViewModel *_viewModel;
}

@property (retain, nonatomic) AWEUGSceneUndertakeSnackbarView *snackbar;
@property (retain, nonatomic) AWEUGSnackbarViewModel *viewModel;
@property (weak, nonatomic) id<AWEUGSnackbarViewControllerDelegate> delegate;

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
