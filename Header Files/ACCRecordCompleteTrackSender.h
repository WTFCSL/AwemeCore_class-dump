//
//     Generated by private class-dump
//

@class RACSignal, NSString, RACSubject;

@interface ACCRecordCompleteTrackSender : NSObject <ACCRecordCompleteTrackSenderProtocol> {
    RACSubject *_completeButtonDidClickedSubject;
}

@property (retain, nonatomic) RACSubject *completeButtonDidClickedSubject;
@property (readonly, nonatomic) RACSignal *completeButtonDidClickedSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)completeButtonDidClickedSignal;
- (void)sendCompleteButtonClickedSignal;
- (id)completeButtonDidClickedSubject;
- (void)setCompleteButtonDidClickedSubject:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end