//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface HunterContainerMonitor : MTLModel <MTLJSONSerializing> {
    BOOL _disableHunterMonitor;
    NSString *_schema;
    NSString *_channel;
    NSString *_sURL;
    NSString *_bundle;
    NSString *_scene;
    NSString *_fromType;
    NSNumber *_bulletUpdateType;
    NSNumber *_statusLoad;
    NSString *_errorDesc;
    NSString *_bulletResFrom;
    unsigned long long _timestampStartBusiness;
    unsigned long long _timestampStartServerDataParse;
    unsigned long long _timestampEndServerDataParse;
    unsigned long long _timestampStartClientDataParse;
    unsigned long long _timestampEndClientDataParse;
    unsigned long long _timestampStartPreserveDataParse;
    unsigned long long _timestampEndPreserveDataParse;
    unsigned long long _timestampStartBullet;
    unsigned long long _timestampStartSchemaProcessors;
    unsigned long long _timestampEndSchemaProcessors;
    unsigned long long _timestampStartClientDataProcessors;
    unsigned long long _timestampEndClientDataProcessors;
    unsigned long long _timestampStartStorageDataProcessors;
    unsigned long long _timestampEndStorageDataProcessors;
    unsigned long long _timestampEndLoad;
    unsigned long long _durationBusiness;
    unsigned long long _durationClientDataParse;
    unsigned long long _durationServerDataParse;
    unsigned long long _durationPreserveDataParse;
    unsigned long long _durationSchemaProcessors;
    unsigned long long _durationClientDataProcessors;
    unsigned long long _durationStorageDataProcessors;
    unsigned long long _durationLoad;
    NSDictionary *_bulletPerfDict;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *sURL;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *fromType;
