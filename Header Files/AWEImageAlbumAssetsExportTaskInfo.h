//
//     Generated by private class-dump
//

@class NSString;

@interface AWEImageAlbumAssetsExportTaskInfo : NSObject {
    BOOL _hasError;
    NSString *_taskID;
    long long _totalCount;
    NSString *_rootPath;
}

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) BOOL hasError;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *rootPath;

- (void).cxx_destruct;
- (id)taskID;
- (id)rootPath;
- (void)setTaskID:(id)arg0;
- (long long)totalCount;
- (void)setHasError:(BOOL)arg0;
- (BOOL)hasError;
- (void)setTotalCount:(long long)arg0;
- (void)setRootPath:(id)arg0;

@end
