//
//     Generated by private class-dump
//

@class IESLiveKRCWord, RACSubject, RACSignal, IESLiveKRCSentence, NSNumber;

@interface IESLiveKRCSentenceTimeSource : NSObject {
    BOOL _filterProgressFallback;
    IESLiveKRCSentence *_nowSentence;
    double _songCurrentDuration;
    id /* block */ _updaterogressBlock;
    IESLiveKRCWord *_nowWord;
    RACSubject *_rollSubject;
    RACSubject *_reloadSubject;
    RACSubject *_updateProgressSubject;
    RACSubject *_noMoreSentenceSubject;
    double _earlyScrollTime;
    NSNumber *_nowWordProgress;
}

@property (retain, nonatomic) IESLiveKRCSentence *nowSentence;
@property (retain, nonatomic) IESLiveKRCWord *nowWord;
@property (retain, nonatomic) RACSubject *rollSubject;
@property (retain, nonatomic) RACSubject *reloadSubject;
@property (retain, nonatomic) RACSubject *updateProgressSubject;
@property (retain, nonatomic) RACSubject *noMoreSentenceSubject;
@property (nonatomic) double earlyScrollTime;
@property (nonatomic) BOOL filterProgressFallback;
@property (retain, nonatomic) NSNumber *nowWordProgress;
@property (nonatomic) double songCurrentDuration;
@property (readonly, nonatomic) RACSignal *reloadSignal;
@property (readonly, nonatomic) RACSignal *rollSignal;
@property (copy, nonatomic) id /* block */ updaterogressBlock;
@property (readonly, nonatomic) RACSignal *noMoreSentenceSignal;

- (id)reloadSubject;
- (void)setReloadSubject:(id)arg0;
- (id)reloadSignal;
- (id)rollSubject;
- (id)updateProgressSubject;
- (id)noMoreSentenceSubject;
- (void)setNowSentence:(id)arg0;
- (void)checkNextSentence:(BOOL)arg0;
- (void)checkNextWord;
- (double)songCurrentDuration;
- (id)nowSentence;
- (double)earlyScrollTime;
- (void)setNowWord:(id)arg0;
- (id)nowWord;
- (void)setNowWordProgress:(id)arg0;
- (id /* block */)updaterogressBlock;
- (BOOL)filterProgressFallback;
- (id)nowWordProgress;
- (void)startWithSentence:(id)arg0;
- (void)startWithWholeSong:(id)arg0;
- (void)setSongCurrentDuration:(double)arg0;
- (id)rollSignal;
- (id)noMoreSentenceSignal;
- (void)setUpdaterogressBlock:(id /* block */)arg0;
- (void)setRollSubject:(id)arg0;
- (void)setUpdateProgressSubject:(id)arg0;
- (void)setNoMoreSentenceSubject:(id)arg0;
- (void)setEarlyScrollTime:(double)arg0;
- (void)setFilterProgressFallback:(BOOL)arg0;
- (void)updateProgress;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end