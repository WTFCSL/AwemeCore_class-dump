//
//     Generated by private class-dump
//

@class NSString, AWETeenHotSpotModel, NSMutableArray, NSNumber;

@interface AWETeenHotSpotFeedModel : NSObject {
    BOOL _loadmoreHasMore;
    NSMutableArray *_dataSource;
    AWETeenHotSpotModel *_hotSpotModel;
    NSString *_hotID;
    NSString *_version;
    NSNumber *_cursor;
    unsigned long long _lastViewIndex;
}

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) AWETeenHotSpotModel *hotSpotModel;
@property (copy, nonatomic) NSString *hotID;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) unsigned long long lastViewIndex;

- (void)setLoadmoreHasMore:(BOOL)arg0;
- (BOOL)loadmoreHasMore;
- (id)hotSpotModel;
- (void)setHotSpotModel:(id)arg0;
- (void)setLastViewIndex:(unsigned long long)arg0;
- (unsigned long long)lastViewIndex;
- (long long)totalVideoCount;
- (void)setHotID:(id)arg0;
- (id)hotID;
- (id)cursor;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setCursor:(id)arg0;

@end
