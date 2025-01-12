//
//     Generated by private class-dump
//

@class DUXActionPopover, NSString, AFDUserListMoreActionContext, AFDMoreActionButtonViewModel;

@interface AFDMoreActionButton : UIButton <AWEPadUIAdaptionViewTransitionObserver> {
    AFDUserListMoreActionContext *_context;
    AFDMoreActionButtonViewModel *_viewModel;
    DUXActionPopover *_popover;
}

@property (retain, nonatomic) AFDMoreActionButtonViewModel *viewModel;
@property (weak, nonatomic) DUXActionPopover *popover;
@property (retain, nonatomic) AFDUserListMoreActionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onButtonClicked;
- (void)handleDeviceOrientationDidChange:(id)arg0;
- (void)showPopoverWithTargetView:(id)arg0 actions:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)popover;
- (void)setContext:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)context;
- (id)viewModel;
- (void)setPopover:(id)arg0;
- (void)dealloc;
- (void)updateWithUser:(id)arg0;

@end
