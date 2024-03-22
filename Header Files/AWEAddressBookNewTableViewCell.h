//
//     Generated by private class-dump
//

@class AWEUserButtonStateMachine, AWEUserModel, NSString, AWEBinding, NSDictionary, AWEUserRecommendBaseCellView, UIButton;
@protocol AWEAddressBookNewCellDelegate;

@interface AWEAddressBookNewTableViewCell : UITableViewCell <AWEUserMessage, BDStateMachineDelegate> {
    id<AWEAddressBookNewCellDelegate> _cellDelegate;
    AWEUserModel *_user;
    NSString *_source;
    NSDictionary *_trackDict;
    AWEUserRecommendBaseCellView *_baseView;
    UIButton *_editAliasButton;
    AWEBinding *_enableEditAliasBinding;
    AWEUserButtonStateMachine *_stateMachine;
}

@property (retain, nonatomic) AWEUserRecommendBaseCellView *baseView;
@property (retain, nonatomic) UIButton *editAliasButton;
@property (retain, nonatomic) AWEBinding *enableEditAliasBinding;
@property (retain, nonatomic) AWEUserButtonStateMachine *stateMachine;
@property (weak, nonatomic) id<AWEAddressBookNewCellDelegate> cellDelegate;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)suggestedHeight;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)configWithUser:(id)arg0;
- (void)setTrackDict:(id)arg0;
- (id)trackDict;
- (void)p_setupUI;
- (id)editAliasButton;
- (void)setEditAliasButton:(id)arg0;
- (void)p_clickDislikeButton:(id)arg0;
- (void)setupFollowButton:(id)arg0;
- (void)refreshEditAliasButtonAnimated:(BOOL)arg0;
- (void)refreshFollowStatusAnimated:(BOOL)arg0;
- (id)p_getUserDisplayName;
- (id)enableEditAliasBinding;
- (void)setEnableEditAliasBinding:(id)arg0;
- (void)p_clickEditAliasButton:(id)arg0;
- (void)stateMachine:(id)arg0 transition:(id)arg1 didLeaveFromState:(id)arg2 didEnterState:(id)arg3 event:(id)arg4;
- (void)setUser:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)user;
- (id)source;
- (id)stateMachine;
- (void).cxx_destruct;
- (id)baseView;
- (void)setStateMachine:(id)arg0;
- (void)setBaseView:(id)arg0;
- (void)setSource:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg0;
- (void)updateAccessibilityElements;

@end
