//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePublicScreenAPIImpl : NSObject <IESLivePublicScreenAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportRoomEventWithEventReportModel:(id)arg0;
- (void)fetchNextLoadmoreMessagesWithRoomID:(id)arg0 cursor:(id)arg1 count:(id)arg2 completion:(id /* block */)arg3;
- (void)getReplyTreeListWithRoomID:(id)arg0 messageID:(id)arg1 replyID:(id)arg2 guide:(id)arg3 count:(id)arg4 completion:(id /* block */)arg5;
- (void)getMessageOperateStatusWithMsgID:(long long)arg0 completion:(id /* block */)arg1;
- (void)updateMessageOperateStatusWithMsgID:(long long)arg0 actionType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)reportMessageFeaturedAreaStatus:(BOOL)arg0;

@end