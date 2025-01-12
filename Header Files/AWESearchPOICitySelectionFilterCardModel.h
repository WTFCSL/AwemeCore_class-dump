//
//     Generated by private class-dump
//

@class NSString, NSArray, AWESearchPOICitySelectionFilterCardStyleConfigModel, NSNumber;

@interface AWESearchPOICitySelectionFilterCardModel : AWEBaseApiModel {
    BOOL _selected;
    NSNumber *_isPlaceholderNumber;
    NSString *_strText;
    NSString *_strLinkedText;
    NSString *_strCityCode;
    NSString *_strCityName;
    NSString *_strType;
    NSString *_strConditionField;
    NSString *_strConditionValue;
    NSArray *_arrChildrenComponents;
    AWESearchPOICitySelectionFilterCardStyleConfigModel *_styleConfig;
    struct CGSize { double width; double height; } _cellCachedSize;
}

@property (copy, nonatomic) NSNumber *isPlaceholderNumber;
@property (copy, nonatomic) NSString *strText;
@property (copy, nonatomic) NSString *strLinkedText;
@property (copy, nonatomic) NSString *strCityCode;
@property (copy, nonatomic) NSString *strCityName;
@property (copy, nonatomic) NSString *strType;
@property (copy, nonatomic) NSString *strConditionField;
@property (copy, nonatomic) NSString *strConditionValue;
@property (copy, nonatomic) NSArray *arrChildrenComponents;
@property (retain, nonatomic) AWESearchPOICitySelectionFilterCardStyleConfigModel *styleConfig;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) struct CGSize { double width; double height; } cellCachedSize;

+ (id)arrChildrenComponentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setStyleConfig:(id)arg0;
- (id)styleConfig;
- (id)isPlaceholderNumber;
- (void)setIsPlaceholderNumber:(id)arg0;
- (id)strText;
- (void)setStrText:(id)arg0;
- (id)strLinkedText;
- (void)setStrLinkedText:(id)arg0;
- (id)strCityCode;
- (void)setStrCityCode:(id)arg0;
- (id)strCityName;
- (void)setStrCityName:(id)arg0;
- (id)strType;
- (void)setStrType:(id)arg0;
- (id)strConditionField;
- (void)setStrConditionField:(id)arg0;
- (id)strConditionValue;
- (void)setStrConditionValue:(id)arg0;
- (id)arrChildrenComponents;
- (void)setArrChildrenComponents:(id)arg0;
- (struct CGSize { double x0; double x1; })cellCachedSize;
- (void)setCellCachedSize:(struct CGSize { double x0; double x1; })arg0;
- (void)syncValuesForKeysFromAnotherOne:(id)arg0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg0;
- (BOOL)isSelected;

@end
