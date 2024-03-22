//
//     Generated by private class-dump
//

@class NSString, AFDHoverableContainerView, AFDLongPressContext;
@protocol AFDLongPressDynamicDurationProtocol;

@protocol AWEAwemeLongPressModalViewControllerProtocol <NSObject>

@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, weak) id<AFDLongPressDynamicDurationProtocol> interactionPanelTarget;
@property (nonatomic) struct CGPoint { double x0; double x1; } wakePosition;
@property (nonatomic) BOOL disableImpactFeedback;
@property (nonatomic, retain) AFDHoverableContainerView *contentView;
@property (nonatomic, readonly) AFDLongPressContext *context;

- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (void)configWithFucntionModels:(id)arg0;
- (void)configWithFucntionModels:(id)arg0;
- (id)interactionPanelTarget;
- (void)setInteractionPanelTarget:(id)arg0;
- (struct CGPoint { double x0; double x1; })wakePosition;
- (void)setWakePosition:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)disableImpactFeedback;
- (void)setDisableImpactFeedback:(BOOL)arg0;
- (id)initWithTriggerBlock:(id /* block */)arg0 dismissBlock:(id /* block */)arg1 referString:(id)arg2;
- (id)initWithTriggerBlock:(id /* block */)arg0 dismissBlock:(id /* block */)arg1 referString:(id)arg2;
- (void)configWithFucntionModels:(id)arg0 aweme:(id)arg1;
- (void)configWithFucntionModels:(id)arg0 aweme:(id)arg1;
- (void)updateWithReasonModels:(id)arg0;
- (void)updateWithReasonModels:(id)arg0;
- (void)unfoldDislikeModelWithInsertModels:(id)arg0;
- (void)unfoldDislikeModelWithInsertModels:(id)arg0;
- (void)unfoldDislikeReasonsListWithModels:(id)arg0 aweme:(id)arg1;
- (void)unfoldDislikeReasonsListWithModels:(id)arg0 aweme:(id)arg1;
- (void)unfoldDislikeReasonsList;
- (void)dismissByPan:(id)arg0;
- (void)dismissByPan:(id)arg0;
- (id)longPressContext;
- (void)showSpeedControl;
- (void)toggleDislikeReasonList:(BOOL)arg0;
- (void)showOnView:(id)arg0;
- (void)showOnView:(id)arg0;
- (BOOL)isAnimating;
- (void)dismissAnimated:(BOOL)arg0;
- (void)dismissAnimated:(BOOL)arg0;
- (BOOL)isShowing;
- (id)contentView;
- (id)context;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setContentView:(id)arg0;

@end
