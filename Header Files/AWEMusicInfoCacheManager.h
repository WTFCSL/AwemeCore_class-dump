//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEMusicInfoCacheManager : NSObject {
    NSMutableDictionary *_musicCollectStatusCache;
}

@property (retain, nonatomic) NSMutableDictionary *musicCollectStatusCache;

+ (id)sharedInstance;

- (void)musicCollectedStatusChanged:(id)arg0;
- (id)musicCollectStatusForMusicID:(id)arg0;
- (id)musicCollectStatusCache;
- (void)setMusicCollectStatusCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
