//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiscoverDFeedHotListCardShowModel : MTLModel <MTLJSONSerializing> {
    NSString *_uniqueAddr;
    NSString *_itemID;
    double _showTimeStamp;
}

@property (copy, nonatomic) NSString *uniqueAddr;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) double showTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setShowTimeStamp:(double)arg0;
- (double)showTimeStamp;
- (id)uniqueAddr;
- (void)setUniqueAddr:(id)arg0;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;

@end