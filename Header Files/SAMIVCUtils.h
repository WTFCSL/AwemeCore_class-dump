//
//     Generated by private class-dump
//

@interface SAMIVCUtils : NSObject

+ (id)errorWithCode:(long long)arg0 msg:(id)arg1;
+ (BOOL)isFileValid:(id)arg0;
+ (id)rangeInfosOfClipInfos:(id)arg0;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeOfAsset:(id)arg0 inRangeInfo:(id)arg1;
+ (BOOL)createEmptyFileIfNeeded:(id)arg0;
+ (BOOL)notEmptyWebPage:(id)arg0;
+ (unsigned long long)fileSizeOf:(id)arg0;
+ (BOOL)createDirIfNeeded:(id)arg0;
+ (id)filterArray:(id)arg0 validTaskID:(id)arg1;
+ (id)transResultFromTask:(id)arg0;
+ (void)syncErrorFromSubTask:(id)arg0 toMultiTask:(id)arg1;
+ (BOOL)cleanDirCacheIfNeeded:(id)arg0;
+ (id)filterTasks:(id)arg0 taskID:(id)arg1;
+ (id)taskWithSubID:(id)arg0 inTasks:(id)arg1;
+ (id)taskWithVid:(id)arg0 inTasks:(id)arg1;
+ (BOOL)isSubTaskID:(id)arg0 inTasks:(id)arg1;
+ (id)filterArray:(id)arg0 fromValidArray:(id)arg1;
+ (void)syncError:(long long)arg0 msg:(id)arg1 requestID:(id)arg2 phase:(unsigned long long)arg3 toTasks:(id)arg4;
+ (id)commonErrorAtPhase:(unsigned long long)arg0;
+ (id)transResultsFromTasks:(id)arg0 taskID:(id)arg1 speakerID:(id)arg2;
+ (id)createVideoDataFromAsset:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
+ (id)logTagChainAtPhase:(unsigned long long)arg0;
+ (id)cacheLogTagChain;
+ (id)errorWithCode:(long long)arg0;

@end
