//
//     Generated by private class-dump
//

@class AWERVLongPressSpeedViewModel;

@interface AWERVLongPressSpeedController : AWEVideoPlayControlBaseController {
    AWERVLongPressSpeedViewModel *_viewModel;
}

@property (retain, nonatomic) AWERVLongPressSpeedViewModel *viewModel;

- (void)setHide:(BOOL)arg0;
- (BOOL)shouldResponseRecognizer:(id)arg0;
- (void)bindEvent;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setViewModel:(id)arg0;
- (BOOL)handleLongPress:(id)arg0;
- (id)viewModel;
- (void)reset;
- (void)viewDidLoad;

@end
