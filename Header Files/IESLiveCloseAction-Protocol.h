//
//     Generated by private class-dump
//

@protocol IESLiveCloseAction <NSObject>

- (void)clickCloseButton:(id)arg0;
- (void)clickCloseButton:(id)arg0 trace:(id)arg1 completion:(id /* block */)arg2;

@optional

- (BOOL)forceCloseCurrentRoom;
- (void)forceCloseRoomByMSeq;
- (void)forceCloseRoomByMediaAudit;
- (void)closeCurrentRoomByRestart;
- (void)forceCloseCurrentRoomWithTrace:(id)arg0;

@end
