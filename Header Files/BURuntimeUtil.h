//
//     Generated by private class-dump
//

@interface BURuntimeUtil : NSObject

+ (void)exchangeSEL:(SEL)arg0 originClass:(Class)arg1 targetSEL:(SEL)arg2 targetClass:(Class)arg3 isClassMethod:(BOOL)arg4;
+ (void)exchangeSEL:(SEL)arg0 targetSEL:(SEL)arg1 aClass:(Class)arg2 isClassMethod:(BOOL)arg3;
+ (void)bu_exchangeClassSEL:(SEL)arg0 originClass:(Class)arg1 targetClassSEL:(SEL)arg2 targetClass:(Class)arg3;
+ (void)bu_exchangeInstanceSEL:(SEL)arg0 originClass:(Class)arg1 targetInstanceSEL:(SEL)arg2 targetClass:(Class)arg3;
+ (void)bu_exchangeClassSEL:(SEL)arg0 targetClassSEL:(SEL)arg1 aClass:(Class)arg2;
+ (void)bu_exchangeInstanceSEL:(SEL)arg0 targetInstanceSEL:(SEL)arg1 aClass:(Class)arg2;
+ (BOOL)bu_hasImpletionClass:(Class)arg0 sel:(SEL)arg1;

@end
