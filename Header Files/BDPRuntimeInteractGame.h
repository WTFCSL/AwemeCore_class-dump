//
//     Generated by private class-dump
//

@class NSString;

@interface BDPRuntimeInteractGame : BDPRuntime {
    NSString *_mpLoadEventKey;
}

@property (copy, nonatomic) NSString *mpLoadEventKey;

- (void)setupGameContext;
- (void)eventMpJsLoadStart;
- (void)updateUniqueID:(id)arg0;
- (id)initWithCoreCompleteBlk:(id /* block */)arg0;
- (void)setMpLoadEventKey:(id)arg0;
- (id)mpLoadEventKey;
- (void)eventMpJsLoadResult:(id)arg0;
- (void).cxx_destruct;

@end
