//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AnnieSendEffectMessageParamModel : IESLiveBridgeModel {
    NSNumber *_msgID;
    NSNumber *_arg1;
    NSNumber *_arg2;
    NSString *_arg3;
}

@property (retain, nonatomic) NSNumber *msgID;
@property (retain, nonatomic) NSNumber *arg1;
@property (retain, nonatomic) NSNumber *arg2;
@property (copy, nonatomic) NSString *arg3;

+ (id)modelCustomPropertyMapper;

- (id)msgID;
- (void)setMsgID:(id)arg0;
- (void).cxx_destruct;
- (void)setArg1:(id)arg0;
- (id)arg2;
- (void)setArg2:(id)arg0;
- (id)arg1;
- (id)arg3;
- (void)setArg3:(id)arg0;

@end
