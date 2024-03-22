//
//     Generated by private class-dump
//

@class AWEECommerceWidgetGuideIconConfig, AWEECommerceWidgetGuideWidgetConfig, NSString;

@interface AWEECommerceWidgetGuideSettings : MTLModel <MTLJSONSerializing> {
    AWEECommerceWidgetGuideWidgetConfig *_widgetConfig;
    AWEECommerceWidgetGuideIconConfig *_iconConfig;
}

@property (retain, nonatomic) AWEECommerceWidgetGuideWidgetConfig *widgetConfig;
@property (retain, nonatomic) AWEECommerceWidgetGuideIconConfig *iconConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)widgetConfigJSONTransformer;
+ (id)iconConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconConfig;
- (void)setIconConfig:(id)arg0;
- (void).cxx_destruct;
- (id)widgetConfig;
- (void)setWidgetConfig:(id)arg0;

@end