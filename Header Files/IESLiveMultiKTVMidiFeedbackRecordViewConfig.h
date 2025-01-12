//
//     Generated by private class-dump
//

@class NSArray, UIColor, NSString;

@interface IESLiveMultiKTVMidiFeedbackRecordViewConfig : NSObject {
    BOOL _needTag;
    unsigned long long _style;
    NSArray *_lineViewColors;
    NSArray *_scoreNumberColors;
    NSArray *_scoreUnitColors;
    UIColor *_songTitleColor;
    NSString *_backgroundURL;
}

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *lineViewColors;
@property (copy, nonatomic) NSArray *scoreNumberColors;
@property (copy, nonatomic) NSArray *scoreUnitColors;
@property (retain, nonatomic) UIColor *songTitleColor;
@property (copy, nonatomic) NSString *backgroundURL;
@property (nonatomic) BOOL needTag;

- (id)backgroundURL;
- (void)setBackgroundURL:(id)arg0;
- (void)setLineViewColors:(id)arg0;
- (void)setScoreNumberColors:(id)arg0;
- (void)setScoreUnitColors:(id)arg0;
- (void)setSongTitleColor:(id)arg0;
- (void)setNeedTag:(BOOL)arg0;
- (id)lineViewColors;
- (id)scoreNumberColors;
- (id)scoreUnitColors;
- (id)songTitleColor;
- (BOOL)needTag;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg0;
- (void)setStyle:(unsigned long long)arg0;

@end
