//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEUGResourceDownloadTask : NSOperation {
    BOOL _isDownloadZip;
    BOOL _isTaskExecuting;
    BOOL _isTaskFinished;
    NSArray *_URLs;
    NSString *_zipFileMD5;
    NSString *_targetPath;
    NSString *_unzipDirectory;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSArray *URLs;
@property (retain, nonatomic) NSString *zipFileMD5;
@property (retain, nonatomic) NSString *targetPath;
@property (retain, nonatomic) NSString *unzipDirectory;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isDownloadZip;
@property (nonatomic) BOOL isTaskExecuting;
@property (nonatomic) BOOL isTaskFinished;

- (void)setTargetPath:(id)arg0;
- (BOOL)isTaskFinished;
- (void)setZipFileMD5:(id)arg0;
- (void)setIsTaskExecuting:(BOOL)arg0;
- (void)setIsTaskFinished:(BOOL)arg0;
- (id)zipFileMD5;
- (BOOL)isTaskExecuting;
- (void)setUnzipDirectory:(id)arg0;
- (void)setIsDownloadZip:(BOOL)arg0;
- (BOOL)isDownloadZip;
- (id)unzipDirectory;
- (id)initWithURLs:(id)arg0 zipFileMD5:(id)arg1 targetPath:(id)arg2 unzipDirectory:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithURLs:(id)arg0 targetPath:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (id /* block */)completion;
- (void)main;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setCompletion:(id /* block */)arg0;
- (id)URLs;
- (void)setURLs:(id)arg0;
- (void)start;
- (id)targetPath;

@end
