//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, NSArray;

@interface IESECGoodsServiceNewbeeModel : MTLModel <MTLJSONSerializing> {
    NSString *_urlNewbee;
    IESECURLModel *_icon;
    NSArray *_services;
}

@property (copy, nonatomic) NSString *urlNewbee;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)servicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)urlNewbee;
- (void)setUrlNewbee:(id)arg0;
- (void)setServices:(id)arg0;
- (id)icon;
- (id)services;
- (void).cxx_destruct;
- (void)setIcon:(id)arg0;

@end
