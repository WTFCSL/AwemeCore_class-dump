//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEHomePageRemoteItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_moduleType;
    NSString *_businessType;
    NSString *_businessId;
    NSDictionary *_data;
    double _cellHeight;
}

@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) double cellHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setBusinessType:(id)arg0;
- (id)businessType;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)description;
- (id)businessId;
- (id)moduleType;
- (void)setBusinessId:(id)arg0;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (void)setModuleType:(id)arg0;

@end
