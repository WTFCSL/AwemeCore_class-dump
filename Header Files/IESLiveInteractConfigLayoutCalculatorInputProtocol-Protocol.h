//
//     Generated by private class-dump
//

@class NSArray, IESLiveInteractConfigLayoutModel;

@protocol IESLiveInteractConfigLayoutCalculatorInputProtocol <IESLiveInteractConfigLayoutEnginePreviewInputGettable, IESLiveInteractConfigLayoutContainerAdjustable>

@property (readonly, nonatomic) IESLiveInteractConfigLayoutModel *model;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } containerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } virtualContainerFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (readonly, nonatomic) double topMarginAddtion;
@property (readonly, nonatomic) double bottomMarginAddtion;
@property (readonly, nonatomic) BOOL calculateAnchorFrame;
@property (readonly, nonatomic) BOOL useHostStreamLayout;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredGuestListFrame;
@property (readonly, nonatomic) BOOL useCustomGuestList;
@property (readonly, copy, nonatomic) NSArray *preferrdGuestFrames;
@property (readonly, nonatomic) BOOL needAddAnchorSlotWhichEqualToPlayer;
@property (readonly, nonatomic) BOOL contentForceFillToHeight;

- (BOOL)useHostStreamLayout;
- (double)topMarginAddtion;
- (double)bottomMarginAddtion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })virtualContainerFrame;
- (BOOL)needAddAnchorSlotWhichEqualToPlayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredGuestListFrame;
- (BOOL)useCustomGuestList;
- (id)preferrdGuestFrames;
- (BOOL)calculateAnchorFrame;
- (BOOL)contentForceFillToHeight;
- (id)model;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (BOOL)isValid;
- (struct CGSize { double x0; double x1; })mediaSize;

@end