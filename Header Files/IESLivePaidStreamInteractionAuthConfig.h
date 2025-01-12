//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLivePaidStreamInteractionAuthConfig : NSObject {
    long long _paidScene;
    NSArray *_serverControlInteractions;
    NSArray *_authDisabledInteractionsWhenTrial;
    NSArray *_authDisabledInteractionsWhenTrialFinish;
}

@property (nonatomic) long long paidScene;
@property (copy, nonatomic) NSArray *serverControlInteractions;
@property (copy, nonatomic) NSArray *authDisabledInteractionsWhenTrial;
@property (copy, nonatomic) NSArray *authDisabledInteractionsWhenTrialFinish;

- (long long)paidScene;
- (void)setPaidScene:(long long)arg0;
- (id)serverControlInteractions;
- (void)setServerControlInteractions:(id)arg0;
- (id)authDisabledInteractionsWhenTrial;
- (void)setAuthDisabledInteractionsWhenTrial:(id)arg0;
- (id)authDisabledInteractionsWhenTrialFinish;
- (void)setAuthDisabledInteractionsWhenTrialFinish:(id)arg0;
- (void).cxx_destruct;

@end
