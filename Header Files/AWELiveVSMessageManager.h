//
//     Generated by private class-dump
//

@class NSString, NSHashTable, NSNumber, AWELiveVSMessageActionCreator;

@interface AWELiveVSMessageManager : NSObject <AWELiveVSMessageService> {
    NSHashTable *_subscribersForAll;
    NSNumber *_roomID;
    AWELiveVSMessageActionCreator *_messageActionCreator;
}

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) AWELiveVSMessageActionCreator *messageActionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribersForAll;
- (void)setSubscribersForAll:(id)arg0;
- (void)setMessageActionCreator:(id)arg0;
- (id)messageActionCreator;
- (void)enumerate:(id)arg0 sendMessage:(id)arg1 withDict:(id)arg2;
- (void)uninstallMessageChannel;
- (void)stopAndResetMessage;
- (void)installVSMessageWithRoomID:(id)arg0 channelType:(unsigned long long)arg1;
- (void)startMessageIfNeed:(unsigned long long)arg0;
- (void)loadNewMessageActionCreator:(unsigned long long)arg0;
- (void)installVSMessageWithRoomID:(id)arg0;
- (void)addVSProgrammeMessageubscrber:(id)arg0;
- (void)removeVSProgrammeMessageSubscrber:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
