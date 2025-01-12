//
//     Generated by private class-dump
//

@class AWEPOIDetailNGUgcQAComponentViewModel, AWEPOIDetailFeedUgcQaFloatingView;

@interface AWEPOIDetailNGUgcQAComponentView : DitoComponentView {
    AWEPOIDetailFeedUgcQaFloatingView *_ugcQaView;
    AWEPOIDetailNGUgcQAComponentViewModel *_vm;
}

@property (retain, nonatomic) AWEPOIDetailFeedUgcQaFloatingView *ugcQaView;
@property (retain, nonatomic) AWEPOIDetailNGUgcQAComponentViewModel *vm;

- (void)updateViewModel:(id)arg0;
- (id)vm;
- (void)setVm:(id)arg0;
- (void)bindActionAndState;
- (id)ugcQaView;
- (void)setUgcQaView:(id)arg0;
- (void)updateQAViewPositionIfNeed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;

@end
