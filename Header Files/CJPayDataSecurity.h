//
//     Generated by private class-dump
//

@interface CJPayDataSecurity : JSONModel {
    BOOL _enableDataSecurity;
    BOOL _blurType;
}

@property (nonatomic) BOOL enableDataSecurity;
@property (nonatomic) BOOL blurType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)enableDataSecurity;
- (void)setEnableDataSecurity:(BOOL)arg0;
- (BOOL)blurType;
- (void)setBlurType:(BOOL)arg0;

@end