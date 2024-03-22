//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveintimateChatLayoutMachineWatch : NSObject <IESLiveIntimateChatLayoutMachine> {
    BOOL isPCMode;
    BOOL _appDataCalculateed;
    double _sessionPortraitSpace;
    struct CGSize { double width; double height; } _sessionSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGSize { double width; double height; } sessionSize;
@property (nonatomic) double sessionPortraitSpace;
@property (nonatomic) BOOL appDataCalculateed;
@property (nonatomic) BOOL isPCMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sessionSize;
- (void)setSessionSize:(struct CGSize { double x0; double x1; })arg0;
- (double)sessionPortraitSpace;
- (BOOL)isPCMode;
- (void)setupWithStreamAppData:(id)arg0;
- (void)setIsPCMode:(BOOL)arg0;
- (void)setSessionPortraitSpace:(double)arg0;
- (BOOL)appDataCalculateed;
- (void)setAppDataCalculateed:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
