//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface AWEPublishMessageBridgeSubsriber : NSObject <AWEPublishTaskMessage> {
    NSMutableSet *_reactIDs;
}

@property (retain, nonatomic) NSMutableSet *reactIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)subsribe;
+ (id)shared;

- (void)task:(id)arg0 didBeginWithInfo:(id)arg1;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)task:(id)arg0 progressDidChangeWithInfo:(id)arg1;
- (void)task:(id)arg0 cancelWithResult:(BOOL)arg1;
- (id)p_reactIDWithTask:(id)arg0;
- (id)reactIDs;
- (void)sendEventWithTask:(id)arg0 params:(id)arg1;
- (void)setReactIDs:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
