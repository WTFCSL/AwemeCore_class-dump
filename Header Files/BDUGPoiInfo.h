//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGPoiInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_locationId;
    NSString *_amapId;
    NSString *_typeCode;
    NSString *_name;
    NSString *_awemeId;
    double _confidence;
    double _distance;
    NSString *_source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *locationId;
@property (copy, nonatomic) NSString *amapId;
@property (copy, nonatomic) NSString *typeCode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) double confidence;
@property (nonatomic) double distance;
@property (copy, nonatomic) NSString *source;

+ (id)poiInfoWithDictionary:(id)arg0;
+ (BOOL)supportsSecureCoding;

- (void)setAwemeId:(id)arg0;
- (id)awemeId;
- (id)amapId;
- (id)initWithLocationId:(id)arg0 amapId:(id)arg1 typeCode:(id)arg2 name:(id)arg3 awemeId:(id)arg4 confidence:(double)arg5 distance:(double)arg6 source:(id)arg7;
- (void)setAmapId:(id)arg0;
- (double)distance;
- (double)confidence;
- (void)setConfidence:(double)arg0;
- (void)setDistance:(double)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setName:(id)arg0;
- (void)setSource:(id)arg0;
- (id)typeCode;
- (void)encodeWithCoder:(id)arg0;
- (id)name;
- (id)locationId;
- (void)setLocationId:(id)arg0;
- (void)setTypeCode:(id)arg0;
- (id)toJSON;

@end
