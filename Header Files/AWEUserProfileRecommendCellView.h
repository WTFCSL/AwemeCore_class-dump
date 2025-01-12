//
//     Generated by private class-dump
//

@class UIButton, AWEBinding, AWERelationReasonUserLite;
@protocol AWEUserProfileRecommendCellViewDelegate;

@interface AWEUserProfileRecommendCellView : AWEUserRecommendBaseCellView {
    id<AWEUserProfileRecommendCellViewDelegate> _delegate;
    AWERelationReasonUserLite *_liteUser;
    UIButton *_editAliasButton;
    AWEBinding *_enableEditAliasBinding;
    AWEBinding *_followStatusBinding;
    AWEBinding *_aliasBinding;
    AWEBinding *_followerStatusBinding;
}

@property (retain, nonatomic) UIButton *editAliasButton;
@property (retain, nonatomic) AWEBinding *enableEditAliasBinding;
@property (retain, nonatomic) AWEBinding *followStatusBinding;
@property (retain, nonatomic) AWEBinding *aliasBinding;
@property (retain, nonatomic) AWEBinding *followerStatusBinding;
@property (weak, nonatomic) id<AWEUserProfileRecommendCellViewDelegate> delegate;
@property (retain, nonatomic) AWERelationReasonUserLite *liteUser;

- (void)p_setupUI;
- (id)editAliasButton;
- (void)setEditAliasButton:(id)arg0;
- (void)refreshEditAliasButtonAnimated:(BOOL)arg0;
- (void)refreshFollowStatusAnimated:(BOOL)arg0;
- (id)p_getUserDisplayName;
- (id)enableEditAliasBinding;
- (void)setEnableEditAliasBinding:(id)arg0;
- (void)p_clickEditAliasButton:(id)arg0;
- (void)p_clickFollowButton:(id)arg0;
- (id)followStatusBinding;
- (void)setFollowStatusBinding:(id)arg0;
- (id)followerStatusBinding;
- (void)setFollowerStatusBinding:(id)arg0;
- (void)setLiteUser:(id)arg0;
- (id)aliasBinding;
- (void)setAliasBinding:(id)arg0;
- (id)liteUser;
- (void)configWithLiteUser:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 layout:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)updateAccessibilityElements;

@end
