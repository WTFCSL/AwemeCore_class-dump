//
//     Generated by private class-dump
//

@class NSString;

@interface AWELVideoEpisodeWidgetItemModel : MTLModel <MTLJSONSerializing> {
    long long _offset;
    long long _preOffset;
    long long _duration;
    long long _widgetType;
    NSString *_widgetJSON;
}

@property (nonatomic) long long offset;
@property (nonatomic) long long preOffset;
@property (nonatomic) long long duration;
@property (nonatomic) long long widgetType;
@property (copy, nonatomic) NSString *widgetJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)preOffset;
- (void)setPreOffset:(long long)arg0;
- (id)widgetJSON;
- (void)setWidgetJSON:(id)arg0;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (long long)widgetType;
- (long long)duration;
- (long long)offset;
- (void)setWidgetType:(long long)arg0;
- (void)setDuration:(long long)arg0;

@end
