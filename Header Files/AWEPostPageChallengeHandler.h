//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageChallengeHandler : NSObject <AWEPostPageChallengeService> {
    BOOL _challengeSwitchStatesSignal;
    id<AWEPostPageContext> _context;
    NSString *_hashTagTitleSignal;
    long long _continueWriteHashChooseSignal;
    NSString *_challengeTitleSignal;
}

@property (nonatomic) BOOL challengeSwitchStatesSignal;
@property (retain, nonatomic) NSString *challengeTitleSignal;
@property (retain, nonatomic) NSString *hashTagTitleSignal;
@property (nonatomic) long long continueWriteHashChooseSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)arg0;
- (void)sendChallengeSwitchStatesSignal:(BOOL)arg0;
- (void)sendChallengeTitleSignal:(id)arg0;
- (void)sendHashTagTitleSignal:(id)arg0;
- (id)hashTagTitleSignal;
- (void)sendContinueWriteHashChooseSignal:(long long)arg0;
- (BOOL)challengeSwitchStatesSignal;
- (id)challengeTitleSignal;
- (void)setChallengeSwitchStatesSignal:(BOOL)arg0;
- (void)setChallengeTitleSignal:(id)arg0;
- (void)setContinueWriteHashChooseSignal:(long long)arg0;
- (void)setHashTagTitleSignal:(id)arg0;
- (long long)continueWriteHashChooseSignal;
- (void).cxx_destruct;
- (id)context;

@end