//
//     Generated by private class-dump
//

@protocol AWEFamiliarRelationViewProtocol <NSObject>

+ (double)preferedWidthWithStyle:(long long)arg0;

@property (copy, nonatomic) id /* block */ didFollowBlock;
@property (copy, nonatomic) id /* block */ didUnFollowBlock;
@property (copy, nonatomic) id /* block */ didDislikeBlock;
@property (copy, nonatomic) id /* block */ didClickContactBlock;
@property (copy, nonatomic) id /* block */ didRemoveContactBlock;
@property (copy, nonatomic) id /* block */ trackExtraValuesBlock;
@property (nonatomic) long long style;

- (void)setFamiliarUser:(id)arg0 animated:(BOOL)arg1;
- (void)setTrackExtraValuesBlock:(id /* block */)arg0;
- (id)initWithStyle:(long long)arg0 isShowOnBulletScreen:(BOOL)arg1;
- (id /* block */)didClickContactBlock;
- (id /* block */)trackExtraValuesBlock;
- (id /* block */)didUnFollowBlock;
- (id /* block */)didFollowBlock;
- (id /* block */)didRemoveContactBlock;
- (id /* block */)didDislikeBlock;
- (void)setDidFollowBlock:(id /* block */)arg0;
- (void)setDidUnFollowBlock:(id /* block */)arg0;
- (void)setDidDislikeBlock:(id /* block */)arg0;
- (void)setDidClickContactBlock:(id /* block */)arg0;
- (void)setDidRemoveContactBlock:(id /* block */)arg0;
- (long long)style;
- (id)initWithStyle:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 style:(long long)arg1;
- (void)setStyle:(long long)arg0;

@end
