//
//     Generated by private class-dump
//

@class NSString, BDXBridgeEventSubscriber, AWELiveAppointmentAnchorView, NSNumber;

@interface AWEFeedAnchorLiveAppointmentConfig : AWEFeedAnchorBaseConfig <AWELiveAppointmentAnchorViewDeleate, IESHYControllerDelegate> {
    AWELiveAppointmentAnchorView *_anchorView;
    BDXBridgeEventSubscriber *_xBridgeSubscriber;
    NSNumber *_appointmentChangedNum;
    NSString *_videoAnchorID;
}

@property (retain, nonatomic) AWELiveAppointmentAnchorView *anchorView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *xBridgeSubscriber;
@property (retain, nonatomic) NSNumber *appointmentChangedNum;
@property (copy, nonatomic) NSString *videoAnchorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)p_enterFrom;
- (void)tapAnchor;
- (id)p_trackParams;
- (id)p_enterMethod;
- (id)xBridgeSubscriber;
- (void)setupXBridge;
- (void)setVideoAnchorID:(id)arg0;
- (long long)liveAppointmentanchorType;
- (void)setAppointmentChangedNum:(id)arg0;
- (void)p_changeReservationModelWithStatus:(BOOL)arg0 count:(long long)arg1;
- (void)setXBridgeSubscriber:(id)arg0;
- (void)p_jumpToLiveRoomWithRoomID:(id)arg0;
- (void)p_jumpToAppointmentWithExtraModel:(id)arg0 isNeedRequest:(BOOL)arg1;
- (void)requestLiveAppointment:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)appointmentChangedNum;
- (id)videoAnchorID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)anchorView;
- (void)setAnchorView:(id)arg0;

@end