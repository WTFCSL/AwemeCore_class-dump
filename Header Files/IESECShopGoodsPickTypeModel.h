//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECShopGoodsPickTypeModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSelected;
    long long _pickType;
    NSString *_pickName;
    IESECURLModel *_normalIconURL;
    IESECURLModel *_selectedIconURL;
}

@property (nonatomic) long long pickType;
@property (copy, nonatomic) NSString *pickName;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) IESECURLModel *normalIconURL;
@property (copy, nonatomic) IESECURLModel *selectedIconURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)pickType;
- (id)pickName;
- (void)setPickType:(long long)arg0;
- (void)setPickName:(id)arg0;
- (id)normalIconURL;
- (void)setNormalIconURL:(id)arg0;
- (id)selectedIconURL;
- (void)setSelectedIconURL:(id)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isSelected;

@end
