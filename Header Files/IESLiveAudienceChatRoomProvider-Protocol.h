//
//     Generated by private class-dump
//

@class IESLiveIntimateChatGuestListView;
@protocol IESLiveIntimateChatLayoutMachine;

@protocol IESLiveAudienceChatRoomProvider <IESLiveChatRoomProvider>

@property (readonly, nonatomic) long long mode;
@property (nonatomic) BOOL connected;
@property (retain, nonatomic) IESLiveIntimateChatGuestListView *guestListView;
@property (retain, nonatomic) id<IESLiveIntimateChatLayoutMachine> layoutMachine;

@optional

- (id)layoutMachine;
- (void)setLayoutMachine:(id)arg0;
- (id)guestListView;
- (BOOL)couldSendToGuest;
- (void)setGuestListView:(id)arg0;
- (void)registChatRoomStatusDispatcher:(id)arg0;
- (void)changeStatus:(long long)arg0;
- (void)updateLayoutOfSessionViews:(id)arg0;
- (BOOL)couldSendToHost;
- (void)setConnected:(BOOL)arg0;
- (long long)currentStatus;
- (BOOL)connected;
- (long long)mode;

@end
