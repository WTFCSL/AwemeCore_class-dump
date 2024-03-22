//
//     Generated by private class-dump
//

@class RACSignal;

@protocol ACCEditClipServiceProtocol <NSObject>

@property (readonly, nonatomic) RACSignal *removeAllEditsSignal;
@property (readonly, nonatomic) RACSignal *willRemoveAllEditsSignal;
@property (readonly, nonatomic) RACSignal *didRemoveAllEditsSignal;
@property (readonly, nonatomic) RACSignal *didFinishClipEditSignal;

- (id)removeAllEditsSignal;
- (id)willRemoveAllEditsSignal;
- (id)didRemoveAllEditsSignal;
- (id)didFinishClipEditSignal;
- (void)addSubscriber:(id)arg0;

@end
