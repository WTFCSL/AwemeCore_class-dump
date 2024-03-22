//
//     Generated by private class-dump
//

@class IESECTextElement, IESECLongContentLabelElement;

@interface IESECGoodsDetailCarAddressDataModel : IESECBaseApiModel {
    IESECLongContentLabelElement *_title;
    IESECTextElement *_addressTextElement;
    IESECTextElement *_distanceTextElement;
    IESECTextElement *_detailTextElement;
}

@property (retain, nonatomic) IESECLongContentLabelElement *title;
@property (retain, nonatomic) IESECTextElement *addressTextElement;
@property (retain, nonatomic) IESECTextElement *distanceTextElement;
@property (retain, nonatomic) IESECTextElement *detailTextElement;

+ (id)JSONKeyPathsByPropertyKey;

- (id)addressTextElement;
- (id)distanceTextElement;
- (id)detailTextElement;
- (void)setAddressTextElement:(id)arg0;
- (void)setDistanceTextElement:(id)arg0;
- (void)setDetailTextElement:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end