//
//     Generated by private class-dump
//

@class NSString, PuzzleHybridContainer;
@protocol IESECLigoLynxViewDataProtocol;

@interface IESECLiveLynxViewWrapper : UIView <IESHYHybridViewLifecycleProtocol> {
    PuzzleHybridContainer *_contentView;
    id<IESECLigoLynxViewDataProtocol> _viewModel;
}

@property (retain, nonatomic) PuzzleHybridContainer *contentView;
@property (retain, nonatomic) id<IESECLigoLynxViewDataProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0 withContainerID:(id)arg1;
- (void)viewDidRecieveError:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (id)p_tracker;
- (void)didPageVisibilityChange:(BOOL)arg0;
- (id)p_genLynxCardWithModel:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id)p_trackParamsWithModel:(id)arg0;
- (id)initWithModel:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (id)viewModel;
- (void)setContentView:(id)arg0;

@end
