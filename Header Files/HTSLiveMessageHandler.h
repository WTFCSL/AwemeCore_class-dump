//
//     Generated by private class-dump
//

@class NSPredicate, NSString;

@interface HTSLiveMessageHandler : NSObject <HTSLiveMessageHandler> {
    NSPredicate *_predicate;
    id /* block */ _messageHandler;
}

@property (copy, nonatomic) id /* block */ messageHandler;
@property (retain, nonatomic) NSPredicate *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPredicate:(id)arg0 handler:(id /* block */)arg1;
- (BOOL)canHandleMessage:(id)arg0;
- (id /* block */)messageHandler;
- (id)predicate;
- (void)setPredicate:(id)arg0;
- (void).cxx_destruct;
- (void)setMessageHandler:(id /* block */)arg0;
- (void)handleMessage:(id)arg0;

@end
