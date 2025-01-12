//
//     Generated by private class-dump
//

@class AWEPlayInteractionLikeElement, UIView;
@protocol AWEPlayInteractionLikeViewDelegate;

@protocol AWEPlayInteractionLikeViewSubElementProtocol <NSObject>

@property (weak, nonatomic) id<AWEPlayInteractionLikeViewDelegate> delegate;
@property (readonly, weak, nonatomic) AWEPlayInteractionLikeElement *element;
@property (readonly, nonatomic) UIView *contentView;

- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (id)initWithContainerElement:(id)arg0;
- (void)updateFestivalLikeButton;
- (void)setData:(id)arg0;
- (id)element;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)updateUI;
- (void)addToParentView:(id)arg0;

@optional

- (void)playSuperLikeAnimationFromDigged;
- (void)updateForNewMask;
- (void)updateElementLabelShadow;

@end
