//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveEZDanmakuCanvas, IESLiveEZDanmakuClock, NSString;
@protocol IESLiveEZDanmakuEngineDelegate;

@interface IESLiveEZDanmakuEngine : NSObject <IESLiveEZDanmakuDispatcherDelegate> {
    id<IESLiveEZDanmakuEngineDelegate> _delegate;
    IESLiveEZDanmakuClock *_clock;
    IESLiveEZDanmakuCanvas *_canvas;
    NSMutableDictionary *_dispatcherMap;
}

@property (retain, nonatomic) IESLiveEZDanmakuClock *clock;
@property (retain, nonatomic) IESLiveEZDanmakuCanvas *canvas;
@property (retain, nonatomic) NSMutableDictionary *dispatcherMap;
@property (weak, nonatomic) id<IESLiveEZDanmakuEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)engineWithCanvasClassName:(id)arg0;

- (void)assembleDispatcher:(id)arg0;
- (void)attachCanvasToContainerView:(id)arg0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id)usingCanvas;
- (void)fragmentOrientationChanged:(long long)arg0;
- (void)pauseEngine;
- (void)endEngine;
- (void)clearAllQueuedSpirits;
- (void)fireDanmakuWithSpirit:(id)arg0;
- (void)deactivateAllSpirits;
- (double)timeForDispatcher:(id)arg0;
- (void)willActiveDanmakuSpirit:(id)arg0 inDispatcher:(id)arg1;
- (id)canvasToRenderSpiritForDispatcher:(id)arg0;
- (id)initWithCanvasClassName:(id)arg0;
- (void)p_updateWithTime:(double)arg0;
- (void)tapCanvas:(id)arg0;
- (id)dispatcherMap;
- (id)getDefaultDispatcher;
- (void)resumeEngine;
- (void)setDispatcherMap:(id)arg0;
- (id)clock;
- (void)setClock:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setCanvas:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)canvas;
- (void)startEngine;

@end
