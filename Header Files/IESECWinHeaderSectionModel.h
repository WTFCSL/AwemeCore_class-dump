//
//     Generated by private class-dump
//

@class NSArray, IESECWinHeaderSectionStyle, NSString;

@interface IESECWinHeaderSectionModel : MTLModel <MTLJSONSerializing> {
    IESECWinHeaderSectionStyle *_sectionStyle;
    NSArray *_items;
    unsigned long long _splitConfigType;
}

@property (retain, nonatomic) IESECWinHeaderSectionStyle *sectionStyle;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long splitConfigType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSectionStyle:(id)arg0;
- (unsigned long long)splitConfigType;
- (void)setSplitConfigType:(unsigned long long)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)sectionStyle;

@end
