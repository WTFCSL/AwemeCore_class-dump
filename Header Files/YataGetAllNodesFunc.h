//
//     Generated by private class-dump
//

@protocol YataInstanceInnerInterface;

@interface YataGetAllNodesFunc : IESECSliceXExprCoreFunc {
    id<YataInstanceInnerInterface> _yataInstance;
}

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (id)initWithYataInstance:(id)arg0;
- (id)yataInstance;
- (void)setYataInstance:(id)arg0;
- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (BOOL)needGlobalEnv;
- (id)execute:(id)arg0 withGlobalEnv:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)symbol;

@end