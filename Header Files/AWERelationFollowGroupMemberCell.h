//
//     Generated by private class-dump
//

@class NSString, AWEAliasEditLabel, AWEUserModel, UIButton;

@interface AWERelationFollowGroupMemberCell : AWEUIListTableViewCell <AWERelationFollowGroupCellUIUpdateProtocol> {
    BOOL _hideMoreBtn;
    BOOL _isSpecialGroup;
    id /* block */ _moreIconTapAction;
    id /* block */ _followButtonTapAction;
    AWEAliasEditLabel *_nameLabel;
    UIButton *_moreButton;
    AWEUserModel *_userModel;
}

@property (retain, nonatomic) AWEAliasEditLabel *nameLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ moreIconTapAction;
@property (copy, nonatomic) id /* block */ followButtonTapAction;
@property (nonatomic) BOOL hideMoreBtn;
@property (nonatomic) BOOL isSpecialGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__defaultImage;
+ (id)defaultStyleIdentifier;

- (void)configCell:(id)arg0;
- (void)setMoreIconTapAction:(id /* block */)arg0;
- (id /* block */)moreIconTapAction;
- (void)__moreButtonClicked;
- (id)followButtonColorModel;
- (void)refreshFollowBtnUI;
- (id /* block */)followButtonTapAction;
- (BOOL)hideMoreBtn;
- (void)hideRightActionArea;
- (BOOL)isSpecialGroup;
- (id)moreButtonTargetView;
- (void)setFollowButtonTapAction:(id /* block */)arg0;
- (void)setHideMoreBtn:(BOOL)arg0;
- (void)setIsSpecialGroup:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)updateLabel;
- (void).cxx_destruct;
- (id)moreButton;
- (void)setMoreButton:(id)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;

@end