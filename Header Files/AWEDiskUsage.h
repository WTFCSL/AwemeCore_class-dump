//
//     Generated by private class-dump
//

@interface AWEDiskUsage : NSObject

+ (double)freeDiskSpace;
+ (unsigned long long)folderSizeAtPath:(id)arg0 visitor:(id)arg1;
+ (double)totalDiskSpace;
+ (unsigned long long)itemSizeAtPath:(id)arg0 exist:(BOOL *)arg1 visitor:(id)arg2;
+ (unsigned long long)fileSizeAtPath:(id)arg0;

@end