//
//     Generated by private class-dump
//

@class NSString, IESECXBridgeEventSubscriber;
@protocol IESECGoodsDetailLiveFloatOnTop;

@interface IESECRelationLiveMiniWindowController : IESECRelationController <IESECRelationLiveMiniWindowControllerProtocol> {
    BOOL _installMute;
    unsigned long long liveMiniWindowType;
    id<IESECGoodsDetailLiveFloatOnTop> _liveMiniWindow;
    NSString *_roomID;
    NSString *_clickTransferURL;
    IESECXBridgeEventSubscriber *_subscriber;
}

@property (nonatomic) unsigned long long liveMiniWindowType;
@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveMiniWindow;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *clickTransferURL;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL installMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLiveClickClose;

- (void)resumeSmallWindowStream;
- (void)setLiveMiniWindow:(id)arg0;
- (id)liveMiniWindow;
- (BOOL)attachLiveMiniWindow;
- (BOOL)detachLiveMiniWindow;
- (void)muteLiveMiniWindow:(BOOL)arg0;
- (void)subscribeXBridgeEvent;
- (void)UIApplicationWillResignActiveNotification;
- (void)UIApplicationDidBecomeActiveNotification;
- (void)setupBaseBinding;
- (void)setLiveMiniWindowType:(unsigned long long)arg0;
- (BOOL)installMute;
- (BOOL)p_shouldReuseRoomPlayer;
- (void)setClickTransferURL:(id)arg0;
- (id)clickTransferURL;
- (void)p_setLiveMiniWindowActionBlockWithTransferURL:(id)arg0;
- (double)p_liveMiniWindowTopOffset;
- (BOOL)recordMiniWindowSession;
- (void)p_tapMiniLiveWindow:(id)arg0;
- (id)currentActiveRoomID;
- (unsigned long long)liveMiniWindowType;
- (void)setupLiveMiniWindowOn:(id)arg0 fromLive:(BOOL)arg1 roomID:(id)arg2 tag:(id)arg3 transferURL:(id)arg4 logExtra:(id)arg5;
- (void)setInstallMute:(BOOL)arg0;
- (void).cxx_destruct;
- (id)subscriber;
- (void)dealloc;
- (void)viewDidLoad;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setSubscriber:(id)arg0;

@end
