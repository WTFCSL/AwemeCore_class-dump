//
//     Generated by private class-dump
//

@class NSString, NSMapTable;
@protocol IESLCMessageHandlerProtocol;

@interface AWEProfileLongConnectionManager : NSObject <IESLCMessageHandlerService> {
    NSMapTable *_profileHandlerMap;
}

@property (retain, nonatomic) NSMapTable *profileHandlerMap;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bizHandlerClzNameStaticRegisterDic;
+ (id)sharedInstance;

- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (void)setProfileHandlerMap:(id)arg0;
- (void)addHandlerForStaticRegister;
- (void)fetchShortLinkPackageDataForBizIds:(id)arg0 isColdLaunch:(BOOL)arg1;
- (id)profileHandlerMap;
- (void)p_handleProfileMessagePayloadModel:(id)arg0 eventParams:(id)arg1;
- (void)addWeakProfileHandler:(id)arg0 forBizId:(id)arg1;
- (void)p_handleProfileMessageData:(id)arg0 eventParams:(id)arg1;
- (void)fetchShortLinkPackageDataForBizIds:(id)arg0;
- (void)addWeakProfileHandler:(id)arg0 forBizIds:(id)arg1;
- (void)removeProfileHandlerForBizId:(id)arg0;
- (BOOL)sendProfileLCMessageCell:(id)arg0 forBizId:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
