//
//     Generated by private class-dump
//

@class NSArray, AWELocalMomentNotesInfo;

@interface AWELocalColorRingModel : AWELocalUserCenterBaseModel <WCTTableCoding> {
    NSArray *_ringItems;
    long long _ringStatus;
    long long _visibleStatus;
    AWELocalMomentNotesInfo *_notesInfo;
}

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property long long ringStatus;
@property (retain, nonatomic) NSArray *ringItems;
@property long long visibleStatus;
@property (retain, nonatomic) AWELocalMomentNotesInfo *notesInfo;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)notesInfo;
+ (const void *)ringItems;
+ (id)ringItemsJSONTransformer;
+ (id)notesInfoJSONTransformer;
+ (const void *)userID;
+ (const void *)updateTime;
+ (const void *)isDeleted;
+ (id)JSONKeyPathsByPropertyKey;

- (id)notesInfo;
- (void)setNotesInfo:(id)arg0;
- (id)ringItems;
- (long long)ringStatus;
- (void)setRingItems:(id)arg0;
- (void)setRingStatus:(long long)arg0;
- (id)userPropertyDetail;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)targetTable;
- (long long)visibleStatus;
- (void)setVisibleStatus:(long long)arg0;

@end