//
//     Generated by private class-dump
//

@class NSString;

@interface AWEComponentsPriorityUtils : HTSService <AWEComponentsPriorityUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)priorityTypeWithAwemeModel:(id)arg0 sceneType:(long long)arg1 extraInfo:(id)arg2;
+ (void)registerPriorityConfig:(Class)arg0;
+ (id)priorityTypeWithAwemeModel:(id)arg0 sceneType:(long long)arg1;
+ (BOOL)isHigherPriorityForComponent:(id)arg0 toComponent:(id)arg1;
+ (id)registerConfigs;
+ (void)runOnceForLazyRegister;
+ (id)anchorPriorityList;

@end
