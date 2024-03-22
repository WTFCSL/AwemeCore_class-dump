//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol AFDPlayInteractionTagsContainerViewProtocol, AWEPlayInteractionTagsElementAmbassadorDelegate;

@interface AWEPlayInteractionTagsElementAmbassador : AFDAmbassador <AWEPlayInteractionTagsElementAmbassadorProtocol> {
    id<AWEPlayInteractionTagsElementAmbassadorDelegate> _delegate;
    UIView<AFDPlayInteractionTagsContainerViewProtocol> *_containerView;
}

@property (weak, nonatomic) id<AWEPlayInteractionTagsElementAmbassadorDelegate> delegate;
@property (retain, nonatomic) UIView<AFDPlayInteractionTagsContainerViewProtocol> *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowCommentPanel:(id)arg0;
- (void)showCommentPanelWithInsertIds:(id)arg0 enterMethod:(id)arg1;
- (BOOL)canShowContainerView;
- (void)updateContainerView;
- (void).cxx_destruct;
- (id)model;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;

@end