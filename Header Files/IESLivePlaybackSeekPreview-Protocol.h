//
//     Generated by private class-dump
//

@protocol IESLivePlaybackSeekPreview <NSObject>

- (void)updateOrientation:(BOOL)arg0;
- (void)updatePreViewProgress:(double)arg0 progress:(id)arg1 duration:(id)arg2 hasProgressBar:(BOOL)arg3;
- (void)updateHighlightTitle:(id)arg0 hasHotTag:(BOOL)arg1;

@optional

- (void)updatePreviewImage:(id)arg0;
- (void)disableShowPreviewImage;

@end
