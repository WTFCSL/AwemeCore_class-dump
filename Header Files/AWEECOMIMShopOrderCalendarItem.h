//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary, NSString;

@interface AWEECOMIMShopOrderCalendarItem : MTLModel <MTLJSONSerializing> {
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSDictionary *_data;
    NSString *_displayStartTime;
}

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly, copy, nonatomic) NSString *displayStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)endTime;
- (id)startTime;
- (id)displayStartTime;
- (void)setEndTime:(id)arg0;

@end
