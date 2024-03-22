//
//     Generated by private class-dump
//

@class AWEUserModel, NSString, UILabel, UIView, UIButton;
@protocol AWEProfileMenuHorizontalHeaderDelegate;

@interface AWEProfileMenuHorizontalHeader : UICollectionReusableView {
    BOOL _showEditAlias;
    id<AWEProfileMenuHorizontalHeaderDelegate> _delegate;
    UIView *_containerView;
    UILabel *_nameLabel;
    UIButton *_entryBtn;
    UILabel *_descriptionLabel;
    UIView *_replicateIconView;
    UIButton *_cancelButton;
    UIButton *_editRemarkButton;
    AWEUserModel *_user;
    id /* block */ _dismissBlock;
    NSString *_enterFrom;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *entryBtn;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *replicateIconView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *editRemarkButton;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL showEditAlias;
@property (weak, nonatomic) id<AWEProfileMenuHorizontalHeaderDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)aAWEPadModuleAdapter;
- (void)__setupUI;
- (void)setShowEditAlias:(BOOL)arg0;
- (void)__configText;
- (id)entryBtn;
- (BOOL)__canCopyIdStr;
- (id)replicateIconView;
- (BOOL)showEditAlias;
- (id)editRemarkButton;
- (id)__idStr;
- (void)__entryBtnClicked;
- (void)__idStringTapped;
- (void)__replicateIconTapped;
- (void)editRemarkButtonClicked;
- (void)configWithUser:(id)arg0 showEditAlias:(BOOL)arg1 enterFrom:(id)arg2 dismissBlock:(id /* block */)arg3;
- (void)setEntryBtn:(id)arg0;
- (void)setReplicateIconView:(id)arg0;
- (void)setEditRemarkButton:(id)arg0;
- (void)setUser:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setDescriptionLabel:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)descriptionLabel;
- (id)delegate;
- (id)containerView;
- (id)nameLabel;
- (void)setDelegate:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)cancelButtonTapped;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
