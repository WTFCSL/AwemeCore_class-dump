//
//     Generated by private class-dump
//

@class UIWindow;

@interface HMDUITrackerTool : NSObject

@property (class, readonly, nonatomic) UIWindow *keyWindow;
@property (class, readonly) BOOL sceneBasedSupport;
@property (class, readonly, nonatomic) BOOL multiScenesConfig;
@property (class, readonly, nonatomic, getter=isSceneBackground) BOOL sceneBackground;

+ (BOOL)sceneBasedSupport;
+ (BOOL)multiScenesConfig;
+ (id)findKeyInWindows:(id)arg0;
+ (BOOL)isSceneBackground;
+ (id)keyWindow;

@end