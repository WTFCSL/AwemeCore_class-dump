//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsDetailAppointMetaModel : MTLModel <MTLJSONSerializing> {
    BOOL _isAppointment;
    NSString *_productTitle;
}

@property (copy, nonatomic) NSString *productTitle;
@property (nonatomic) BOOL isAppointment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)productTitle;
- (void)setProductTitle:(id)arg0;
- (void)setIsAppointment:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isAppointment;

@end
