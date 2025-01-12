//
//     Generated by private class-dump
//

@class NSString, NSObject, NSFileHandle;
@protocol OS_dispatch_queue;

@interface BDCastSinkLogManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _enableConsoleLog;
    unsigned int _line;
    NSString *_directory;
    NSString *_currentFile;
    NSFileHandle *_fileHandle;
}

@property (readonly, copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *currentFile;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned int line;
@property (nonatomic) BOOL enableConsoleLog;

+ (id)sharedInstance;

- (BOOL)enableConsoleLog;
- (void)setEnableConsoleLog:(BOOL)arg0;
- (void)enableConsoleLog:(BOOL)arg0;
- (void)deleteOldFiles;
- (unsigned long long)totalSizeOfFileArray:(id)arg0;
- (void)setFileHandle:(id)arg0;
- (id)fileHandle;
- (id)init;
- (void).cxx_destruct;
- (id)directory;
- (void)log:(id)arg0;
- (unsigned int)line;
- (void)setLine:(unsigned int)arg0;
- (id)currentFile;
- (void)setCurrentFile:(id)arg0;
- (id)buildInfo;

@end
