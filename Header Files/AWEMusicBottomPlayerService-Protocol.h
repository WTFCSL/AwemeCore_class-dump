//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEMusicStreamingBottomPlayer;

@protocol AWEMusicBottomPlayerService <HTSService, AWEMusicBottomPlayerDisplayProtocol>

+ (id)bottomPlayerWithoutAutoCreate:(id)arg0;
+ (id)bottomPlayerWith:(id)arg0;
+ (BOOL)isBottomPlayerShowing;
+ (double)safeBottomHeight;
+ (id)shared;
+ (void)addObserver:(id)arg0;
+ (void)removeObserver:(id)arg0;
+ (double)viewHeight;

@property (weak, nonatomic) UIView<AWEMusicStreamingBottomPlayer> *showingBottomPlayer;

- (id)showingBottomPlayer;
- (void)setShowingBottomPlayer:(id)arg0;

@end