//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;

@interface IESECGoodsDetailLynxCardElement : MTLModel <MTLJSONSerializing> {
    NSString *_schema;
    NSDictionary *_data;
    NSNumber *_height;
    NSNumber *_width;
    NSString *_lynxID;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSString *lynxID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lynxID;
- (void)setLynxID:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (id)height;
- (void)setData:(id)arg0;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (id)schema;

@end