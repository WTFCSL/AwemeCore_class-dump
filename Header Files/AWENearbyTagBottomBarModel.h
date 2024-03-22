//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEURLModel;

@interface AWENearbyTagBottomBarModel : AWEBaseApiModel {
    NSString *_vedioId;
    NSString *_text;
    AWEURLModel *_icon;
    NSString *_schema;
    long long _frequencyLimit;
    NSString *_name;
    NSString *_extra;
    NSArray *_reportValues;
}

@property (copy, nonatomic) NSString *vedioId;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long frequencyLimit;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray *reportValues;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setReportValues:(id)arg0;
- (id)vedioId;
- (void)setVedioId:(id)arg0;
- (long long)frequencyLimit;
- (void)setFrequencyLimit:(long long)arg0;
- (void)setSchema:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)extra;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)text;
- (id)schema;
- (id)name;
- (id)reportValues;

@end
