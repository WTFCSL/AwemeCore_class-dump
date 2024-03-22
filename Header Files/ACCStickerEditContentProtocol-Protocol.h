//
//     Generated by private class-dump
//

@protocol ACCStickerEditContentProtocol <ACCStickerContentProtocol>

@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;

- (void)setStickerId:(long long)arg0;
- (long long)stickerId;
- (BOOL)isTransparent;
- (void)setTransparent:(BOOL)arg0;

@optional

- (id /* block */)triggerDragDeleteCallback;
- (void)setTriggerDragDeleteCallback:(id /* block */)arg0;
- (id)stickerViewIdentifier;
- (void)bubbleChanged:(BOOL)arg0;

@end