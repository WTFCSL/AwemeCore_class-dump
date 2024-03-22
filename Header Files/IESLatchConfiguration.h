//
//     Generated by private class-dump
//

@class NSString, NSMapTable, NSHashTable, NSError, NSMutableArray, NSMutableDictionary;
@protocol IESPrefetchCapability, IESLatchTemplateOutput;

@interface IESLatchConfiguration : NSObject {
    BOOL _enabled;
    BOOL _isLatchConfigLoadTriggered;
    BOOL _isLatchConfigNotExist;
    id<IESPrefetchCapability> _capability;
    NSHashTable *_delegates;
    NSMutableArray *_schemaResolvers;
    NSMapTable *_pageHashMap;
    NSMutableArray *_templates;
    id<IESLatchTemplateOutput> _latchTemplateOutput;
    NSMapTable *_schemaHashMap;
    NSError *_versionError;
    NSString *_business;
    NSError *_loadFileError;
    NSMutableDictionary *_ioCostMetric;
}

@property (copy, nonatomic) NSString *business;
@property (retain, nonatomic) id<IESPrefetchCapability> capability;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSMutableArray *schemaResolvers;
@property (retain, nonatomic) NSMapTable *pageHashMap;
@property (retain, nonatomic) NSMutableArray *templates;
@property (retain, nonatomic) id<IESLatchTemplateOutput> latchTemplateOutput;
@property (retain, nonatomic) NSMapTable *schemaHashMap;
@property (retain, nonatomic) NSError *loadFileError;
@property (retain, nonatomic) NSError *versionError;
@property (nonatomic) BOOL isLatchConfigLoadTriggered;
@property (retain, nonatomic) NSMutableDictionary *ioCostMetric;
@property (nonatomic) BOOL isLatchConfigNotExist;

- (void)addEventDelegate:(id)arg0;
- (id)p_convertConfigFromJSON:(id)arg0 withEvent:(id)arg1;
- (void)eventDidFinishLoadConfig:(id)arg0;
- (void)setIsLatchConfigLoadTriggered:(BOOL)arg0;
- (void)removeAllConfigurations;
- (void)loadConfigurationJSON:(id)arg0 bag:(id)arg1;
- (id)loadConfigurationDict:(id)arg0 withEvent:(id)arg1;
- (id)pageHashMap;
- (id)ioCostMetric;
- (void)p_monitorService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)setIoCostMetric:(id)arg0;
- (void)setLoadFileError:(id)arg0;
- (BOOL)isLatchConfigNotExist;
- (BOOL)isLatchConfigLoadTriggered;
- (id)pageForUrl:(id)arg0;
- (id)schemaHashMap;
- (id)resolveSchema:(id)arg0 routerParam:(id)arg1;
- (void)reportIOCost;
- (void)eventDidFinishFetchData:(id)arg0;
- (void)setPageHashMap:(id)arg0;
- (void)setSchemaHashMap:(id)arg0;
- (void)setIsLatchConfigNotExist:(BOOL)arg0;
- (BOOL)checkPageVersion:(id)arg0 url:(id)arg1;
- (id)loadFileError;
- (id)initWithCapability:(id)arg0 business:(id)arg1;
- (id)schemaResolvers;
- (void)registerSchemaResolver:(id)arg0;
- (void)setSchemaResolvers:(id)arg0;
- (id)getSchema:(id)arg0 routerParam:(id)arg1;
- (void)eventDidFinishPrefetch:(id)arg0;
- (void)setLatchTemplateOutput:(id)arg0;
- (void)loaderWithLogInfoMessage:(id)arg0;
- (void)eventDidFinishPrefetchAPI:(id)arg0;
- (id)latchTemplateOutput;
- (void)loadAllConfigurations:(id)arg0;
- (BOOL)pageTemplateExistForUrl:(id)arg0;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)templates;
- (void)setEnabled:(BOOL)arg0;
- (void)setTemplates:(id)arg0;
- (id)business;
- (void)setBusiness:(id)arg0;
- (id)capability;
- (void)setCapability:(id)arg0;
- (id)versionError;
- (void)setVersionError:(id)arg0;

@end
