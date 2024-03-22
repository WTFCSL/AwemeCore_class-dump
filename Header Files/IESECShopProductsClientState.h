//
//     Generated by private class-dump
//

@class NSString;

@interface IESECShopProductsClientState : MTLModel <MTLJSONSerializing> {
    unsigned long long _listStyle;
    NSString *_selectButtonsContent;
    NSString *_interactiveProductID;
}

@property (nonatomic) unsigned long long listStyle;
@property (copy, nonatomic) NSString *selectButtonsContent;
@property (copy, nonatomic) NSString *interactiveProductID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)selectButtonsContent;
- (void)setSelectButtonsContent:(id)arg0;
- (id)interactiveProductID;
- (void)setInteractiveProductID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)listStyle;
- (void)setListStyle:(unsigned long long)arg0;

@end
