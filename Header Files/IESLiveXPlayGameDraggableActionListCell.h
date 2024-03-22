//
//     Generated by private class-dump
//

@class IESGCPXPlayDraggableViewAction, NSString, UIImageView, UILabel;

@interface IESLiveXPlayGameDraggableActionListCell : UICollectionViewCell <IESGCPXPlayDraggableViewActionListCellProtocol> {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    IESGCPXPlayDraggableViewAction *_action;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESGCPXPlayDraggableViewAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)widthWithTitle:(id)arg0;

- (void)bindAction:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (void)setTitleLabel:(id)arg0;

@end