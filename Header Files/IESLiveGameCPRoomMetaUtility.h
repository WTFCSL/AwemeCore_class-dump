//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameCPRoomMetaUtility : NSObject <HTSLiveMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestRoomMeta;
- (id)roomMetaInterface;
- (void)observerRoomMetaMessage;
- (id)convertFromUserRoomMetaMessage:(id)arg0;
- (void)messageReceived:(id)arg0;

@end
