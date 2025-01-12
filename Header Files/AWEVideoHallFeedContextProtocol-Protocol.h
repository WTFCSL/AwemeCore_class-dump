//
//     Generated by private class-dump
//

@class UIViewController;

@protocol AWEVideoHallFeedContextProtocol <NSObject>

@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) long long themeStyle;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isOnFeedSharePanel;

- (void)setThemeStyle:(long long)arg0;
- (void)setIsMute:(BOOL)arg0;
- (BOOL)isOnFeedSharePanel;
- (void)setIsOnFeedSharePanel:(BOOL)arg0;
- (double)playbackTimeForKey:(id)arg0;
- (void)setPlaybackTime:(double)arg0 key:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg0;
- (long long)themeStyle;
- (BOOL)isMute;

@end
