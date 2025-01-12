//
//     Generated by private class-dump
//

@class NSString, AWENearbyActivityTextStyleModel, AWEURLModel;

@interface AWENearbyActivityTabResourceModel : AWEBaseApiModel {
    double _startTime;
    double _endTime;
    AWEURLModel *_urls;
    NSString *_content;
    AWENearbyActivityTextStyleModel *_textStyle;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) AWEURLModel *urls;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWENearbyActivityTextStyleModel *textStyle;

+ (id)urlsJSONTransformer;
+ (id)textStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)urls;
- (id)textStyle;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setTextStyle:(id)arg0;
- (id)content;
- (double)endTime;
- (double)startTime;
- (void)setContent:(id)arg0;
- (void)setUrls:(id)arg0;
- (void)setEndTime:(double)arg0;

@end
