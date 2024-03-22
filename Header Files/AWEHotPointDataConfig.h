//
//     Generated by private class-dump
//

@class AWENewHotSearchModel, NSNumber;

@interface AWEHotPointDataConfig : NSObject {
    BOOL _responseHasMore;
    AWENewHotSearchModel *_hotSpotModel;
    NSNumber *_offset;
    NSNumber *_foldOffset;
}

@property (retain, nonatomic) AWENewHotSearchModel *hotSpotModel;
@property (nonatomic) BOOL responseHasMore;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *foldOffset;

+ (id)initialConfig;
+ (id)initialConfigWithExpandRelatedSpotModel:(id)arg0;

- (id)hotSpotModel;
- (BOOL)isAD;
- (void)setHotSpotModel:(id)arg0;
- (id)itemIDList;
- (id)keyWord;
- (void)setResponseHasMore:(BOOL)arg0;
- (long long)isTrending;
- (BOOL)responseHasMore;
- (id)foldOffset;
- (void)setFoldOffset:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)offset;

@end
