//
//     Generated by private class-dump
//

@class HTSLivePopupWebViewModel;
@protocol IESLiveInternalRouter;

@interface HTSLivePopupWebViewFragment : IESLiveRoomComponent {
    HTSLivePopupWebViewModel *_viewModel;
    id<IESLiveInternalRouter> _internalRouter;
}

@property (retain, nonatomic) HTSLivePopupWebViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;

- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)bindViewModel;
- (void)componentCreate;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end