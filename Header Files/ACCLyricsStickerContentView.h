//
//     Generated by private class-dump
//

@class NSString, ACCLyricsStickerConfig, IESInfoStickerProps;
@protocol ACCStickerContainerProtocol;

@interface ACCLyricsStickerContentView : UIView <ACCStickerEditContentProtocol> {
    BOOL _transparent;
    BOOL _ignoreUpdateFrameWithGesture;
    id /* block */ coordinateDidChange;
    id<ACCStickerContainerProtocol> stickerContainer;
    id /* block */ _triggerDragDeleteCallback;
    long long _stickerId;
    ACCLyricsStickerConfig *_config;
    IESInfoStickerProps *_stickerInfos;
    id /* block */ _transparentChanged;
    struct CGPoint { double x; double y; } _beginOrigin;
}

@property (nonatomic) long long stickerId;
@property (retain, nonatomic) ACCLyricsStickerConfig *config;
@property (retain, nonatomic) IESInfoStickerProps *stickerInfos;
@property (nonatomic) struct CGPoint { double x; double y; } beginOrigin;
@property (nonatomic) BOOL ignoreUpdateFrameWithGesture;
@property (copy, nonatomic) id /* block */ transparentChanged;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStickerId:(long long)arg0;
- (long long)stickerId;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (id /* block */)coordinateDidChange;
- (id)copyForContext:(id)arg0;
- (void)updateWithInstance:(id)arg0 context:(id)arg1;
- (void)setCoordinateDidChange:(id /* block */)arg0;
- (id /* block */)triggerDragDeleteCallback;
- (void)setTriggerDragDeleteCallback:(id /* block */)arg0;
- (id /* block */)transparentChanged;
- (void)setTransparentChanged:(id /* block */)arg0;
- (id)stickerViewIdentifier;
- (void)setStickerInfos:(id)arg0;
- (id)stickerInfos;
- (struct CGPoint { double x0; double x1; })beginOrigin;
- (void)setBeginOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)ignoreUpdateFrameWithGesture;
- (void)setIgnoreUpdateFrameWithGesture:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (BOOL)isTransparent;
- (void)setTransparent:(BOOL)arg0;
- (void)updateSize:(struct CGSize { double x0; double x1; })arg0;

@end
