//
//     Generated by private class-dump
//

@class NSString;
@protocol ECOMTIMOMessagePullingStatusObserverDelegate;

@interface ECOMTIMOMessagePullingStatusObserver : NSObject <ECOMTIMPullerStatusChangeObserverDelegate> {
    int _inbox;
    long long _status;
    id<ECOMTIMOMessagePullingStatusObserverDelegate> _delegate;
}

@property (nonatomic) long long status;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<ECOMTIMOMessagePullingStatusObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pullerSimpleStatusDidChangeTo:(long long)arg0 forInbox:(int)arg1;
- (id)initForInbox:(int)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)status;
- (id)delegate;
- (void)setStatus:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (int)inbox;
- (void)setInbox:(int)arg0;

@end
