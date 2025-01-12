//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESVSVideoHistoryAPI;

@interface IESVSVideoHistoryServiceImp : NSObject <IESVSVideoHistoryService> {
    long long _pingTime;
    IESVSVideoHistoryAPI *_historyApi;
    NSMutableDictionary *_history;
    NSMutableDictionary *_recordTime;
}

@property (nonatomic) long long pingTime;
@property (retain, nonatomic) IESVSVideoHistoryAPI *historyApi;
@property (retain, nonatomic) NSMutableDictionary *history;
@property (retain, nonatomic) NSMutableDictionary *recordTime;

+ (id)sharedInstance;

- (void)setRecordTime:(id)arg0;
- (id)recordTime;
- (void)appWillTerminateNotification;
- (double)getVideoHistoryByEpisodeID:(long long)arg0 OrEpisode:(id)arg1;
- (double)getVideoDurationByEpisodeID:(long long)arg0;
- (void)getVideoHistoryByEpisodeIDs:(id)arg0 complete:(id /* block */)arg1;
- (void)recordLocalVideoHistory:(double)arg0 ByEpisode:(long long)arg1 isPing:(BOOL)arg2;
- (void)recordLocalVideoDuration:(double)arg0 ByEpisode:(long long)arg1;
- (void)statsVideoPlay:(long long)arg0;
- (long long)pingTime;
- (id)historyApi;
- (void)setHistoryApi:(id)arg0;
- (void)addTerminateObserver;
- (void)saveHistoryToKVStore;
- (void)setPingTime:(long long)arg0;
- (void).cxx_destruct;
- (id)history;
- (void)setHistory:(id)arg0;

@end
