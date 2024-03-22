//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAntiAddictSelectedInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_aid;
    NSString *_primaryTitle;
    NSString *_secondaryTitle;
    NSNumber *_value;
}

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *primaryTitle;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSNumber *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEmptyModel;
- (id)secondaryTitle;
- (void).cxx_destruct;
- (id)value;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setSecondaryTitle:(id)arg0;
- (void)setValue:(id)arg0;
- (void)setPrimaryTitle:(id)arg0;
- (id)primaryTitle;
- (void)setAid:(id)arg0;
- (id)aid;

@end
