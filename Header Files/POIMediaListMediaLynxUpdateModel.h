//
//     Generated by private class-dump
//

@class NSString;

@interface POIMediaListMediaLynxUpdateModel : MTLModel <MTLJSONSerializing> {
    NSString *_footerData;
    NSString *_headerData;
}

@property (copy, nonatomic) NSString *footerData;
@property (copy, nonatomic) NSString *headerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setHeaderData:(id)arg0;
- (id)footerData;
- (void)setFooterData:(id)arg0;
- (void).cxx_destruct;
- (id)headerData;

@end
