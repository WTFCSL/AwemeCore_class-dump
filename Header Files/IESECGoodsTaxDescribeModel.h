//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECGoodsTaxDescribeModel : MTLModel <MTLJSONSerializing> {
    NSString *_taxTitle;
    NSString *_taxDescribe;
    NSArray *_taxDescribeItems;
    NSString *_hasTax;
}

@property (retain, nonatomic) NSString *taxTitle;
@property (retain, nonatomic) NSString *taxDescribe;
@property (retain, nonatomic) NSArray *taxDescribeItems;
@property (retain, nonatomic) NSString *hasTax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)taxDescribe;
- (void)setTaxDescribe:(id)arg0;
- (id)taxTitle;
- (void)setTaxTitle:(id)arg0;
- (id)taxDescribeItems;
- (void)setTaxDescribeItems:(id)arg0;
- (id)hasTax;
- (void)setHasTax:(id)arg0;
- (void).cxx_destruct;

@end
