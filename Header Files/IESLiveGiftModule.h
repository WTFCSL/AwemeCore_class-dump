//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveGiftFullLinkMonitor, IESLiveFaceGiftExternalMgrRouter;

@interface IESLiveGiftModule : IESLiveModule <IESLiveGiftModule> {
    id<IESLiveFaceGiftExternalMgrRouter> _faceGiftExternalMgrRouter;
    id<IESLiveGiftFullLinkMonitor> _fullLinkMonitor;
}

@property (retain, nonatomic) id<IESLiveFaceGiftExternalMgrRouter> faceGiftExternalMgrRouter;
@property (retain, nonatomic) id<IESLiveGiftFullLinkMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (id)giftManagerInterface;
- (id)giftInterface;
- (id)vsGiftInterface;
- (id)voteInterface;
- (id)speedGiftInterface;
- (id)giftAnimationInterface;
- (id)giveGiftInterface;
- (id)dynamicGiftInterface;
- (id)giftRecipientInterface;
- (Class)giftABManager;
- (id)alphaVideoPlayerInterface;
- (id)faceGiftExternalInterface;
- (id)giftDataInterface;
- (id)interactiveGiftInterface;
- (id)faceGiftExternalMgrRouter;
- (void)setFaceGiftExternalMgrRouter:(id)arg0;
- (void).cxx_destruct;

@end
