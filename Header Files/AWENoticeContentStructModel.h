//
//     Generated by private class-dump
//

@class NSString, NSArray, AWENoticeContentStructNumberInfoModel;

@interface AWENoticeContentStructModel : AWEBaseApiModel {
    NSString *_header;
    NSString *_footer;
    NSArray *_texts;
    AWENoticeContentStructNumberInfoModel *_numberInfoModel;
}

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSArray *texts;
@property (retain, nonatomic) AWENoticeContentStructNumberInfoModel *numberInfoModel;

+ (id)textsJSONTransformer;
+ (id)numberInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)numberInfoModel;
- (void)setNumberInfoModel:(id)arg0;
- (void)setFooter:(id)arg0;
- (void).cxx_destruct;
- (id)header;
- (id)footer;
- (void)setHeader:(id)arg0;
- (id)texts;
- (void)setTexts:(id)arg0;

@end
