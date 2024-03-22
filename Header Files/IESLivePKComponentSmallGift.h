//
//     Generated by private class-dump
//

@class UIView;
@protocol IESLiveSubscription;

@interface IESLivePKComponentSmallGift : IESLivePKComponent {
    UIView *_smallGiftConatiner;
    id<IESLiveSubscription> _oppositeGuestSubscription;
}

@property (retain, nonatomic) UIView *smallGiftConatiner;
@property (retain, nonatomic) id<IESLiveSubscription> oppositeGuestSubscription;

- (void)didSetAttachingDIContext;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)observeOppositeGuest;
- (id)oppositeGuestSubscription;
- (void)setOppositeGuestSubscription:(id)arg0;
- (void)loadSmallGiftContainer;
- (BOOL)profileViewUseSimpleMode;
- (id)smallGiftConatiner;
- (void)setSmallGiftConatiner:(id)arg0;
- (void).cxx_destruct;
- (void)clean;

@end