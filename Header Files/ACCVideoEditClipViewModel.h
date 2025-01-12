//
//     Generated by private class-dump
//

@class NSString, RACSignal, RACSubject, NSMutableArray;

@interface ACCVideoEditClipViewModel : NSObject <ACCEditClipServiceProtocol, ACCVideoEditClipProvideProtocol> {
    RACSignal *_didFinishClipEditSignal;
    RACSubject *_didFinishClipEditSubject;
    RACSignal *_willRemoveAllEditsSignal;
    RACSubject *_willRemoveAllEditsSubject;
    RACSignal *_didRemoveAllEditsSignal;
    RACSubject *_didRemoveAllEditsSubject;
    RACSignal *_removeAllEditsSignal;
    RACSubject *_removeAllEditsSubject;
    NSMutableArray *_subscribers;
}

@property (retain, nonatomic) RACSignal *didFinishClipEditSignal;
@property (retain, nonatomic) RACSubject *didFinishClipEditSubject;
@property (retain, nonatomic) RACSignal *willRemoveAllEditsSignal;
@property (retain, nonatomic) RACSubject *willRemoveAllEditsSubject;
@property (retain, nonatomic) RACSignal *didRemoveAllEditsSignal;
@property (retain, nonatomic) RACSubject *didRemoveAllEditsSubject;
@property (retain, nonatomic) RACSignal *removeAllEditsSignal;
@property (retain, nonatomic) RACSubject *removeAllEditsSubject;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)removeAllEditsSignal;
- (id)willRemoveAllEditsSignal;
- (id)didRemoveAllEditsSignal;
- (id)didFinishClipEditSignal;
- (void)sendRemoveAllEditsSignal;
- (void)sendDidFinishClipEditSignal;
- (void)sendWillRemoveAllEditsSignal;
- (void)sendDidRemoveAllEditsSignal;
- (id)removeAllEditsSubject;
- (void)setRemoveAllEditsSubject:(id)arg0;
- (id)didFinishClipEditSubject;
- (void)setDidFinishClipEditSubject:(id)arg0;
- (id)willRemoveAllEditsSubject;
- (id)didRemoveAllEditsSubject;
- (void)setDidFinishClipEditSignal:(id)arg0;
- (void)setWillRemoveAllEditsSignal:(id)arg0;
- (void)setWillRemoveAllEditsSubject:(id)arg0;
- (void)setDidRemoveAllEditsSignal:(id)arg0;
- (void)setDidRemoveAllEditsSubject:(id)arg0;
- (void)setRemoveAllEditsSignal:(id)arg0;
- (void).cxx_destruct;
- (id)subscribers;
- (void)dealloc;
- (void)addSubscriber:(id)arg0;
- (void)setSubscribers:(id)arg0;

@end
