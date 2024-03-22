//
//     Generated by private class-dump
//

@class NSError, RTVQosNodeStateChangeTrigger;

@interface RTVQosNodeStateModel : NSObject <NSCopying> {
    long long _state;
    NSError *_error;
    RTVQosNodeStateChangeTrigger *_trigger;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) RTVQosNodeStateChangeTrigger *trigger;

- (void).cxx_destruct;
- (long long)state;
- (id)trigger;
- (void)setState:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setTrigger:(id)arg0;
- (void)setError:(id)arg0;
- (id)error;

@end