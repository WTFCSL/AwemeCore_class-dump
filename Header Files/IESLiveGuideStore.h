//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveCommonGuideModel, NSString;
@protocol IESLiveRoomService;

@interface IESLiveGuideStore : NSObject <IESLiveCommonGuideActions, HTSLiveMessageSubscriber> {
    BOOL _showGuide;
    id<IESLiveRoomService> _roomModel;
    HTSEventContext *_eventContext;
    IESLiveCommonGuideModel *_guideModel;
}

@property (nonatomic) BOOL showGuide;
@property (retain, nonatomic) IESLiveCommonGuideModel *guideModel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (id)roomModel;
- (void)didSetAttachingDIContext;
- (void)setEventContext:(id)arg0;
- (BOOL)showGuide;
- (void)setShowGuide:(BOOL)arg0;
- (void)setRoomModel:(id)arg0;
- (void)showGuideView:(id)arg0;
- (void)clickGuideButton:(id)arg0;
- (void)guestApplyGuideViewShow:(id)arg0;
- (void)prepareDataFromModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)eventContext;
- (void)messageReceived:(id)arg0;

@end
