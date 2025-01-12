//
//     Generated by private class-dump
//

@interface TIMXMulticastDelegateEventParams : NSObject {
    id _delegate;
    char *_targetQueueLabel;
    SEL _selector;
    double _performElapsedTime;
}

@property (retain, nonatomic) id delegate;
@property (nonatomic) char *targetQueueLabel;
@property (nonatomic) SEL selector;
@property (nonatomic) double performElapsedTime;

- (char *)targetQueueLabel;
- (double)performElapsedTime;
- (id)initWithDelegate:(id)arg0 targetQueueLabel:(char *)arg1 selector:(SEL)arg2 performElapsedTime:(double)arg3;
- (void)setTargetQueueLabel:(char *)arg0;
- (void)setPerformElapsedTime:(double)arg0;
- (void).cxx_destruct;
- (void)setSelector:(SEL)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (SEL)selector;

@end
