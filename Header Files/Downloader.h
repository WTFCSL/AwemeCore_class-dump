//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface Downloader : NSObject {
    struct IODLProvider { void /* function */ **x0; } *m_pODLProvider;
    struct CODLListenerImpl { void /* function */ **x0; id x1; id x2; } *m_pODLListenerImpl;
    int m_iRefCount;
    NSMutableDictionary *m_dStartParam;
}

- (id)getStringValue:(id)arg0;
- (int)deleteTask:(id)arg0;
- (int)setStringValue:(id)arg0 paramValue:(id)arg1;
- (int)initDownloader:(id)arg0 downloaderListener:(id)arg1;
- (int)destroyDownloader;
- (id)createTask:(id)arg0 fileUniqId:(id)arg1 fileName:(id)arg2 newTask:(int *)arg3;
- (id)getAllCompleteFiles;
- (id)resumeAllUnfinishedTasks;
- (void).cxx_destruct;
- (void)dealloc;
- (int)deleteFile:(id)arg0;

@end
