//
//     Generated by private class-dump
//

@class HunterClientDataProcessorManager, HunterSchemaProcessorManager;

@interface HunterTemplateBundlePlugin : HunterBasePlugin {
    HunterSchemaProcessorManager *_schemaProcessorManager;
    HunterClientDataProcessorManager *_clientDataProcessorManager;
}

@property (retain, nonatomic) HunterSchemaProcessorManager *schemaProcessorManager;
@property (retain, nonatomic) HunterClientDataProcessorManager *clientDataProcessorManager;

+ (BOOL)hasTemplateBundle:(id)arg0;

- (BOOL)shouldActive;
- (void)onHunterBindStart:(id)arg0;
- (void)onHunterProcessEnd:(id)arg0;
- (id)clientDataProcessorManager;
- (void)setClientDataProcessorManager:(id)arg0;
- (id)schemaProcessorManager;
- (id)processedSchemaWithSchemaProcessorManager:(id)arg0;
- (void)setSchemaProcessorManager:(id)arg0;
- (void)setupLynxTemplateBundle;
- (void)useTemplateBundleCacheWhenExist;
- (void)updateLynxContextWithTemplateBundle:(id)arg0;
- (void)updateMonitorBulletResFromByTemplateBundle;
- (void)handleHunterConfigCollectionItem:(id)arg0;
- (void)setupSchemaAndClientDataProcessorWithPageConfigModel:(id)arg0;
- (id)clientDataWithClientDataProcessorManager:(id)arg0;
- (void).cxx_destruct;

@end
