//
//     Generated by private class-dump
//

@class HTSEventContext, NSString;

@interface IESLiveAudienceInteractGuestConnectionTracker : NSObject <HTSLiveRoomRemoteActions, IESLiveSocialInteractAction, IESLiveRevenueInteractAction, IESLiveInteractionLinkerServiceAction, IESLiveMultiInteractUserServiceDelegate> {
    HTSEventContext *_eventContext;
    double _guestConnectionStart;
    NSString *_functionType;
    NSString *_functionType2;
    unsigned long long _scene;
}

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) double guestConnectionStart;
@property (copy, nonatomic) NSString *functionType;
@property (copy, nonatomic) NSString *functionType2;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEventContext:(id)arg0;
- (void)didCloseLiveRoomWithDuration:(double)arg0;
- (void)trackWithEvent:(id)arg0 extra:(id)arg1;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (void)onActiveListDidChangeFrom:(id)arg0 to:(id)arg1;
- (id)initWithEventContext:(id)arg0 diContext:(id)arg1 scene:(unsigned long long)arg2;
- (void)interactionLinkerService:(id)arg0 serverUserListDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)pr_trackGuestConnectionDuration;
- (void)pr_trackGuestConnectionShow;
- (void)pr_trackGuestConnectionDurationWithFunctionType:(id)arg0 functionType2:(id)arg1;
- (void)pr_trackGuestConnectionShowWithFunctionType:(id)arg0 functionType2:(id)arg1;
- (void)trackSocialInteractEndWithScene:(unsigned long long)arg0;
- (void)trackSocialInteractStartWithScene:(unsigned long long)arg0;
- (BOOL)disableTrackSceneStartByScene:(unsigned long long)arg0;
- (BOOL)disableTrackSceneEndByScene:(unsigned long long)arg0;
- (BOOL)disableTrackListChange;
- (long long)activeListCountNeedToTrack;
- (void)setFunctionType2:(id)arg0;
- (void)setGuestConnectionStart:(double)arg0;
- (id)functionType2;
- (double)guestConnectionStart;
- (void)trackGuestConnectionFromLayoutSwitched;
- (void)trackGuestConnectionFromLayoutSwitchedFromLayout:(id)arg0 toLayout:(id)arg1;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setup;
- (id)eventContext;
- (id)functionType;
- (unsigned long long)scene;
- (void)setFunctionType:(id)arg0;

@end
