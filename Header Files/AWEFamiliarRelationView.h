//
//     Generated by private class-dump
//

@class NSString, AWEAnimatedButton, AWEUserModel;

@interface AWEFamiliarRelationView : UIView <AWEFamiliarRelationViewProtocol> {
    BOOL _isShowOnBulletScreen;
    id /* block */ trackExtraValuesBlock;
    long long _style;
    id /* block */ _didFollowBlock;
    id /* block */ _didUnFollowBlock;
    id /* block */ _didDislikeBlock;
    id /* block */ _didClickContactBlock;
    id /* block */ _didRemoveContactBlock;
    AWEAnimatedButton *_relationButton;
    AWEAnimatedButton *_dislikeButton;
    AWEUserModel *_user;
}

@property (retain, nonatomic) AWEAnimatedButton *relationButton;
@property (retain, nonatomic) AWEAnimatedButton *dislikeButton;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isShowOnBulletScreen;
@property (copy, nonatomic) id /* block */ didFollowBlock;
@property (copy, nonatomic) id /* block */ didUnFollowBlock;
@property (copy, nonatomic) id /* block */ didDislikeBlock;
@property (copy, nonatomic) id /* block */ didClickContactBlock;
@property (copy, nonatomic) id /* block */ didRemoveContactBlock;
@property (copy, nonatomic) id /* block */ trackExtraValuesBlock;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferedWidthWithStyle:(long long)arg0;
+ (double)preferedButtonWidthWithStyle:(long long)arg0;

- (id)dislikeButton;
- (void)setDislikeButton:(id)arg0;
- (void)p_setupUI;
- (void)setFamiliarUser:(id)arg0 animated:(BOOL)arg1;
- (void)setTrackExtraValuesBlock:(id /* block */)arg0;
- (id)initWithStyle:(long long)arg0 isShowOnBulletScreen:(BOOL)arg1;
- (id)relationButton;
- (void)p_refreshUIAnimated:(BOOL)arg0;
- (BOOL)isShowOnBulletScreen;
- (id /* block */)didClickContactBlock;
- (id /* block */)trackExtraValuesBlock;
- (void)trackWithFollowStatus:(BOOL)arg0;
- (id /* block */)didUnFollowBlock;
- (id /* block */)didFollowBlock;
- (id /* block */)didRemoveContactBlock;
- (void)trackDislike;
- (id /* block */)didDislikeBlock;
- (void)p_didClickRelationBtn:(id)arg0;
- (void)p_didClickDislikeBtn:(id)arg0;
- (void)setDidFollowBlock:(id /* block */)arg0;
- (void)setDidUnFollowBlock:(id /* block */)arg0;
- (void)setDidDislikeBlock:(id /* block */)arg0;
- (void)setDidClickContactBlock:(id /* block */)arg0;
- (void)setDidRemoveContactBlock:(id /* block */)arg0;
- (void)setRelationButton:(id)arg0;
- (void)setIsShowOnBulletScreen:(BOOL)arg0;
- (void)setUser:(id)arg0;
- (long long)style;
- (id)user;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 style:(long long)arg1;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg0;

@end
