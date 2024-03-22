//
//     Generated by private class-dump
//

@class NSString;

@interface AWEEComWidgetGuideFigureModel : MTLModel <MTLJSONSerializing> {
    NSString *_url;
    double _width;
    double _height;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (double)height;
- (void)setUrl:(id)arg0;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (id)url;

@end
