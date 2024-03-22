//
//     Generated by private class-dump
//

@class AWETaskModel, AWEChallengeModel;

@interface CMCChallengeContext : CMCContext {
    BOOL _isNational;
    AWEChallengeModel *_challenge;
    AWETaskModel *_taskModel;
}

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) AWETaskModel *taskModel;
@property (nonatomic) BOOL isNational;

- (id)taskModel;
- (void)setTaskModel:(id)arg0;
- (BOOL)isNational;
- (void)setIsNational:(BOOL)arg0;
- (void).cxx_destruct;
- (id)challenge;
- (void)setChallenge:(id)arg0;

@end