//
//     Generated by private class-dump
//

@class NSString;

@interface IESECSliceXExprCoreFunc : NSObject

@property (readonly, nonatomic) NSString *symbol;
@property (readonly, nonatomic) unsigned long long minArgsCount;
@property (readonly, nonatomic) unsigned long long maxArgsCount;
@property (readonly, nonatomic) BOOL needGlobalEnv;

- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (BOOL)needGlobalEnv;
- (id)execute:(id)arg0 withGlobalEnv:(id)arg1 error:(id *)arg2;
- (id)execute:(id)arg0 error:(id *)arg1;
- (id)symbol;

@end