//
//     Generated by private class-dump
//

@class HTSEventContext, NSMutableDictionary, IESLiveMultiInteractUserService, NSDictionary;
@protocol IESLiveChatRoomTrackerContext;

@interface IESLiveChatRoomTracker : NSObject {
    id<IESLiveChatRoomTrackerContext> _context;
    IESLiveMultiInteractUserService *_userService;
    unsigned long long _scene;
    NSMutableDictionary *_commonParams;
    HTSEventContext *_trackContext;
}

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSMutableDictionary *commonParams;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveChatRoomTrackerContext> context;
@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (readonly, copy, nonatomic) NSDictionary *commonParamDict;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setCommonParams:(id)arg0;
- (id)commonParams;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)trackWithEventName:(id)arg0;
- (void)trackWithEventName:(id)arg0 andExtParams:(id)arg1;
- (void)trackCustomWithEventName:(id)arg0;
- (void)setupCommonParams;
- (void)packageAudienceBuildParamsWithExtra:(id)arg0;
- (void)addCommonConnectParams;
- (long long)fullSeatCount;
- (id)initWithInteractiveScene:(unsigned long long)arg0 eventContext:(id)arg1;
- (void)livesdk_guest_connection_apply;
- (void)livesdk_guest_connection_success;
- (void)livesdk_guest_connection_over;
- (void)livesdk_anchor_audience_connection_over;
- (void)livesdk_audience_connection_user_camera_open_click;
- (id)commonParamDict;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (unsigned long long)scene;

@end
