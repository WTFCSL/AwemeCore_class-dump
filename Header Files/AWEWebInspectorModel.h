//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEWebInspectorModel : MTLModel <MTLJSONSerializing> {
    long long _webReportType;
    NSDictionary *_labelThreshold;
}

@property (nonatomic) long long webReportType;
@property (copy, nonatomic) NSDictionary *labelThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)webReportType;
- (void)setWebReportType:(long long)arg0;
- (id)labelThreshold;
- (void)setLabelThreshold:(id)arg0;
- (void).cxx_destruct;

@end
