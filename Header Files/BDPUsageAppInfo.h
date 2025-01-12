//
//     Generated by private class-dump
//

@class NSString;

@interface BDPUsageAppInfo : NSObject {
    NSString *_ID;
    NSString *_name;
    NSString *_ttid;
    NSString *_summary;
    NSString *_minJSsdkVersion;
    NSString *_icon;
    NSString *_schema;
    NSString *_versionType;
    long long _type;
    unsigned long long _state;
    long long _timestamp;
    long long _orientation;
}

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ttid;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *minJSsdkVersion;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *versionType;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long orientation;

+ (id)modelCustomPropertyMapper;
+ (id)defaultVersionType;

- (BOOL)modelCustomTransformToDictionary:(id)arg0;
- (id)versionType;
- (id)minJSsdkVersion;
- (void)setTtid:(id)arg0;
- (void)setMinJSsdkVersion:(id)arg0;
- (void)setVersionType:(id)arg0;
- (id)ttid;
- (void)setSchema:(id)arg0;
- (id)icon;
- (id)ID;
- (long long)timestamp;
- (void)setID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setSummary:(id)arg0;
- (void)setState:(unsigned long long)arg0;
- (long long)type;
- (long long)orientation;
- (void)setType:(long long)arg0;
- (void)setOrientation:(long long)arg0;
- (void)setTimestamp:(long long)arg0;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)summary;
- (id)schema;
- (id)name;

@end
