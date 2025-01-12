//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface BDECIMCloudRegisterTIMXDDBridge : NSObject <TIMXAppMessageInsertPluginProtocol, TIMXStatisticProtocol> {
    NSDictionary *_coreBridgeDict;
}

@property (copy) NSDictionary *coreBridgeDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)coreBridgeDict;
- (void)processMessages:(id)arg0;
- (BOOL)filterMessage:(id)arg0 reason:(id)arg1;
- (void)dealMessageWhenWebsocketArrive:(id)arg0;
- (BOOL)filterMessage:(id)arg0;
- (void)pullerInsertNewMessages:(id)arg0 reason:(id)arg1 context:(id)arg2;
- (void)didReceiveTimestamp:(id)arg0;
- (void)setCoreBridgeDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
