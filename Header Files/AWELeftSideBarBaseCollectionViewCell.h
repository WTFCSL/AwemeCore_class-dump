//
//     Generated by private class-dump
//

@class AWELeftSideBarItemModel, UIView;
@protocol AWELeftSideBarBaseCollectionViewCellDelegate;

@interface AWELeftSideBarBaseCollectionViewCell : UICollectionViewCell {
    UIView *_containerView;
    id<AWELeftSideBarBaseCollectionViewCellDelegate> _delegate;
    AWELeftSideBarItemModel *_itemModel;
}

@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWELeftSideBarBaseCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWELeftSideBarItemModel *itemModel;

- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (BOOL)checkTouchView:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)setDelegate:(id)arg0 itemModel:(id)arg1;
- (void)updateDelegate:(id)arg0 itemModel:(id)arg1;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
