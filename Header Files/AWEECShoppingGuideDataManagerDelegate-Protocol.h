//
//     Generated by private class-dump
//

@protocol AWEECShoppingGuideDataManagerDelegate <NSObject>

- (void)dataManagerDidUpdateMessageWithCount:(unsigned long long)arg0;
- (void)dataManagerDidStartReceive;
- (void)dataManagerDidReceiveText:(id)arg0;
- (void)dataManagerDidReceiveLynxData:(id)arg0;
- (void)dataManagerDidEndReceiveText;
- (void)dataManagerDidReceiveSearchKeyword:(id)arg0 withPrompt:(id)arg1;
- (void)dataManagerDidEndReceive;
- (void)dataManagerDidReceiveError:(id)arg0;

@optional

- (void)dataManagerDidReceiveSUGList:(id)arg0;

@end