//
//     Generated by private class-dump
//

@class NSString;

@interface AWETimonUITracker : NSObject <AWELiveSettingMessage, AWERTVMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hasCreatedLiveRoomDidChange:(BOOL)arg0;
- (void)rtvServiceWillBegin:(id)arg0;
- (void)rtvServiceDidBegin:(id)arg0;
- (void)rtvServiceWillFinish:(id)arg0;
- (void)rtvServiceDidFinish:(id)arg0;
- (id)init;
- (void)dealloc;

@end
