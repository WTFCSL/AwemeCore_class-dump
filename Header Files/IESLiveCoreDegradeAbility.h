//
//     Generated by private class-dump
//

@interface IESLiveCoreDegradeAbility : IESLiveDegradeBase {
    BOOL _canDegrade;
    BOOL _executedlevel1Degrade;
}

@property (nonatomic) BOOL canDegrade;
@property (nonatomic) BOOL executedlevel1Degrade;

- (BOOL)canDegrade;
- (void)setCanDegrade:(BOOL)arg0;
- (void)executeDegradeWithDegradeLevel:(unsigned long long)arg0;
- (void)trackerEventParams:(id)arg0 inDegradeLevel:(unsigned long long)arg1;
- (BOOL)executedlevel1Degrade;
- (void)setExecutedlevel1Degrade:(BOOL)arg0;
- (void)reset;

@end
