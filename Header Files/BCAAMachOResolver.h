//
//     Generated by private class-dump
//

@interface BCAAMachOResolver : NSObject

+ (id)shareInstance;

- (void /* function */ *)getBundleEntryFunc:(id)arg0;
- (struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)getBundleMachoHeader:(id)arg0;
- (id)getClassServicesOfBundle:(id)arg0;
- (id)getInstanceServicesOfBundle:(id)arg0;
- (id)getBundleActivators:(id)arg0;
- (id)getAllBundlesContainsEntryFunc;

@end
