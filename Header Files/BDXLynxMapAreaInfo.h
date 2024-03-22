//
//     Generated by private class-dump
//

@class NSString;

@interface BDXLynxMapAreaInfo : MTLModel <MTLJSONSerializing> {
    NSString *_cityCode;
    NSString *_name;
    NSString *_poiID;
    NSString *_schoolName;
    NSString *_sID;
    NSString *_typeCode;
}

@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSString *sID;
@property (copy, nonatomic) NSString *typeCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)poiID;
- (void)setPoiID:(id)arg0;
- (void)setSchoolName:(id)arg0;
- (id)sID;
- (void)setSID:(id)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)typeCode;
- (id)name;
- (id)cityCode;
- (void)setCityCode:(id)arg0;
- (void)setTypeCode:(id)arg0;
- (id)schoolName;

@end
