//
//     Generated by private class-dump
//

@protocol AWECodeRunnerObserverProtocol <NSObject>

+ (BOOL)checkIfMachoHeaderProcessed:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg0 sectionName:(char *)arg1;
+ (void)addProcessedMachoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg0 sectionName:(char *)arg1;
+ (id)sharedSingleton;

@end