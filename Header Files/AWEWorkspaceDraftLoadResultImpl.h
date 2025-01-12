//
//     Generated by private class-dump
//

@class NSString, NSError, NSMutableArray, AWEVideoPublishViewModel;

@interface AWEWorkspaceDraftLoadResultImpl : NSObject <AWEWorkspaceDraftLoadResult> {
    NSError *_fatalError;
    AWEVideoPublishViewModel *_workspace;
    NSMutableArray *_nonfatalErrors;
}

@property (retain, nonatomic) NSMutableArray *nonfatalErrors;
@property (retain, nonatomic) NSError *fatalError;
@property (retain, nonatomic) AWEVideoPublishViewModel *workspace;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFatalError:(id)arg0;
- (id)nonfatalErrors;
- (void)addNonfatalErrorIfNeeded:(id)arg0;
- (void)setNonfatalErrors:(id)arg0;
- (id)workspace;
- (void).cxx_destruct;
- (id)error;
- (void)setWorkspace:(id)arg0;
- (id)fatalError;

@end
