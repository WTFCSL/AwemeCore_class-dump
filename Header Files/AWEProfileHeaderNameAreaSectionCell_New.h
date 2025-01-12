//
//     Generated by private class-dump
//

@class NSString, AWERLComponentTree, AWEProfileHeaderContext, UIView;
@protocol AWEProfileHeaderNameAreaSectionCellDelegate_New;

@interface AWEProfileHeaderNameAreaSectionCell_New : UICollectionViewCell <AWERLComponentTreeDelegate> {
    id<AWEProfileHeaderNameAreaSectionCellDelegate_New> _delegate;
    AWEProfileHeaderContext *_context;
    UIView *_containerView;
    AWERLComponentTree *_componentTree;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) AWERLComponentTree *componentTree;
@property (weak, nonatomic) id<AWEProfileHeaderNameAreaSectionCellDelegate_New> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentTree:(id)arg0 changeBoundsToSize:(struct CGSize { double x0; double x1; })arg1;
- (void)profilePageDidVerticallyScrollWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)profilePageEndVerticallyScrollWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)updateTitleWithOffsetY:(double)arg0;
- (id)componentTree;
- (void)setComponentTree:(id)arg0;
- (void)configWithContext:(id)arg0 componentTree:(id)arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (id)context;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupUI;

@end
