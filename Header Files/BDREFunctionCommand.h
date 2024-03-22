//
//     Generated by private class-dump
//

@class NSString, BDREFunc;

@interface BDREFunctionCommand : BDRECommand {
    BDREFunc *_func;
    NSString *_funcName;
    unsigned long long _argsNumber;
}

@property (retain, nonatomic) BDREFunc *func;
@property (copy, nonatomic) NSString *funcName;
@property (nonatomic) unsigned long long argsNumber;

- (id)func;
- (void)setFunc:(id)arg0;
- (unsigned long long)argsNumber;
- (void)execute:(id)arg0 withEnv:(id)arg1 error:(id *)arg2;
- (id)funcName;
- (id)initWithFuncName:(id)arg0 func:(id)arg1 argsLength:(unsigned long long)arg2;
- (void)setFuncName:(id)arg0;
- (void)setArgsNumber:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)instruction;

@end