//
//     Generated by private class-dump
//

@protocol ACCWorkspaceReader, ACCRepoDataContext;

@interface ACCUseCase : NSObject {
    id<ACCRepoDataContext> _dataContext;
    id<ACCWorkspaceReader> _workspaceReader;
}

@property (readonly, weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (readonly, weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;

- (id)dataContext;
- (id)workspaceReader;
- (void)setupWithProxy:(id)arg0;
- (void).cxx_destruct;

@end