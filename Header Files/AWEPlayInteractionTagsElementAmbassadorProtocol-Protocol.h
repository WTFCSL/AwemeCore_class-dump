//
//     Generated by private class-dump
//

@class UIView;
@protocol AFDPlayInteractionTagsContainerViewProtocol, AWEPlayInteractionTagsElementAmbassadorDelegate;

@protocol AWEPlayInteractionTagsElementAmbassadorProtocol <NSObject>

@property (weak, nonatomic) id<AWEPlayInteractionTagsElementAmbassadorDelegate> delegate;
@property (retain, nonatomic) UIView<AFDPlayInteractionTagsContainerViewProtocol> *containerView;

- (BOOL)canShowContainerView;
- (void)updateContainerView;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;

@end
