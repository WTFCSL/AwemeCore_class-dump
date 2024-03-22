//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEGDAlbumDataManager : NSObject {
    NSMutableDictionary *_albumDataProcessors;
}

@property (retain, nonatomic) NSMutableDictionary *albumDataProcessors;

+ (id)sharedInstance;

- (id)albumDataProcessors;
- (void)setupAlbumDataProcessor:(id)arg0 productID:(id)arg1 poiID:(id)arg2 backendType:(id)arg3;
- (id)albumDataProcessor:(id)arg0;
- (void)setAlbumDataProcessors:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end