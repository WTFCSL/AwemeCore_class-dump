//
//     Generated by private class-dump
//

@interface EEFileUtils : NSObject

+ (BOOL)removeItem:(id)arg0 error:(id *)arg1;
+ (BOOL)renameItem:(id)arg0 destination:(id)arg1 overridable:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)saveImage:(id)arg0 destination:(id)arg1 overridable:(BOOL)arg2 ignoreExists:(BOOL)arg3 error:(id *)arg4;
+ (BOOL)copyFile:(id)arg0 destination:(id)arg1 overridable:(BOOL)arg2 ignoreExists:(BOOL)arg3 error:(id *)arg4;
+ (BOOL)copyFile:(id)arg0 destination:(id)arg1 overridable:(BOOL)arg2 ignoreExists:(BOOL)arg3;
+ (BOOL)saveImage:(id)arg0 destination:(id)arg1 overridable:(BOOL)arg2 ignoreExists:(BOOL)arg3;
+ (BOOL)mkdirs:(id)arg0 error:(id *)arg1;
+ (BOOL)mkdirs:(id)arg0;
+ (BOOL)renameItem:(id)arg0 destination:(id)arg1 overridable:(BOOL)arg2;
+ (BOOL)removeItem:(id)arg0;

@end