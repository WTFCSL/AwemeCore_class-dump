//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayAnnieHandler : NSObject <CJPayAnnieServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedInstance;

- (BOOL)openAnnieScheme:(id)arg0;
- (id)createAnnieXLynxCardWithScheme:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 initialDataStr:(id)arg2 delegate:(id)arg3 containersArray:(id)arg4;
- (BOOL)tryLoadAnnieXView:(id)arg0;
- (BOOL)isAnnieXView:(id)arg0;
- (id)annieXViewContainerID:(id)arg0;
- (BOOL)p_isUrlInPathList:(id)arg0;

@end
