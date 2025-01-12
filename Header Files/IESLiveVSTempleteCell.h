//
//     Generated by private class-dump
//

@class UIImageView, NSIndexPath, UIView;

@interface IESLiveVSTempleteCell : UICollectionViewCell {
    unsigned long long _status;
    id /* block */ _didSelectedBlock;
    NSIndexPath *_index;
    UIImageView *_templateImageView;
    UIView *_containerView;
}

@property (retain, nonatomic) UIImageView *templateImageView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (retain, nonatomic) NSIndexPath *index;

+ (id)identifier;

- (id /* block */)didSelectedBlock;
- (void)setDidSelectedBlock:(id /* block */)arg0;
- (void)changeToStatus:(unsigned long long)arg0;
- (id)templateImageView;
- (void)setTemplateImageView:(id)arg0;
- (id)imageOfCell;
- (void)setScrollSelected:(BOOL)arg0;
- (void)setIndex:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)index;
- (void)setStatus:(unsigned long long)arg0;
- (id)containerView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)updateWithImage:(id)arg0;

@end
