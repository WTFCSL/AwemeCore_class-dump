//
//     Generated by private class-dump
//

@protocol IESLiveKTVMIDIInterface <NSObject>

- (void)reportMidiScoreWithCompletion:(id /* block */)arg0;
- (void)didMidiScoreFeedbackShowWithUid:(id)arg0 score:(id)arg1 isHighScore:(BOOL)arg2;
- (id)finalMidiScore;
- (void)updateIsScoreModeStatus:(BOOL)arg0;
- (BOOL)getCurrentScoreMode;

@end