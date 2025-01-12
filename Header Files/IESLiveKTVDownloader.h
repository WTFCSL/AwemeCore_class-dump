//
//     Generated by private class-dump
//

@class IESLiveCommonDownloadQueue, NSMutableDictionary, NSObject;

@interface IESLiveKTVDownloader : NSObject {
    IESLiveCommonDownloadQueue *_commonDownloadQueue;
    NSMutableDictionary *_downloadingTaskMap;
    NSObject *_downloadToken;
}

@property (retain, nonatomic) NSMutableDictionary *downloadingTaskMap;
@property (retain, nonatomic) NSObject *downloadToken;
@property (retain, nonatomic) IESLiveCommonDownloadQueue *commonDownloadQueue;

+ (id)genFilePathWithUrl:(id)arg0 musicId:(id)arg1 downloadType:(long long)arg2;

- (id)downloadingTaskMap;
- (void)setDownloadingTaskMap:(id)arg0;
- (id)readLyricFromFile:(id)arg0 lyricType:(unsigned long long)arg1 lyricsOffset:(double)arg2 duration:(long long)arg3;
- (id)downloadKTVWithUrls:(id)arg0 musicId:(id)arg1 downloadTypes:(id)arg2 isPreload:(BOOL)arg3 priority:(long long)arg4 withCompletion:(id /* block */)arg5;
- (id)commonDownloadQueue;
- (id)downloadMusicWithModel:(id)arg0 isPreload:(BOOL)arg1 priority:(long long)arg2 withCompletion:(id /* block */)arg3;
- (id)hasDownloadOperationWithMusicId:(id)arg0 downloadTypes:(id)arg1 isPreload:(BOOL)arg2;
- (id)getIdentifiyWithTypes:(id)arg0;
- (void)p_logDownloadWithString:(id)arg0 musicID:(id)arg1 downloadTypes:(id)arg2;
- (id)hasDownloadOperationWithMusicId:(id)arg0 downloadTypes:(id)arg1;
- (id)downloadMusicWithModel:(id)arg0 isPreload:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (id)downloadMusicWithModel:(id)arg0 priority:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)downloadKTVWithUrl:(id)arg0 musicId:(id)arg1 downloadType:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)cancelDownloadMusicId:(id)arg0 downloadTypes:(id)arg1;
- (id)downloadKTVTaskWithMusicId:(id)arg0 type:(long long)arg1;
- (void)cancelAllPendingTask;
- (void)setCommonDownloadQueue:(id)arg0;
- (void)setDownloadToken:(id)arg0;
- (id)downloadToken;
- (id)init;
- (void).cxx_destruct;

@end
