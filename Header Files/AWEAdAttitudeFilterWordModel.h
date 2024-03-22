//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdAttitudeFilterWordModel : MTLModel <MTLJSONSerializing> {
    BOOL _defaultSelected;
    BOOL _isPositive;
    BOOL _isSelected;
    NSString *_filterID;
    NSString *_filterName;
    NSString *_filterSubTitle;
}

@property (copy, nonatomic) NSString *filterID;
@property (nonatomic) BOOL defaultSelected;
@property (copy, nonatomic) NSString *filterName;
@property (copy, nonatomic) NSString *filterSubTitle;
@property (nonatomic) BOOL isPositive;
@property (nonatomic) BOOL isSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)isPositiveJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setFilterID:(id)arg0;
- (void)setIsPositive:(BOOL)arg0;
- (id)filterSubTitle;
- (void)setFilterSubTitle:(id)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (id)filterName;
- (BOOL)isSelected;
- (id)filterID;
- (void)setFilterName:(id)arg0;
- (BOOL)defaultSelected;
- (void)setDefaultSelected:(BOOL)arg0;
- (BOOL)isPositive;

@end
