//
//     Generated by private class-dump
//

@class NSString;

@interface AnimaXSSZipArchiveDelegate : NSObject <SSZipArchiveDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)zipArchiveShouldUnzipFileAtIndex:(long long)arg0 totalFiles:(long long)arg1 archivePath:(id)arg2 fileInfo:(struct unz_file_info_s { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned int x13; unsigned long long x14; })arg3;

@end
