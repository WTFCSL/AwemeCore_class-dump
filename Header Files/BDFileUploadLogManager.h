//
//     Generated by private class-dump
//

@class NSString, NSFileHandle;

@interface BDFileUploadLogManager : NSObject {
    NSString *_filePath;
    NSFileHandle *_fileHanle;
}

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSFileHandle *fileHanle;

+ (id)shareLogManager;

- (void)writeLogToManager:(id)arg0;
- (id)fileHanle;
- (void)setFileHanle:(id)arg0;
- (id)init;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;

@end
