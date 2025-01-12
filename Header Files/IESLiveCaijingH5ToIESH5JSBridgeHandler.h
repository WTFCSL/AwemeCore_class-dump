//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESLiveCaijingH5ToIESH5JSBridgeHandler : NSObject <IESLivePiperHandlerProtocol> {
    BOOL _hasAddNotifications;
    NSDictionary *_h5ToH5Message;
}

@property (nonatomic) BOOL hasAddNotifications;
@property (copy, nonatomic) NSDictionary *h5ToH5Message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (id)h5ToH5Message;
- (void)setH5ToH5Message:(id)arg0;
- (BOOL)hasAddNotifications;
- (void)addCaijingNotificationObserver;
- (void)p_caijingNotification:(id)arg0;
- (void)setHasAddNotifications:(BOOL)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
