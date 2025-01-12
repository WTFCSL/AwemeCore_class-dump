//
//     Generated by private class-dump
//

@class RACSignal, NSString, RACSubject;

@interface ACCAdvanceActionDispatchService : NSObject <ACCAdvanceActionDispatchProtocol> {
    RACSubject *_actionSubject;
}

@property (retain, nonatomic) RACSubject *actionSubject;
@property (readonly, nonatomic) RACSignal *actionSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionSubject;
- (void)setActionSubject:(id)arg0;
- (void).cxx_destruct;
- (void)sendAction:(id)arg0;
- (void)dealloc;
- (id)actionSignal;

@end
