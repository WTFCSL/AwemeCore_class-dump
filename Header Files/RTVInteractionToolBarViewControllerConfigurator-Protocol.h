//
//     Generated by private class-dump
//

@class NSString;

@protocol RTVInteractionToolBarViewControllerConfigurator <RTVXRControllerInterface>

@property (readonly, nonatomic) BOOL isNewStyle;
@property (readonly, nonatomic) BOOL needShareIcon;
@property (readonly, nonatomic) BOOL shouldShowInviteIcon;
@property (readonly, copy, nonatomic) NSString *invitationTips;

- (BOOL)isNewStyle;
- (id)castImageName;
- (id)customDataBuilderForBizType:(long long)arg0;
- (BOOL)needShareIcon;
- (BOOL)shouldShowInviteIcon;
- (id)invitationTips;

@end