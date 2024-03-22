//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveInteractionConfigLayoutCanvasAdjustable, IESLiveInteractConfigLayoutPreviewInputProtocol;

@interface IESLiveInteractConfigLayoutEngineInput : NSObject <IESLiveInteractConfigLayoutEngineInputProrocol> {
    id<IESLiveInteractConfigLayoutPreviewInputProtocol> previewInput;
    double topOffset;
    double uiContainerBottomOffset;
    id<IESLiveInteractionConfigLayoutCanvasAdjustable> canvasAdapter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredContainerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredGuestListContainerFrame;
}

@property (retain, nonatomic) id<IESLiveInteractConfigLayoutPreviewInputProtocol> previewInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredGuestListContainerFrame;
@property (nonatomic) double topOffset;
@property (nonatomic) double uiContainerBottomOffset;
@property (retain, nonatomic) id<IESLiveInteractionConfigLayoutCanvasAdjustable> canvasAdapter;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContainerFrame;
- (id)previewInput;
- (double)uiContainerBottomOffset;
- (id)canvasAdapter;
- (void)setPreviewInput:(id)arg0;
- (void)setPreferredContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredGuestListContainerFrame;
- (void)setPreferredGuestListContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setUiContainerBottomOffset:(double)arg0;
- (void)setCanvasAdapter:(id)arg0;
- (double)topOffset;
- (void)setTopOffset:(double)arg0;
- (void).cxx_destruct;

@end
