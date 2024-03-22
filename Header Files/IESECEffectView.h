//
//     Generated by private class-dump
//

@class BEFView, NSString;
@protocol IESECEffectViewDelegate;

@interface IESECEffectView : UIView <BEFViewDelegate> {
    BOOL _autoClearRenderView;
    id<IESECEffectViewDelegate> _delegate;
    BEFView *_renderView;
    NSString *_lastFullPath;
    struct CGSize { double width; double height; } _renderSize;
}

@property (retain, nonatomic) BEFView *renderView;
@property (copy, nonatomic) NSString *lastFullPath;
@property (nonatomic) BOOL autoClearRenderView;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (weak, nonatomic) id<IESECEffectViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)registerARDecoderToEffect;

- (void)onPause;
- (BOOL)msgProc:(unsigned int)arg0 arg1:(long long)arg1 arg2:(long long)arg2 arg3:(const char *)arg3;
- (BOOL)loadStickerFullPath:(id)arg0;
- (void)setAutoClearRenderView:(BOOL)arg0;
- (void)clearRenderView;
- (BOOL)autoClearRenderView;
- (id)lastFullPath;
- (BOOL)p_loadStickerFullPath:(id)arg0;
- (void)loadRenderViewWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setLastFullPath:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })renderSize;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setRenderSize:(struct CGSize { double x0; double x1; })arg0;
- (void)onResume;
- (id)renderView;
- (void)setRenderView:(id)arg0;
- (void)postMessage:(id)arg0;

@end