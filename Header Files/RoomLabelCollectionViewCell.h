//
//     Generated by private class-dump
//

@class IESLiveAction, UILabel, NSIndexPath, UIButton;
@protocol RoomLabelCollectionViewCellDelegate;

@interface RoomLabelCollectionViewCell : UICollectionViewCell {
    NSIndexPath *_indexPath;
    IESLiveAction *_deleteAction;
    id<RoomLabelCollectionViewCellDelegate> _delegate;
    UIButton *_closeButton;
    UILabel *_label;
}

@property (weak, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) UILabel *label;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) IESLiveAction *deleteAction;
@property (weak, nonatomic) id<RoomLabelCollectionViewCellDelegate> delegate;

- (void)updateWithRoomIntroLabel:(id)arg0;
- (void)didTouchDeleteAction:(id)arg0;
- (void).cxx_destruct;
- (id)deleteAction;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setIndexPath:(id)arg0;
- (void)setLabel:(id)arg0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)indexPath;
- (id)delegate;
- (id)label;
- (void)setDelegate:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setDeleteAction:(id)arg0;

@end