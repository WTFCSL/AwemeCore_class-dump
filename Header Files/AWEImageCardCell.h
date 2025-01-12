//
//     Generated by private class-dump
//

@class NSIndexPath, NSString, UIImageView, UIView, AWECardModel, AWECardContext;

@interface AWEImageCardCell : UICollectionViewCell <AWECollectionViewCellProtocol> {
    NSIndexPath *_indexPath;
    BOOL _selected;
    id /* block */ cellDidSelected;
    AWECardModel *_model;
    AWECardContext *_context;
    UIImageView *_imageView;
    UIView *_containerView;
}

@property (retain, nonatomic) AWECardModel *model;
@property (retain, nonatomic) AWECardContext *context;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ cellDidSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)buildUI;
- (void)setData:(id)arg0 extraInfo:(id)arg1;
- (id /* block */)cellDidSelected;
- (void)setCellDidSelected:(id /* block */)arg0;
- (void)addGestureRecognizers;
- (void)itemDeselected;
- (void)bindObservierWithContext:(id)arg0;
- (void)itemSelectedAnimated;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setIndexPath:(id)arg0;
- (id)imageView;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)indexPath;
- (void)setImageView:(id)arg0;
- (id)containerView;
- (void)setSelected:(BOOL)arg0;
- (id)context;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)isSelected;
- (void)itemSelected;
- (void)singleTap;

@end
