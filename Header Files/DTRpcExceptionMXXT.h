//
//     Generated by private class-dump
//

@interface DTRpcExceptionMXXT : NSException {
    int _code;
}

@property (nonatomic) int code;

+ (id)exceptionWithName:(id)arg0 reason:(id)arg1 userInfo:(id)arg2 code:(int)arg3;
+ (void)raise:(int)arg0 message:(id)arg1;
+ (void)raise:(int)arg0 message:(id)arg1 userInfo:(id)arg2;

- (void)setCode:(int)arg0;
- (int)code;

@end