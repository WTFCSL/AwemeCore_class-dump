//
//     Generated by private class-dump
//

@protocol IESLiveKTVLyricsHandlerDelegate <NSObject>

- (void)lyricsHandler:(id)arg0 setupInitialLyrics:(id)arg1;
- (void)lyricsHandler:(id)arg0 rollAnimated:(BOOL)arg1 nextSentence:(id)arg2 completion:(id /* block */)arg3;
- (void)lyricsHandler:(id)arg0 refreshActiveLyricRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 progress:(double)arg2;
- (void)lyricsHandlerDidFinished:(id)arg0;

@end