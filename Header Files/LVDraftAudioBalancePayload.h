//
//     Generated by private class-dump
//

@interface LVDraftAudioBalancePayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialAudioBalance> { struct MaterialAudioBalance *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) double averageLoudness;
@property (nonatomic) BOOL enableBalance;
@property (nonatomic) double peakLoudness;
@property (nonatomic) double targetLoudness;

- (double)peakLoudness;
- (void)setPeakLoudness:(double)arg0;
- (double)targetLoudness;
- (void)setTargetLoudness:(double)arg0;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialAudioBalance> { struct MaterialAudioBalance *x0; struct __shared_weak_count *x1; })arg0;
- (void)setAverageLoudness:(double)arg0;
- (double)averageLoudness;
- (BOOL)enableBalance;
- (void)setEnableBalance:(BOOL)arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaterialAudioBalance> { struct MaterialAudioBalance *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialAudioBalance> { struct MaterialAudioBalance *x0; struct __shared_weak_count *x1; })arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id).cxx_construct;

@end
