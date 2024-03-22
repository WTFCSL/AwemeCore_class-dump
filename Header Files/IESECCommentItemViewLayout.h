//
//     Generated by private class-dump
//

@interface IESECCommentItemViewLayout : NSObject {
    long long _style;
    long long _titleLine;
    double _normalHorizontalSpace;
    double _normalVerticalSpace;
}

@property (nonatomic) long long style;
@property (nonatomic) long long titleLine;
@property (nonatomic) double normalHorizontalSpace;
@property (nonatomic) double normalVerticalSpace;

+ (id)contentFont;
+ (double)itemHeightForMediaCount:(unsigned long long)arg0 layoutStyle:(long long)arg1 horizontalSpace:(double)arg2;
+ (double)heightForMediasCount:(unsigned long long)arg0 layoutStyle:(long long)arg1 verticalSpace:(double)arg2 horizontalSpace:(double)arg3;
+ (double)contentLineSpaceFromFont:(id)arg0;

- (double)normalVerticalSpace;
- (double)normalHorizontalSpace;
- (long long)titleLine;
- (void)setTitleLine:(long long)arg0;
- (void)setNormalHorizontalSpace:(double)arg0;
- (void)setNormalVerticalSpace:(double)arg0;
- (long long)style;
- (void)setStyle:(long long)arg0;

@end
