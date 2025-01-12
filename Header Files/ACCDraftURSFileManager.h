//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCDraftURSFileManagerDelegate;

@interface ACCDraftURSFileManager : NSObject <ACCDraftURSFileManager> {
    id<ACCDraftURSFileManagerDelegate> _delegate;
    NSString *_draftID;
}

@property (copy, nonatomic) NSString *draftID;
@property (weak, nonatomic) id<ACCDraftURSFileManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)draftID;
- (void)setDraftID:(id)arg0;
- (id)initWithDraftID:(id)arg0;
- (id)writeData:(id)arg0 toRelativePath:(id)arg1 inProjectUUID:(id)arg2 error:(id *)arg3;
- (id)pathWithContentsOfURS:(id)arg0 error:(id *)arg1;
- (BOOL)removeItemAtURS:(id)arg0 error:(id *)arg1;
- (id)moveItemAtPath:(id)arg0 toRelativePath:(id)arg1 inProjectUUID:(id)arg2 error:(id *)arg3;
- (id)copyItemAtPath:(id)arg0 toRelativePath:(id)arg1 inProjectUUID:(id)arg2 error:(id *)arg3;
- (BOOL)fileExistsAtURS:(id)arg0 isDirectory:(BOOL *)arg1;
- (id)pathWithURS:(id)arg0 error:(id *)arg1;
- (id)draftURSWithRelativePath:(id)arg0 inProjectUUID:(id)arg1;
- (void)createDirectoryIfNeededWithPath:(id)arg0;
- (BOOL)fileExistsAtURS:(id)arg0;
- (void)generateErrorWithCode:(long long)arg0 userInfo:(id)arg1 error:(id *)arg2;
- (id)contentsOfDirectoryAtURS:(id)arg0 error:(id *)arg1;
- (id)copyItemAtURS:(id)arg0 toRelativePath:(id)arg1 inProjectUUID:(id)arg2 error:(id *)arg3;
- (id)dataWithContentsOfURS:(id)arg0 error:(id *)arg1;
- (id)createDirectoryAtRelativePath:(id)arg0 inProjectUUID:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)isReadableFileAtURS:(id)arg0;
- (BOOL)isWritableFileAtURS:(id)arg0;
- (BOOL)isExecutableFileAtURS:(id)arg0;
- (BOOL)isDeletableFileAtURS:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
