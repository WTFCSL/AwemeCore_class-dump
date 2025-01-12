//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface IESECShopSearchStateCollectionViewCell : UICollectionViewCell <IGListBindable> {
    UILabel *_noMoreLabel;
    UILabel *_noMoreAndRecommendLabel;
    UIView *_emptyContainerView;
    UIImageView *_emptyImageView;
    UILabel *_emptyLabel;
}

@property (retain, nonatomic) UILabel *noMoreLabel;
@property (retain, nonatomic) UILabel *noMoreAndRecommendLabel;
@property (retain, nonatomic) UIView *emptyContainerView;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (void)bindViewModel:(id)arg0;
- (id)noMoreLabel;
- (void)setNoMoreLabel:(id)arg0;
- (id)emptyContainerView;
- (void)setEmptyContainerView:(id)arg0;
- (id)noMoreAndRecommendLabel;
- (void)setNoMoreAndRecommendLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setUpViews;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end
