//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePuzzleStateCenterCreator : NSObject <PuzzleKitViewLifeCycleProtocol, PuzzleLatchStateCenterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedCreator;
+ (id)providePuzzleLatchStateCenterProtocol:(id)arg0;

- (void)kitView:(id)arg0 willCreatedWithContext:(id)arg1;
- (void)kitViewWillDealloc:(id)arg0;
- (id)getDefaultInitialPropsWithKitView:(id)arg0 context:(id)arg1;
- (id)currentStateWithKitView:(id)arg0 context:(id)arg1;

@end
