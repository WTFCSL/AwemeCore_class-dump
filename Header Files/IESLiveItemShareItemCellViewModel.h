//
//     Generated by private class-dump
//

@class NSString, ItemShareListResponse_ItemInfo;

@interface IESLiveItemShareItemCellViewModel : NSObject {
    BOOL _firstItem;
    BOOL _lastItem;
    BOOL _hasTrackShow;
    ItemShareListResponse_ItemInfo *_itemInfo;
    NSString *_itemType;
}

@property (retain, nonatomic) ItemShareListResponse_ItemInfo *itemInfo;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic) BOOL firstItem;
@property (nonatomic) BOOL lastItem;
@property (nonatomic) BOOL hasTrackShow;

- (void)setItemInfo:(id)arg0;
- (BOOL)hasTrackShow;
- (void)setHasTrackShow:(BOOL)arg0;
- (id)itemType;
- (void)setItemType:(id)arg0;
- (BOOL)lastItem;
- (void).cxx_destruct;
- (id)itemInfo;
- (BOOL)firstItem;
- (void)setFirstItem:(BOOL)arg0;
- (void)setLastItem:(BOOL)arg0;

@end
