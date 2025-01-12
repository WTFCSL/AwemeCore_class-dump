//
//     Generated by private class-dump
//

@class NSString, NSFileHandle;

@interface AWELoginDataStoreService : NSObject {
    unsigned long long _fileSettingSize;
    NSString *_filePath;
    NSFileHandle *_handle;
}

@property (nonatomic) BOOL hasWriteDataToFile;
@property (nonatomic) unsigned long long fileSettingSize;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSFileHandle *handle;

- (unsigned long long)fileSettingSize;
- (void)setFileSettingSize:(unsigned long long)arg0;
- (BOOL)hasExistFile;
- (void)createFileWhenColdLaunch:(BOOL)arg0;
- (void)trackerWithStatus:(unsigned long long)arg0 message:(id)arg1;
- (void)setHasWriteDataToFile:(BOOL)arg0;
- (BOOL)hasWriteDataToFile;
- (void)writeDataToFile:(id)arg0 tag:(unsigned int)arg1;
- (BOOL)canReadSingFile;
- (id)readDataFromFile;
- (unsigned long long)fileRealSize;
- (id)init;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (void)setHandle:(id)arg0;
- (void)dealloc;
- (id)handle;

@end
