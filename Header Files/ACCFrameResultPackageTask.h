//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface ACCFrameResultPackageTask : NSObject {
    id /* block */ _resultBlock;
    NSArray *_filePaths;
    NSString *_taskDir;
    long long _fileType;
}

@property (retain, nonatomic) NSArray *filePaths;
@property (retain, nonatomic) NSString *taskDir;
@property (nonatomic) long long fileType;
@property (copy, nonatomic) id /* block */ resultBlock;

- (void)didFailedWithError:(id)arg0;
- (id)taskDir;
- (void)startWithFilePaths:(id)arg0 taskDir:(id)arg1 toBePackagedFileType:(long long)arg2;
- (void)setTaskDir:(id)arg0;
- (id)configZIPFilePathWithFileType:(long long)arg0;
- (void).cxx_destruct;
- (long long)fileType;
- (void)setResultBlock:(id /* block */)arg0;
- (void)setFileType:(long long)arg0;
- (id)filePaths;
- (id /* block */)resultBlock;
- (void)setFilePaths:(id)arg0;

@end
