//
//     Generated by private class-dump
//

@interface AWEGPlayerBottomPlayElement : AWEGPlayerInteractionBaseElement {
    BOOL _isPlaying;
}

@property (nonatomic) BOOL isPlaying;

- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (void)updatePlaySate:(BOOL)arg0;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg0;

@end
