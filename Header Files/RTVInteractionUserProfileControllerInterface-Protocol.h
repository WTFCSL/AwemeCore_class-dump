//
//     Generated by private class-dump
//

@protocol RTVInteractionUserProfileControllerDelegate;

@protocol RTVInteractionUserProfileControllerInterface <NSObject>

@property (weak, nonatomic) id<RTVInteractionUserProfileControllerDelegate> delegate;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (id)showUserPannel:(id)arg0;
- (id)showUserProfileViewOnViewController:(id)arg0;
- (id)dismissUserProfileView;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end