//
//     Generated by private class-dump
//

@class NSArray, AWEInteractionExtraModel;

@interface AWEFeedPropsStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler {
    AWEInteractionExtraModel *_extraModel;
    NSArray *_locationModels;
}

@property (retain, nonatomic) AWEInteractionExtraModel *extraModel;
@property (retain, nonatomic) NSArray *locationModels;

+ (BOOL)canDisplaySticker:(id)arg0;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)getPropParams;
- (id)locationModels;
- (id)p_currentLocationModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_locationInContainer:(id)arg0;
- (void)trackPropsStickerClick;
- (void)handlePropsBubbleClicked;
- (void)stickerFunctionTracker:(id)arg0 label:(id)arg1 url:(id)arg2;
- (id)adTasks;
- (void)trackBubbleClickWithAdTaskType:(long long)arg0;
- (BOOL)adValid;
- (void)setLocationModels:(id)arg0;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)willDisplay;

@end
