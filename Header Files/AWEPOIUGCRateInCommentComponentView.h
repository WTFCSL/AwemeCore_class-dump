//
//     Generated by private class-dump
//

@class AWEPOIDetailNGPageContext, AWEPOIUGCRateInCommentCell, AWEPOIDetailNGUGCComponentViewModel;

@interface AWEPOIUGCRateInCommentComponentView : DitoComponentView {
    AWEPOIUGCRateInCommentCell *_cell;
    AWEPOIDetailNGUGCComponentViewModel *_viewModel;
}

@property (retain, nonatomic) AWEPOIUGCRateInCommentCell *cell;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGUGCComponentViewModel *viewModel;

- (void)updateViewModel:(id)arg0;
- (void)lynxDidRemove;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)cell;
- (void)setCell:(id)arg0;

@end