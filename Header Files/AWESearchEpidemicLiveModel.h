//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchEpidemicLiveModel : AWEBaseApiModel {
    NSString *_titleText;
    NSString *_liveText;
    NSString *_liveIconStartColor;
    NSString *_liveIconEndColor;
    NSString *_schemaURL;
}

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *liveText;
@property (retain, nonatomic) NSString *liveIconStartColor;
@property (retain, nonatomic) NSString *liveIconEndColor;
@property (retain, nonatomic) NSString *schemaURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaURL;
- (void)setSchemaURL:(id)arg0;
- (void)setLiveText:(id)arg0;
- (id)liveIconStartColor;
- (void)setLiveIconStartColor:(id)arg0;
- (id)liveIconEndColor;
- (void)setLiveIconEndColor:(id)arg0;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleText;
- (id)liveText;

@end