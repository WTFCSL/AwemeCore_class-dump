//
//     Generated by private class-dump
//

@interface IESLiveMemoryReplacement : NSObject

+ (void)replaceSwizzleClass:(Class)arg0 SEL:(SEL)arg1 withSEL:(SEL)arg2;
+ (BOOL)isStartReplacement;
+ (void)startReplacement;
+ (void)stopReplacement;
+ (void)replacement;

@end