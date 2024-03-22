//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdSearchQualityOptimization : MTLModel <MTLJSONSerializing> {
    BOOL _enable;
    BOOL _shouldShowLongConvertButton;
    BOOL _isAnchorStyle;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL shouldShowLongConvertButton;
@property (nonatomic) BOOL isAnchorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldShowLongConvertButton;
- (void)setShouldShowLongConvertButton:(BOOL)arg0;
- (BOOL)isAnchorStyle;
- (void)setIsAnchorStyle:(BOOL)arg0;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg0;

@end