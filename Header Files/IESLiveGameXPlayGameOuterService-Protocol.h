//
//     Generated by private class-dump
//

@protocol IESLiveGameXPlayGameOuterService <NSObject>

- (id)openGameWithGameModel:(id)arg0;
- (id)restartGameWithGameModel:(id)arg0;
- (void)closeGame;
- (BOOL)isPlaying;

@optional

- (void)showKeyboard;
- (void)hideKeyboard;

@end