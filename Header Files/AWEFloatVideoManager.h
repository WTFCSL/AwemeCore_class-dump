//
//     Generated by private class-dump
//

@class NSMapTable, NSString, AWEAwemeModel, UIView, UIPanGestureRecognizer;
@protocol IESVideoPlayerProtocol;

@interface AWEFloatVideoManager : NSObject <IESVideoPlayerDelegate, AWEFloatVideoManager> {
    BOOL _floatVideoShowing;
    UIView *_view;
    UIPanGestureRecognizer *_panGes;
    id<IESVideoPlayerProtocol> _currentPlayer;
    AWEAwemeModel *_currentModel;
    id /* block */ _currentCloseBlock;
    NSMapTable *_playerDatas;
    struct CGPoint { double x; double y; } _startPoint;
    struct CGPoint { double x; double y; } _lastCenter;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> currentPlayer;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) id /* block */ currentCloseBlock;
@property (nonatomic) BOOL floatVideoShowing;
@property (retain, nonatomic) NSMapTable *playerDatas;
@property (nonatomic) struct CGPoint { double x; double y; } lastCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculatFrameByShowType:(long long)arg0;
+ (id)mainAppWindow;
+ (id)sharedManager;

- (void)playerWillLoopPlaying:(id)arg0;
- (id)getVideoLength;
- (void)closeBtnClicked:(id)arg0;
- (id)panGes;
- (void)setPanGes:(id)arg0;
- (id)playerDatas;
- (void)hideFloatVideo;
- (BOOL)floatVideoShowing;
- (void)setCurrentCloseBlock:(id /* block */)arg0;
- (struct CGPoint { double x0; double x1; })lastCenter;
- (void)setLastCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)setFloatVideoShowing:(BOOL)arg0;
- (id /* block */)currentCloseBlock;
- (void)showFloatVideoWithCreativeID:(id)arg0 isFirst:(BOOL)arg1;
- (void)addFloatVideoData:(id)arg0;
- (void)setPlayerDatas:(id)arg0;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (void)play:(id)arg0;
- (void)setView:(id)arg0;
- (struct CGPoint { double x0; double x1; })startPoint;
- (void)pan:(id)arg0;
- (void)pause:(id)arg0;
- (id)view;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)currentPlayer;
- (void)setCurrentPlayer:(id)arg0;

@end
