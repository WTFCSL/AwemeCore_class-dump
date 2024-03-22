//
//     Generated by private class-dump
//

@class NSString;

@interface CSJTemplateDataModel : NSObject {
    long long _type;
    long long _scene;
    NSString *_templateDataId;
    NSString *_url;
    NSString *_version;
    NSString *_data;
    NSString *_md5;
    double _createDateTimeInterval;
    double _modifyDateTimeInterval;
    double _networkTimeout;
}

@property (nonatomic) long long type;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *templateDataId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) double createDateTimeInterval;
@property (nonatomic) double modifyDateTimeInterval;
@property (nonatomic) double networkTimeout;

- (void)updateCreateDateTime;
- (void)updateModifyDateTime;
- (BOOL)isDynamicType;
- (BOOL)haveDataCache;
- (BOOL)haveURLCache;
- (double)realNetworkTimeout;
- (double)modifyDateTimeInterval;
- (id)templateDataId;
- (id)initWithDicitonary:(id)arg0;
- (void)setCreateDateTimeInterval:(double)arg0;
- (void)setModifyDateTimeInterval:(double)arg0;
- (double)createDateTimeInterval;
- (void)setTemplateDataId:(id)arg0;
- (id)init;
- (id)data;
- (void)setScene:(long long)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (long long)type;
- (void)setUrl:(id)arg0;
- (double)networkTimeout;
- (void)setType:(long long)arg0;
- (id)version;
- (id)dictionaryValue;
- (void)setNetworkTimeout:(double)arg0;
- (id)url;
- (long long)scene;
- (id)md5;
- (void)setMd5:(id)arg0;
- (id)modelKey;

@end