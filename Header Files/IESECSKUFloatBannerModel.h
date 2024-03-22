//
//     Generated by private class-dump
//

@class IESECSKUViewConfigModel, NSArray, NSDictionary, NSString;

@interface IESECSKUFloatBannerModel : MTLModel <MTLJSONSerializing> {
    IESECSKUViewConfigModel *_background;
    NSArray *_contents;
    NSDictionary *_showEventParams;
}

@property (retain, nonatomic) IESECSKUViewConfigModel *background;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSDictionary *showEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)showEventParams;
- (void)setShowEventParams:(id)arg0;
- (id)background;
- (void).cxx_destruct;
- (id)contents;
- (void)setBackground:(id)arg0;
- (void)setContents:(id)arg0;

@end
