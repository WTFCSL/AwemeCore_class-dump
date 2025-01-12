//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface IESLiveintimateChatLayoutMachineWatchLandscape : NSObject <IESLiveIntimateChatLayoutMachine> {
    BOOL isPCMode;
    double _sessionPortraitSpace;
    UIView *_optionViewContainer;
    struct CGSize { double width; double height; } _sessionSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGSize { double width; double height; } sessionSize;
@property (nonatomic) double sessionPortraitSpace;
@property (retain, nonatomic) UIView *optionViewContainer;
@property (nonatomic) BOOL isPCMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)enableLandscapeMarginOptimize;
- (void)setOptionViewContainer:(id)arg0;
- (id)optionViewContainer;
- (struct CGSize { double x0; double x1; })sessionSize;
- (void)setSessionSize:(struct CGSize { double x0; double x1; })arg0;
- (double)sessionPortraitSpace;
- (BOOL)isPCMode;
- (void)setIsPCMode:(BOOL)arg0;
- (void)setSessionPortraitSpace:(double)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (void)setup;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
