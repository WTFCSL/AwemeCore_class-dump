//
//     Generated by private class-dump
//

@class DitoTempoComponentViewModel, NSString, UIView, _TtC8TempoiOS13TempoRootView;

@interface DitoTempoComponentView : DitoComponentView <TempoiOS.TempoRootViewDelegate> {
    DitoTempoComponentViewModel *_viewModel;
    _TtC8TempoiOS13TempoRootView *_tempoRootView;
}

@property (weak, nonatomic) DitoTempoComponentViewModel *viewModel;
@property (retain, nonatomic) _TtC8TempoiOS13TempoRootView *tempoRootView;
@property (readonly, nonatomic) UIView *rootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rootViewSizeDidChangeWithUniqueID:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)geckoID;
- (void)updateViewModel:(id)arg0;
- (void)sendTempoEvent:(id)arg0 params:(id)arg1;
- (id)tempoRootView;
- (void)setTempoRootView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)rootView;

@end
