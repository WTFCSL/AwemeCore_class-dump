//
//     Generated by private class-dump
//

@interface IESMMFastVideoImport : NSObject

+ (BOOL)isFastVideoImportUsable:(id)arg0 error:(id *)arg1;
+ (BOOL)isFastVideoImportUsable:(id)arg0 error:(id *)arg1 fromMultiClip:(BOOL)arg2;
+ (id)fastImportRequirementDic:(struct CGSize { double x0; double x1; })arg0;
+ (BOOL)isMultiFastImportDeviceSupport;
+ (BOOL)isFastVideoImportUsable:(id)arg0;
+ (BOOL)isMultiFastImportUsable:(id)arg0 error:(id *)arg1;
+ (BOOL)isSupportFastImport:(id)arg0 mediaType:(long long)arg1;

@end