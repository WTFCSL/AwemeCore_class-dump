//
//     Generated by private class-dump
//

@class NSString, UICollectionViewCell, UIView;

@interface AWEMemoriesPlayerControlManager : NSObject <AWEMemoriesPlayerControlProtocol> {
    BOOL _playerCovered;
    BOOL _playerScrolling;
    UICollectionViewCell *_currentCell;
    long long _currentIndex;
    UIView *_playerView;
    id /* block */ _playHandler;
    id /* block */ _pauseHandler;
    id /* block */ _scrollHandler;
    id /* block */ _blockAutoScroll;
    id /* block */ _cleanHandler;
}

@property (copy, nonatomic) id /* block */ playHandler;
@property (copy, nonatomic) id /* block */ pauseHandler;
@property (copy, nonatomic) id /* block */ scrollHandler;
@property (copy, nonatomic) id /* block */ blockAutoScroll;
@property (copy, nonatomic) id /* block */ cleanHandler;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) UICollectionViewCell *currentCell;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) BOOL playerCovered;
@property (nonatomic) BOOL playerScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(unsigned long long)arg0;
- (void)shouldCleanScreen:(BOOL)arg0;
- (void)setPlayerCovered:(BOOL)arg0;
- (void)pauseByManual:(BOOL)arg0;
- (void)playByManual:(BOOL)arg0;
- (BOOL)playerScrolling;
- (void)shouldBlockAutoScroll:(id /* block */)arg0;
- (BOOL)playerCovered;
- (id /* block */)scrollHandler;
- (void)setBlockAutoScroll:(id /* block */)arg0;
- (id /* block */)cleanHandler;
- (void)setPlayerScrolling:(BOOL)arg0;
- (void)setScrollHandler:(id /* block */)arg0;
- (id /* block */)blockAutoScroll;
- (void)setCleanHandler:(id /* block */)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg0;
- (id)playerView;
- (void)setPlayerView:(id)arg0;
- (id)currentCell;
- (void)setCurrentCell:(id)arg0;
- (id /* block */)pauseHandler;
- (void)setPauseHandler:(id /* block */)arg0;
- (void)setPlayHandler:(id /* block */)arg0;
- (id /* block */)playHandler;

@end
