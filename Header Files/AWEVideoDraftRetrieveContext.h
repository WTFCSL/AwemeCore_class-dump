//
//     Generated by private class-dump
//

@class AWEVideoDraftTracer, NSString, ACCRepositoryWorkspace;

@interface AWEVideoDraftRetrieveContext : NSObject {
    BOOL _isCancelled;
    BOOL _isEdit;
    BOOL _skipLoadVideo;
    BOOL _skipLoadResource;
    BOOL _isBackupProject;
    BOOL _mergeDuringEdit;
    AWEVideoDraftTracer *_tracer;
    NSString *_projectUUID;
    ACCRepositoryWorkspace *_workspace;
}

@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isEdit;
@property (nonatomic) BOOL skipLoadVideo;
@property (nonatomic) BOOL skipLoadResource;
@property (nonatomic) BOOL isBackupProject;
@property (retain, nonatomic) AWEVideoDraftTracer *tracer;
@property (nonatomic) BOOL mergeDuringEdit;
@property (retain, nonatomic) NSString *projectUUID;
@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;

- (void)setIsEdit:(BOOL)arg0;
- (void)setSkipLoadResource:(BOOL)arg0;
- (void)setMergeDuringEdit:(BOOL)arg0;
- (BOOL)skipLoadResource;
- (void)setSkipLoadVideo:(BOOL)arg0;
- (id)projectUUID;
- (BOOL)skipLoadVideo;
- (BOOL)isBackupProject;
- (BOOL)mergeDuringEdit;
- (void)setProjectUUID:(id)arg0;
- (void)setIsBackupProject:(BOOL)arg0;
- (id)init;
- (id)workspace;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)setWorkspace:(id)arg0;
- (void)setIsCancelled:(BOOL)arg0;
- (id)tracer;
- (void)setTracer:(id)arg0;
- (BOOL)isEdit;

@end