//
//     Generated by private class-dump
//

@interface MMMatrixPathUtil : NSObject

+ (id)matrixCacheRootPath;
+ (long long)latestTimeWithCurTime:(long long)arg0 accessTime:(long long)arg1 modifyTime:(long long)arg2 changeTime:(long long)arg3 birthTime:(long long)arg4;
+ (id)memoryStatPluginCachePath;
+ (id)memoryStatLaunchTimePath;
+ (void)autoCleanDiretory:(id)arg0 withTimeout:(double)arg1;
+ (void)setMatrixCacheRootPath:(id)arg0;

@end