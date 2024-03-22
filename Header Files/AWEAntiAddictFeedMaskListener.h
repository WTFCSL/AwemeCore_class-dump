//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAntiAddictFeedMaskListener : NSObject <AWEAntiAddictNoticeMessage, AWEAntiAddictActionListener> {
    id /* block */ _triggerBeginBlock;
    id /* block */ _triggerEndBlock;
    id /* block */ _triggerRevokeBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ triggerBeginBlock;
@property (copy, nonatomic) id /* block */ triggerEndBlock;
@property (copy, nonatomic) id /* block */ triggerRevokeBlock;

- (long long)listenerType;
- (id /* block */)triggerBeginBlock;
- (id /* block */)triggerRevokeBlock;
- (void)setTriggerBeginBlock:(id /* block */)arg0;
- (id /* block */)triggerEndBlock;
- (void)setTriggerEndBlock:(id /* block */)arg0;
- (void)setTriggerRevokeBlock:(id /* block */)arg0;
- (void)systemBlockMaskConfigDidChange;
- (void)feedDidDisplayMask:(id)arg0;
- (void)feedDidEndDisplayMask:(id)arg0;
- (void)feedRevokeMask;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)dealloc;

@end