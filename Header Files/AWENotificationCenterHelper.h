//
//     Generated by private class-dump
//

@interface AWENotificationCenterHelper : NSObject {
    id /* block */ _receivedBlock;
}

@property (copy, nonatomic) id /* block */ receivedBlock;

- (void)receiveNotification:(id)arg0;
- (id /* block */)receivedBlock;
- (void)observeNotifcationName:(id)arg0;
- (void)setReceivedBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end