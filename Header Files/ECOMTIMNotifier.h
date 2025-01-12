//
//     Generated by private class-dump
//

@class ECOMTIMMulticastDelegate, NSString;

@interface ECOMTIMNotifier : NSObject <ECOMTIMNotifierProtocol> {
    ECOMTIMMulticastDelegate *_observerMulticast;
}

@property (retain, nonatomic) ECOMTIMMulticastDelegate *observerMulticast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeDelegateWithIdentifier:(id)arg0;
- (id)observerMulticast;
- (void)setObserverMulticast:(id)arg0;
- (id)addWeakDelegate:(id)arg0 onQueue:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
