//
//     Generated by private class-dump
//

@class UINavigationController, NSObject, NSString, BDPUniqueID, SRWebSocket;
@protocol OS_dispatch_queue;

@interface BDPDebugServerManager : NSObject <BDPAutoTestable, SRWebSocketDelegate, BDPDebugServerNoticeViewDelegate> {
    SRWebSocket *_socket;
    NSObject<OS_dispatch_queue> *_gcdQueue;
    double _connectTime;
    BDPUniqueID *_uniqueID;
    UINavigationController *_topNavi;
}

@property (nonatomic) double connectTime;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UINavigationController *topNavi;
@property (readonly, nonatomic) SRWebSocket *socket;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *gcdQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)registerSchema;
+ (id)sharedInstance;

- (void)setConnectTime:(double)arg0;
- (BOOL)autoTestWithParam:(id)arg0;
- (void)webSocket:(id)arg0 didReceiveMessage:(id)arg1;
- (void)webSocketDidOpen:(id)arg0;
- (void)webSocket:(id)arg0 didFailWithError:(id)arg1;
- (void)webSocket:(id)arg0 didCloseWithCode:(long long)arg1 reason:(id)arg2 wasClean:(BOOL)arg3;
- (void)setTopNavi:(id)arg0;
- (id)topNavi;
- (id)gcdQueue;
- (void)send_ide:(unsigned long long)arg0 to:(id)arg1;
- (void)recv_phone:(id)arg0;
- (void)onOKButtonClicked:(id)arg0;
- (void)onCancelButtonClicked;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)close;
- (id)socket;
- (double)connectTime;

@end