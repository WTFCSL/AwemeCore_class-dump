//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECGoodsDetailDetailTagCard : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_tagImg;
    NSString *_link;
}

@property (retain, nonatomic) IESECURLModel *tagImg;
@property (copy, nonatomic) NSString *link;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tagImg;
- (void)setTagImg:(id)arg0;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (id)link;

@end
