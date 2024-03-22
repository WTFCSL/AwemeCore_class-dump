//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface AWERouterDelegateDispatcher : NSObject <AWERouterDelegate> {
    NSHashTable *_delegatesHashTable;
}

@property (retain, nonatomic) NSHashTable *delegatesHashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)delegatesHashTable;
- (void)setDelegatesHashTable:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)unregisterDelegate:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)registerDelegate:(id)arg0;

@end