@property (copy, nonatomic) NSNumber *bulletUpdateType;
@property (copy, nonatomic) NSNumber *statusLoad;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSString *bulletResFrom;
@property (nonatomic) unsigned long long timestampStartBusiness;
@property (nonatomic) unsigned long long timestampStartServerDataParse;
@property (nonatomic) unsigned long long timestampEndServerDataParse;
@property (nonatomic) unsigned long long timestampStartClientDataParse;
@property (nonatomic) unsigned long long timestampEndClientDataParse;
@property (nonatomic) unsigned long long timestampStartPreserveDataParse;
@property (nonatomic) unsigned long long timestampEndPreserveDataParse;
@property (nonatomic) unsigned long long timestampStartBullet;
@property (nonatomic) unsigned long long timestampStartSchemaProcessors;
@property (nonatomic) unsigned long long timestampEndSchemaProcessors;
@property (nonatomic) unsigned long long timestampStartClientDataProcessors;
@property (nonatomic) unsigned long long timestampEndClientDataProcessors;
@property (nonatomic) unsigned long long timestampStartStorageDataProcessors;
@property (nonatomic) unsigned long long timestampEndStorageDataProcessors;
@property (nonatomic) unsigned long long timestampEndLoad;
@property (nonatomic) unsigned long long durationBusiness;
@property (nonatomic) unsigned long long durationClientDataParse;
@property (nonatomic) unsigned long long durationServerDataParse;
@property (nonatomic) unsigned long long durationPreserveDataParse;
@property (nonatomic) unsigned long long durationSchemaProcessors;
@property (nonatomic) unsigned long long durationClientDataProcessors;
@property (nonatomic) unsigned long long durationStorageDataProcessors;
@property (nonatomic) unsigned long long durationLoad;
@property (copy, nonatomic) NSDictionary *bulletPerfDict;
@property (nonatomic) BOOL disableHunterMonitor;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)sURL;
- (void)setSURL:(id)arg0;
- (void)logServerDataParseStart;
- (void)logServerDataParseEnd;
- (void)logClientDataParseStart;
- (void)logClientDataParseEnd;
- (void)setTimestampStartBusiness:(unsigned long long)arg0;
- (void)setTimestampStartClientDataParse:(unsigned long long)arg0;
- (void)setTimestampEndClientDataParse:(unsigned long long)arg0;
- (void)setTimestampStartServerDataParse:(unsigned long long)arg0;
- (void)setTimestampEndServerDataParse:(unsigned long long)arg0;
- (void)setTimestampStartBullet:(unsigned long long)arg0;
- (unsigned long long)timestampStartBullet;
- (unsigned long long)timestampStartBusiness;
- (void)setDurationBusiness:(unsigned long long)arg0;
- (unsigned long long)timestampEndServerDataParse;
- (unsigned long long)timestampStartServerDataParse;
- (void)setDurationServerDataParse:(unsigned long long)arg0;
- (unsigned long long)timestampEndClientDataParse;
- (unsigned long long)timestampStartClientDataParse;
- (void)setDurationClientDataParse:(unsigned long long)arg0;
- (void)logSchema:(id)arg0;
- (void)logBusinessStart;
- (void)logBulletStart;
- (void)calcDuration;
- (id)performanceDict;
- (id)bulletUpdateType;
- (void)setBulletUpdateType:(id)arg0;
- (id)statusLoad;
- (void)setStatusLoad:(id)arg0;
- (id)bulletResFrom;
- (void)setBulletResFrom:(id)arg0;
- (unsigned long long)durationBusiness;
- (unsigned long long)durationClientDataParse;
- (unsigned long long)durationServerDataParse;
- (id)bulletPerfDict;
- (void)setBulletPerfDict:(id)arg0;
- (void)logLoadEnd;
- (void)logContainerPerfClientWithFromType:(id)arg0;
- (void)logClientDataProcessorsStart;
- (void)logClientDataProcessorsEnd;
- (BOOL)disableHunterMonitor;
- (BOOL)hasCacheWithParams:(id)arg0 channel:(id)arg1;
- (void)setTimestampStartPreserveDataParse:(unsigned long long)arg0;
- (void)setTimestampEndPreserveDataParse:(unsigned long long)arg0;
- (void)setTimestampStartSchemaProcessors:(unsigned long long)arg0;
- (void)setTimestampEndSchemaProcessors:(unsigned long long)arg0;
- (void)setTimestampStartClientDataProcessors:(unsigned long long)arg0;
- (void)setTimestampEndClientDataProcessors:(unsigned long long)arg0;
- (void)setTimestampStartStorageDataProcessors:(unsigned long long)arg0;
- (void)setTimestampEndStorageDataProcessors:(unsigned long long)arg0;
- (void)setTimestampEndLoad:(unsigned long long)arg0;
- (unsigned long long)timestampEndPreserveDataParse;
- (unsigned long long)timestampStartPreserveDataParse;
- (void)setDurationPreserveDataParse:(unsigned long long)arg0;
- (unsigned long long)timestampEndSchemaProcessors;
- (unsigned long long)timestampStartSchemaProcessors;
- (void)setDurationSchemaProcessors:(unsigned long long)arg0;
- (unsigned long long)timestampEndClientDataProcessors;
- (unsigned long long)timestampStartClientDataProcessors;
- (void)setDurationClientDataProcessors:(unsigned long long)arg0;
- (unsigned long long)timestampEndStorageDataProcessors;
- (unsigned long long)timestampStartStorageDataProcessors;
- (void)setDurationStorageDataProcessors:(unsigned long long)arg0;
- (unsigned long long)timestampEndLoad;
- (void)setDurationLoad:(unsigned long long)arg0;
- (id)initWithHunterContext:(id)arg0;
- (void)logPreserveDataParseStart;
- (void)logPreserveDataParseEnd;
- (void)logSchemeProcessorsStart;
- (void)logSchemeProcessorsEnd;
- (void)logStorageDataProcessorsStart;
- (void)logStorageDataProcessorsEnd;
- (void)updateBulletResFrom:(id)arg0;
- (unsigned long long)durationPreserveDataParse;
- (unsigned long long)durationSchemaProcessors;
- (unsigned long long)durationClientDataProcessors;
- (unsigned long long)durationStorageDataProcessors;
- (unsigned long long)durationLoad;
- (void)setDisableHunterMonitor:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (id)bundle;
- (id)channel;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setBundle:(id)arg0;
- (void)setErrorDesc:(id)arg0;
- (id)errorDesc;
- (void)reset;
- (id)schema;
- (id)scene;
- (id)fromType;
- (void)setFromType:(id)arg0;
- (unsigned long long)currentTimeInterval;

@end
