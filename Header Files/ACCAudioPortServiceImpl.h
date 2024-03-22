//
//     Generated by private class-dump
//

@class RACSignal, NSString, RACSubject;

@interface ACCAudioPortServiceImpl : NSObject <ACCAudioPortService> {
    RACSubject *_IOPortChangeSubject;
    long long _inputPort;
    long long _outputPort;
}

@property (retain, nonatomic) RACSubject *IOPortChangeSubject;
@property (nonatomic) long long inputPort;
@property (nonatomic) long long outputPort;
@property (readonly, nonatomic) RACSignal *IOPortChangeSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)inputPort;
- (long long)outputPort;
- (id)IOPortChangeSignal;
- (void)updateIOPort;
- (void)setInputPort:(long long)arg0;
- (void)setOutputPort:(long long)arg0;
- (id)IOPortChangeSubject;
- (void)setIOPortChangeSubject:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
