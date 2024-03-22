//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveAnnouncementService, IESLivePiperProtocol;

@interface IESLiveAnchorTimeScheduleJSBHandler : NSObject <IESLivePiperHandlerProtocol> {
    id<IESLiveAnnouncementService> _announcementService;
    id<IESLivePiperProtocol> _piper;
}

@property (retain, nonatomic) id<IESLiveAnnouncementService> announcementService;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)piper;
- (void)registerHandlerWithBridge:(id)arg0;
- (void)setPiper:(id)arg0;
- (id)announcementService;
- (void)setAnnouncementService:(id)arg0;
- (void).cxx_destruct;

@end