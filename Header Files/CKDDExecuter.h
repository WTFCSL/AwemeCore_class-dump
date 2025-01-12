//
//     Generated by private class-dump
//

@class NSOrderedSet, CKDDDataIterator;

@interface CKDDExecuter : CKDDProtoProxy {
    id /* block */ _data;
    id /* block */ _recorder;
    CKDDDataIterator *_dataIterator;
    id /* block */ _notify;
    id /* block */ _implsForActions;
    NSOrderedSet *_impls;
}

@property (copy, nonatomic) id /* block */ data;
@property (copy, nonatomic) id /* block */ recorder;
@property (retain, nonatomic) CKDDDataIterator *dataIterator;
@property (copy, nonatomic) id /* block */ notify;
@property (copy, nonatomic) id /* block */ implsForActions;
@property (copy) NSOrderedSet *impls;

- (id)dataIterator;
- (void)setDataIterator:(id)arg0;
- (id /* block */)implsForActions;
- (void)setImpls:(id)arg0;
- (void)setImplsForActions:(id /* block */)arg0;
- (void)setNotify:(id /* block */)arg0;
- (id /* block */)data;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id /* block */)recorder;
- (void)setData:(id /* block */)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id /* block */)notify;
- (void)setRecorder:(id /* block */)arg0;
- (id)impls;

@end
