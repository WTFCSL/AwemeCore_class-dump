//
//     Generated by private class-dump
//

@class NSString, ByteRTCRoom;

@interface TTAirPlayMessageSender : NSObject <TTAirPlayMessageSenderProtocol> {
    ByteRTCRoom *_room;
    NSString *_userID;
}

@property (weak, nonatomic) ByteRTCRoom *room;
@property (copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRTCRoom:(id)arg0 podUserID:(id)arg1;
- (void)sendDicByDataChannel:(id)arg0;
- (void)sendByDataChannel:(id)arg0;
- (void)sendDataByDataChannel:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;

@end
