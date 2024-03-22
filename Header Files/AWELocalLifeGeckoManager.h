//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWELocalLifeGeckoManager : NSObject {
    NSMutableArray *_prefetchChannels;
}

@property (retain, nonatomic) NSMutableArray *prefetchChannels;

+ (id)sharedInstance;

- (void)setPrefetchChannels:(id)arg0;
- (void)prefetchInLocalLife;
- (void)prefetchWithUrls:(id)arg0;
- (id)prefetchChannels;
- (id)filterChannels:(id)arg0;
- (void)trackChannelDownloadWithChannelName:(id)arg0 result:(id)arg1;
- (void)prefetchInCodeStart;
- (id)init;
- (void).cxx_destruct;

@end