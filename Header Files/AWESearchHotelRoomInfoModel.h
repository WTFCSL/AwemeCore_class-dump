//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEURLModel;

@interface AWESearchHotelRoomInfoModel : AWEBaseApiModel {
    NSNumber *_hotelId;
    NSNumber *_typeId;
    NSNumber *_price;
    NSString *_name;
    NSString *_typeName;
    NSString *_schema;
    AWEURLModel *_coverUrl;
}

@property (copy, nonatomic) NSNumber *hotelId;
@property (copy, nonatomic) NSNumber *typeId;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *coverUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (id)hotelId;
- (void)setHotelId:(id)arg0;
- (id)price;
- (void)setSchema:(id)arg0;
- (void)setTypeId:(id)arg0;
- (void).cxx_destruct;
- (void)setTypeName:(id)arg0;
- (void)setName:(id)arg0;
- (id)typeId;
- (id)typeName;
- (id)schema;
- (id)name;
- (void)setPrice:(id)arg0;

@end
