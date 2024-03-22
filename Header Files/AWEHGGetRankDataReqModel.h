//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEHGGetRankDataReqModel : NSObject {
    NSNumber *_pageNum;
    NSNumber *_pageSize;
    NSNumber *_dataType;
    NSNumber *_priority;
    NSString *_extra;
    NSString *_value;
    NSString *_zoneId;
    NSString *_rankType;
    NSString *_relationType;
}

@property (copy, nonatomic) NSNumber *pageNum;
@property (copy, nonatomic) NSNumber *pageSize;
@property (copy, nonatomic) NSNumber *dataType;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *zoneId;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *relationType;

- (void)setExtra:(id)arg0;
- (id)zoneId;
- (void)setZoneId:(id)arg0;
- (void)setRelationType:(id)arg0;
- (void)setPageNum:(id)arg0;
- (id)pageNum;
- (id)numberOfRankType;
- (id)numberOfRelationType;
- (void)setDataType:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (void)setRankType:(id)arg0;
- (void)setPriority:(id)arg0;
- (id)extra;
- (id)dataType;
- (void)setValue:(id)arg0;
- (id)priority;
- (id)rankType;
- (id)pageSize;
- (void)setPageSize:(id)arg0;
- (id)relationType;

@end