//
//     Generated by private class-dump
//

@class FMDatabase, AWEStorage, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFeedbackRecorder : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AWEStorage *_storage;
    unsigned long long _count;
    NSMutableArray *_parsers;
    FMDatabase *_db;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSMutableArray *parsers;
@property (retain, nonatomic) FMDatabase *db;

+ (void)awe_downloadRegisterParsers;
+ (void)recordForVideoDownload:(id)arg0 code:(long long)arg1;
+ (void)awe_studioRegisterParsers;
+ (void)recordForVideoUpload:(unsigned long long)arg0 code:(long long)arg1 stage:(long long)arg2;
+ (void)recordForVideoMerge:(unsigned long long)arg0 code:(long long)arg1;
+ (void)recordForVideoRecord:(unsigned long long)arg0 code:(long long)arg1;
+ (void)recordForCameraInit:(unsigned long long)arg0 code:(long long)arg1;
+ (void)recordForSaveVideoDraft:(unsigned long long)arg0 code:(long long)arg1;
+ (void)recordForLoadVideoDraft:(unsigned long long)arg0 code:(long long)arg1;
+ (void)recordForDeleteVideoDraft:(unsigned long long)arg0 code:(long long)arg1;
+ (void)recordForTotalVideoDraft:(unsigned long long)arg0 code:(long long)arg1 draftCreationData:(id)arg2;
+ (void)recordForVideoDraftTimeline:(unsigned long long)arg0 code:(long long)arg1 draftInfo:(id)arg2 title:(id)arg3;
+ (BOOL)enable;
+ (id)sharedRecorder;

- (id)parsers;
- (void)setParsers:(id)arg0;
- (BOOL)initDB;
- (BOOL)insertRecordToDB:(long long)arg0 label:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)fetchFromDB;
- (void)recordForType:(long long)arg0 label:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (void)registerParsers:(id)arg0;
- (void)setStorage:(id)arg0;
- (void)setCount:(unsigned long long)arg0;
- (void)setDb:(id)arg0;
- (BOOL)cleanUp;
- (id)init;
- (id)db;
- (void).cxx_destruct;
- (id)storage;
- (id)dbPath;
- (unsigned long long)count;
- (id)queue;
- (void)setQueue:(id)arg0;
- (id)collect;
- (id)keyForType:(long long)arg0;

@end
