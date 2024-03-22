//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEMultiTabMallIconModel2 : MTLModel <MTLJSONSerializing, AWEMallTimerTaskModelProtocol> {
    NSString *_selectIconUrlDark;
    NSString *_selectIconUrlLight;
    NSString *_unselectIconUrlDark;
    NSString *_unselectIconUrlLight;
    NSString *_iconType;
    NSString *_indicatorColorDark;
    NSString *_indicatorColorLight;
    double _startTime;
    double _endTime;
    NSString *_iconTitle;
    long long _imageHeight;
    long long _imageWidth;
    double _innerLeftMargin;
    double _innerRightMargin;
}

@property (copy, nonatomic) NSString *selectIconUrlDark;
@property (copy, nonatomic) NSString *selectIconUrlLight;
@property (copy, nonatomic) NSString *unselectIconUrlDark;
@property (copy, nonatomic) NSString *unselectIconUrlLight;
@property (copy, nonatomic) NSString *iconType;
@property (copy, nonatomic) NSString *indicatorColorDark;
@property (copy, nonatomic) NSString *indicatorColorLight;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *iconTitle;
@property (nonatomic) long long imageHeight;
@property (nonatomic) long long imageWidth;
@property (nonatomic) double innerLeftMargin;
@property (nonatomic) double innerRightMargin;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setIconTitle:(id)arg0;
- (id)unselectIconUrlDark;
- (id)unselectIconUrlLight;
- (id)selectIconUrlDark;
- (id)selectIconUrlLight;
- (double)innerLeftMargin;
- (double)innerRightMargin;
- (id)indicatorColorDark;
- (id)indicatorColorLight;
- (void)setSelectIconUrlDark:(id)arg0;
- (void)setSelectIconUrlLight:(id)arg0;
- (void)setUnselectIconUrlDark:(id)arg0;
- (void)setUnselectIconUrlLight:(id)arg0;
- (void)setIndicatorColorDark:(id)arg0;
- (void)setIndicatorColorLight:(id)arg0;
- (void)setInnerLeftMargin:(double)arg0;
- (void)setInnerRightMargin:(double)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;
- (long long)imageWidth;
- (id)iconType;
- (long long)imageHeight;
- (void)setIconType:(id)arg0;
- (id)iconTitle;
- (void)setImageHeight:(long long)arg0;
- (void)setImageWidth:(long long)arg0;

@end