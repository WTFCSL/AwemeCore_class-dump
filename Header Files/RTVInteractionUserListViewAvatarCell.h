//
//     Generated by private class-dump
//

@class RTVInteractionUserListViewAvatarCellModel, RTVInteractionAvatarView;
@protocol RTVUserProfileManagerInterface;

@interface RTVInteractionUserListViewAvatarCell : RTVInteractionUserListViewCell {
    id<RTVUserProfileManagerInterface> _profileManager;
    RTVInteractionUserListViewAvatarCellModel *_model;
    RTVInteractionAvatarView *_avatarView;
}

@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) RTVInteractionUserListViewAvatarCellModel *model;
@property (retain, nonatomic) RTVInteractionAvatarView *avatarView;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__refreshAvatarView;
- (void)__refreshTitleLabel;
- (void)setModel:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)model;
- (void)prepareForReuse;
- (id)profileManager;

@end
