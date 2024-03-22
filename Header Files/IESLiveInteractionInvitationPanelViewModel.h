//
//     Generated by private class-dump
//

@class UIColor, NSArray, NSString, IESLiveGCDTimer, UIImage, NSNumber, NSAttributedString;
@protocol IESLiveRoomService;

@interface IESLiveInteractionInvitationPanelViewModel : NSObject {
    long long _panelDisplayDurationInSeconds;
    NSNumber *_panelDisplayRemainSeconds;
    NSArray *_avatarURLs;
    UIImage *_defaultAvatarImage;
    NSString *_avatarBottomRightDecorationURL;
    UIImage *_defaultAvatarBottomRightDecorationImage;
    NSArray *_avatarBackgroundAnimationURLs;
    NSString *_invitationDescription;
    NSAttributedString *_attributedInvitationDescription;
    NSString *_leftButtonText;
    UIColor *_leftButtonBackgroundColor;
    UIColor *_leftButtonTextColor;
    NSString *_rightButtonText;
    UIColor *_rightButtonBackgroundColor;
    UIColor *_rightButtonTextColor;
    IESLiveGCDTimer *_displayCountDownTimer;
    id<IESLiveRoomService> _room;
}

@property (retain, nonatomic) IESLiveGCDTimer *displayCountDownTimer;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long panelDisplayDurationInSeconds;
@property (retain, nonatomic) NSNumber *panelDisplayRemainSeconds;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (retain, nonatomic) UIImage *defaultAvatarImage;
@property (copy, nonatomic) NSString *avatarBottomRightDecorationURL;
@property (retain, nonatomic) UIImage *defaultAvatarBottomRightDecorationImage;
@property (copy, nonatomic) NSArray *avatarBackgroundAnimationURLs;
@property (copy, nonatomic) NSString *invitationDescription;
@property (copy, nonatomic) NSAttributedString *attributedInvitationDescription;
@property (copy, nonatomic) NSString *leftButtonText;
@property (retain, nonatomic) UIColor *leftButtonBackgroundColor;
@property (retain, nonatomic) UIColor *leftButtonTextColor;
@property (copy, nonatomic) NSString *rightButtonText;
@property (retain, nonatomic) UIColor *rightButtonBackgroundColor;
@property (retain, nonatomic) UIColor *rightButtonTextColor;

- (id)defaultAvatarImage;
- (id)avatarURLs;
- (void)setAvatarURLs:(id)arg0;
- (id)leftButtonTextColor;
- (void)setLeftButtonTextColor:(id)arg0;
- (id)rightButtonTextColor;
- (void)setRightButtonTextColor:(id)arg0;
- (void)setDefaultAvatarImage:(id)arg0;
- (id)initWithDIContext:(id)arg0 room:(id)arg1;
- (void)parseFromInvitationContext:(id)arg0;
- (void)parseFromPrepareInviteContent:(id)arg0;
- (void)startDisplayCountDownTimerWithCallback:(id /* block */)arg0;
- (id)defaultAvatarBottomRightDecorationImage;
- (void)setInvitationDescription:(id)arg0;
- (id)leftButtonBackgroundColor;
- (id)rightButtonBackgroundColor;
- (id)invitationDescription;
- (id)panelDisplayRemainSeconds;
- (void)endDisplayCountDownTimer;
- (long long)panelDisplayDurationInSeconds;
- (void)setPanelDisplayRemainSeconds:(id)arg0;
- (void)setDisplayCountDownTimer:(id)arg0;
- (id)displayCountDownTimer;
- (void)setAttributedInvitationDescription:(id)arg0;
- (void)setPanelDisplayDurationInSeconds:(long long)arg0;
- (id)avatarBottomRightDecorationURL;
- (void)setAvatarBottomRightDecorationURL:(id)arg0;
- (void)setDefaultAvatarBottomRightDecorationImage:(id)arg0;
- (id)avatarBackgroundAnimationURLs;
- (void)setAvatarBackgroundAnimationURLs:(id)arg0;
- (id)attributedInvitationDescription;
- (void)setLeftButtonBackgroundColor:(id)arg0;
- (void)setRightButtonBackgroundColor:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setLeftButtonText:(id)arg0;
- (id)leftButtonText;
- (void)setRightButtonText:(id)arg0;
- (id)rightButtonText;

@end
