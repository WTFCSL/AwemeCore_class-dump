//
//     Generated by private class-dump
//

@class NSString;

@interface HTSShareActionSystem : NSObject <HTSShareAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlatformAvailable:(long long)arg0;
- (void)shareWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)showActivityViewControllerWithShareItems:(id)arg0 model:(id)arg1 excludedActivityTypes:(id)arg2 completion:(id /* block */)arg3;

@end