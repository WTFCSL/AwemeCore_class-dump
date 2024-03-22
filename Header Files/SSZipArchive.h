//
//     Generated by private class-dump
//

@class NSString;

@interface SSZipArchive : NSObject {
    NSString *_path;
    void *_zip;
}

+ (id)_filenameStringWithCString:(const char *)arg0 version_made_by:(unsigned short)arg1 general_purpose_flag:(unsigned short)arg2 size:(unsigned short)arg3;
+ (id)_dateWithMSDOSFormat:(unsigned int)arg0;
+ (BOOL)createZipFileAtPath:(id)arg0 withFilesAtPaths:(id)arg1 withPassword:(id)arg2;
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 withPassword:(id)arg2;
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2 withPassword:(id)arg3;
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2 withPassword:(id)arg3 andProgressHandler:(id /* block */)arg4;
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2 compressionLevel:(int)arg3 password:(id)arg4 AES:(BOOL)arg5 progressHandler:(id /* block */)arg6;
+ (void)zipInfo:(struct { unsigned int x0; struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } x1; unsigned short x2; unsigned int x3; } *)arg0 setAttributesOfItemAtPath:(id)arg1;
+ (void)zipInfo:(struct { unsigned int x0; struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } x1; unsigned short x2; unsigned int x3; } *)arg0 setDate:(id)arg1;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 preserveAttributes:(BOOL)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 preserveAttributes:(BOOL)arg2 overwrite:(BOOL)arg3 nestedZipLevel:(long long)arg4 password:(id)arg5 error:(id *)arg6 delegate:(id)arg7 progressHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 preserveAttributes:(BOOL)arg2 overwrite:(BOOL)arg3 symlinksValidWithin:(id)arg4 nestedZipLevel:(long long)arg5 password:(id)arg6 error:(id *)arg7 delegate:(id)arg8 progressHandler:(id /* block */)arg9 completionHandler:(id /* block */)arg10;
+ (BOOL)isFilePasswordProtectedAtPath:(id)arg0;
+ (BOOL)isPasswordValidForArchiveAtPath:(id)arg0 password:(id)arg1 error:(id *)arg2;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 preserveAttributes:(BOOL)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
+ (id)_gregorian;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 error:(id *)arg4;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 delegate:(id)arg2;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 error:(id *)arg4 delegate:(id)arg5;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (BOOL)createZipFileAtPath:(id)arg0 withFilesAtPaths:(id)arg1;
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1;
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2;

- (BOOL)writeFile:(id)arg0 withPassword:(id)arg1;
- (BOOL)writeFileAtPath:(id)arg0 withFileName:(id)arg1 compressionLevel:(int)arg2 password:(id)arg3 AES:(BOOL)arg4;
- (BOOL)writeFolderAtPath:(id)arg0 withFolderName:(id)arg1 withPassword:(id)arg2;
- (BOOL)writeFileAtPath:(id)arg0 withFileName:(id)arg1 withPassword:(id)arg2;
- (BOOL)writeData:(id)arg0 filename:(id)arg1 compressionLevel:(int)arg2 password:(id)arg3 AES:(BOOL)arg4;
- (BOOL)writeData:(id)arg0 filename:(id)arg1 withPassword:(id)arg2;
- (id)initWithPath:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)open;
- (BOOL)close;

@end
