//
//     Generated by private class-dump
//

@class UISlider, UIView;

@protocol AWELandscapeControlViewProtocol <NSObject>

@property (readonly, nonatomic) UISlider *progressSlider;
@property (readonly, nonatomic) UIView *bottomBar;
@property (readonly, nonatomic) UIView *statusBar;
@property (nonatomic) BOOL isPlaying;

- (void)configUIForFeedShare:(id)arg0 allowSelectEpisode:(BOOL)arg1;
- (void)addMicroButton:(id)arg0;
- (id)statusBar;
- (BOOL)isPlaying;
- (id)bottomBar;
- (void)setIsPlaying:(BOOL)arg0;
- (id)progressSlider;

@end
